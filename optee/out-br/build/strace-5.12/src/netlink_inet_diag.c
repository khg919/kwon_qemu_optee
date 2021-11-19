/*
 * Copyright (c) 2016 Fabien Siron <fabien.siron@epita.fr>
 * Copyright (c) 2017 JingPiao Chen <chenjingpiao@gmail.com>
 * Copyright (c) 2017-2021 The strace developers.
 * All rights reserved.
 *
 * SPDX-License-Identifier: LGPL-2.1-or-later
 */

#include "defs.h"
#include "netlink.h"
#include "netlink_sock_diag.h"
#include "nlattr.h"

#include <arpa/inet.h>

#include <linux/sock_diag.h>
#include <linux/inet_diag.h>

#include "xlat/inet_diag_attrs.h"
#include "xlat/inet_diag_bytecodes.h"
#include "xlat/inet_diag_extended_flags.h"
#include "xlat/inet_diag_req_attrs.h"

#include "xlat/tcp_states.h"
#include "xlat/tcp_state_flags.h"

void
print_inet_diag_sockid(const struct inet_diag_sockid *id, const uint8_t family)
{
	tprint_struct_begin();
	PRINT_FIELD_NET_PORT(*id, idiag_sport);
	tprint_struct_next();
	PRINT_FIELD_NET_PORT(*id, idiag_dport);
	tprint_struct_next();
	PRINT_FIELD_INET_ADDR(*id, idiag_src, family);
	tprint_struct_next();
	PRINT_FIELD_INET_ADDR(*id, idiag_dst, family);
	tprint_struct_next();
	PRINT_FIELD_IFINDEX(*id, idiag_if);
	tprint_struct_next();
	PRINT_FIELD_COOKIE(*id, idiag_cookie);
	tprint_struct_end();
}

static void
decode_inet_diag_hostcond(struct tcb *const tcp,
			  const kernel_ulong_t addr,
			  const unsigned int len)
{
	struct inet_diag_hostcond cond;

	if (len < sizeof(cond)) {
		printstr_ex(tcp, addr, len, QUOTE_FORCE_HEX);
		return;
	}
	if (umove_or_printaddr(tcp, addr, &cond))
		return;

	tprint_struct_begin();
	PRINT_FIELD_XVAL(cond, family, addrfams, "AF_???");
	tprint_struct_next();
	PRINT_FIELD_U(cond, prefix_len);
	tprint_struct_next();
	PRINT_FIELD_U(cond, port);

	if (len > sizeof(cond)) {
		tprints(", ");
		decode_inet_addr(tcp, addr + sizeof(cond),
				 len - sizeof(cond), cond.family, "addr");
	}
	tprint_struct_end();
}

static void
print_inet_diag_bc_op(const struct inet_diag_bc_op *const op)
{
	tprint_struct_begin();
	PRINT_FIELD_XVAL(*op, code, inet_diag_bytecodes, "INET_DIAG_BC_???");
	tprint_struct_next();
	PRINT_FIELD_U(*op, yes);
	tprint_struct_next();
	PRINT_FIELD_U(*op, no);
	tprint_struct_end();
}

static void
decode_inet_diag_markcond(struct tcb *const tcp,
			  const kernel_ulong_t addr,
			  const unsigned int len)
{
	struct inet_diag_markcond markcond;

	if (len < sizeof(markcond))
		printstr_ex(tcp, addr, len, QUOTE_FORCE_HEX);
	else if (!umove_or_printaddr(tcp, addr, &markcond)) {
		tprint_struct_begin();
		PRINT_FIELD_U(markcond, mark);
		tprint_struct_next();
		PRINT_FIELD_U(markcond, mask);
		tprint_struct_end();
	}
}

static void
decode_bytecode_data(struct tcb *const tcp,
		     const kernel_ulong_t addr,
		     const unsigned int len,
		     const unsigned char code)
{
	switch (code) {
	case INET_DIAG_BC_S_COND:
	case INET_DIAG_BC_D_COND:
		decode_inet_diag_hostcond(tcp, addr, len);
		break;
	case INET_DIAG_BC_DEV_COND: {
		uint32_t ifindex;

		if (len < sizeof(ifindex))
			printstr_ex(tcp, addr, len, QUOTE_FORCE_HEX);
		else if (!umove_or_printaddr(tcp, addr, &ifindex))
			print_ifindex(ifindex);
		break;
	}
	case INET_DIAG_BC_S_GE:
	case INET_DIAG_BC_S_LE:
	case INET_DIAG_BC_D_GE:
	case INET_DIAG_BC_D_LE: {
		struct inet_diag_bc_op op;

		if (len < sizeof(op))
			printstr_ex(tcp, addr, len, QUOTE_FORCE_HEX);
		else if (!umove_or_printaddr(tcp, addr, &op))
			print_inet_diag_bc_op(&op);
		break;
	}
	case INET_DIAG_BC_MARK_COND:
		decode_inet_diag_markcond(tcp, addr, len);
		break;
	case INET_DIAG_BC_AUTO:
	case INET_DIAG_BC_JMP:
	case INET_DIAG_BC_NOP:
	default:
		printstr_ex(tcp, addr, len, QUOTE_FORCE_HEX);
		break;
	}
}

static bool
decode_inet_diag_bc_op(struct tcb *const tcp,
		       const kernel_ulong_t addr,
		       const unsigned int len,
		       const void *const opaque_data)
{
	struct inet_diag_bc_op op;

	if (len < sizeof(op))
		return false;
	if (umove_or_printaddr(tcp, addr, &op))
		return true;

	if (len > sizeof(op))
		tprint_struct_begin();

	print_inet_diag_bc_op(&op);

	if (len > sizeof(op)) {
		tprints(", ");
		decode_bytecode_data(tcp, addr + sizeof(op),
				     len - sizeof(op), op.code);
		tprint_struct_end();
	}

	return true;
}

static const nla_decoder_t inet_diag_req_nla_decoders[] = {
	[INET_DIAG_REQ_BYTECODE] = decode_inet_diag_bc_op
};

static void
decode_inet_diag_req_compat(struct tcb *const tcp,
			    const struct nlmsghdr *const nlmsghdr,
			    const uint8_t family,
			    const kernel_ulong_t addr,
			    const unsigned int len)
{
	struct inet_diag_req req = { .idiag_family = family };
	size_t offset = sizeof(req.idiag_family);
	bool decode_nla = false;

	tprint_struct_begin();
	PRINT_FIELD_XVAL(req, idiag_family, addrfams, "AF_???");
	tprints(", ");
	if (len >= sizeof(req)) {
		if (!umoven_or_printaddr(tcp, addr + offset,
					 sizeof(req) - offset,
					 (char *) &req + offset)) {
			PRINT_FIELD_U(req, idiag_src_len);
			tprint_struct_next();
			PRINT_FIELD_U(req, idiag_dst_len);
			tprint_struct_next();
			PRINT_FIELD_FLAGS(req, idiag_ext,
					  inet_diag_extended_flags,
					  "1<<INET_DIAG_\?\?\?-1");
			tprint_struct_next();
			PRINT_FIELD_INET_DIAG_SOCKID(req, id,
						     req.idiag_family);
			tprint_struct_next();
			PRINT_FIELD_FLAGS(req, idiag_states,
					  tcp_state_flags, "1<<TCP_???");
			tprint_struct_next();
			PRINT_FIELD_U(req, idiag_dbs);
			decode_nla = true;
		}
	} else
		tprint_more_data_follows();
	tprint_struct_end();

	offset = NLMSG_ALIGN(sizeof(req));
	if (decode_nla && len > offset) {
		tprints(", ");
		decode_nlattr(tcp, addr + offset, len - offset,
			      inet_diag_req_attrs, "INET_DIAG_REQ_???",
			      inet_diag_req_nla_decoders,
			      ARRAY_SIZE(inet_diag_req_nla_decoders), NULL);
	}
}

static void
decode_inet_diag_req_v2(struct tcb *const tcp,
			const struct nlmsghdr *const nlmsghdr,
			const uint8_t family,
			const kernel_ulong_t addr,
			const unsigned int len)
{
	struct inet_diag_req_v2 req = { .sdiag_family = family };
	size_t offset = sizeof(req.sdiag_family);
	bool decode_nla = false;

	tprint_struct_begin();
	PRINT_FIELD_XVAL(req, sdiag_family, addrfams, "AF_???");
	tprints(", ");
	if (len >= sizeof(req)) {
		if (!umoven_or_printaddr(tcp, addr + offset,
					 sizeof(req) - offset,
					 (char *) &req + offset)) {
			PRINT_FIELD_XVAL(req, sdiag_protocol,
					 inet_protocols, "IPPROTO_???");
			tprint_struct_next();
			PRINT_FIELD_FLAGS(req, idiag_ext,
					  inet_diag_extended_flags,
					  "1<<INET_DIAG_\?\?\?-1");
			tprint_struct_next();
			PRINT_FIELD_FLAGS(req, idiag_states,
					  tcp_state_flags, "1<<TCP_???");
			tprint_struct_next();
			PRINT_FIELD_INET_DIAG_SOCKID(req, id,
						     req.sdiag_family);
			decode_nla = true;
		}
	} else
		tprint_more_data_follows();
	tprint_struct_end();

	offset = NLMSG_ALIGN(sizeof(req));
	if (decode_nla && len > offset) {
		tprints(", ");
		decode_nlattr(tcp, addr + offset, len - offset,
			      inet_diag_req_attrs, "INET_DIAG_REQ_???",
			      inet_diag_req_nla_decoders,
			      ARRAY_SIZE(inet_diag_req_nla_decoders), NULL);
	}
}

DECL_NETLINK_DIAG_DECODER(decode_inet_diag_req)
{
	if (nlmsghdr->nlmsg_type == TCPDIAG_GETSOCK
	    || nlmsghdr->nlmsg_type == DCCPDIAG_GETSOCK)
		decode_inet_diag_req_compat(tcp, nlmsghdr, family, addr, len);
	else
		decode_inet_diag_req_v2(tcp, nlmsghdr, family, addr, len);
}

static bool
decode_inet_diag_meminfo(struct tcb *const tcp,
			 const kernel_ulong_t addr,
			 const unsigned int len,
			 const void *const opaque_data)
{
	struct inet_diag_meminfo minfo;

	if (len < sizeof(minfo))
		return false;
	if (umove_or_printaddr(tcp, addr, &minfo))
		return true;

	tprint_struct_begin();
	PRINT_FIELD_U(minfo, idiag_rmem);
	tprint_struct_next();
	PRINT_FIELD_U(minfo, idiag_wmem);
	tprint_struct_next();
	PRINT_FIELD_U(minfo, idiag_fmem);
	tprint_struct_next();
	PRINT_FIELD_U(minfo, idiag_tmem);
	tprint_struct_end();

	return true;
}

static bool
decode_tcpvegas_info(struct tcb *const tcp,
		     const kernel_ulong_t addr,
		     const unsigned int len,
		     const void *const opaque_data)
{
	struct tcpvegas_info vegas;

	if (len < sizeof(vegas))
		return false;
	if (umove_or_printaddr(tcp, addr, &vegas))
		return true;

	tprint_struct_begin();
	PRINT_FIELD_U(vegas, tcpv_enabled);
	tprint_struct_next();
	PRINT_FIELD_U(vegas, tcpv_rttcnt);
	tprint_struct_next();
	PRINT_FIELD_U(vegas, tcpv_rtt);
	tprint_struct_next();
	PRINT_FIELD_U(vegas, tcpv_minrtt);
	tprint_struct_end();

	return true;
}

static bool
decode_tcp_dctcp_info(struct tcb *const tcp,
		      const kernel_ulong_t addr,
		      const unsigned int len,
		      const void *const opaque_data)
{
	struct tcp_dctcp_info dctcp;

	if (len < sizeof(dctcp))
		return false;
	if (umove_or_printaddr(tcp, addr, &dctcp))
		return true;

	tprint_struct_begin();
	PRINT_FIELD_U(dctcp, dctcp_enabled);
	tprint_struct_next();
	PRINT_FIELD_U(dctcp, dctcp_ce_state);
	tprint_struct_next();
	PRINT_FIELD_U(dctcp, dctcp_alpha);
	tprint_struct_next();
	PRINT_FIELD_U(dctcp, dctcp_ab_ecn);
	tprint_struct_next();
	PRINT_FIELD_U(dctcp, dctcp_ab_tot);
	tprint_struct_end();

	return true;
}

static bool
decode_tcp_bbr_info(struct tcb *const tcp,
		    const kernel_ulong_t addr,
		    const unsigned int len,
		    const void *const opaque_data)
{
	struct tcp_bbr_info bbr;

	if (len < sizeof(bbr))
		return false;
	if (umove_or_printaddr(tcp, addr, &bbr))
		return true;

	tprint_struct_begin();
	PRINT_FIELD_X(bbr, bbr_bw_lo);
	tprint_struct_next();
	PRINT_FIELD_X(bbr, bbr_bw_hi);
	tprint_struct_next();
	PRINT_FIELD_U(bbr, bbr_min_rtt);
	tprint_struct_next();
	PRINT_FIELD_U(bbr, bbr_pacing_gain);
	tprint_struct_next();
	PRINT_FIELD_U(bbr, bbr_cwnd_gain);
	tprint_struct_end();

	return true;
}

static const nla_decoder_t inet_diag_msg_nla_decoders[] = {
	[INET_DIAG_MEMINFO]	= decode_inet_diag_meminfo,
	[INET_DIAG_INFO]	= NULL,			/* unimplemented */
	[INET_DIAG_VEGASINFO]	= decode_tcpvegas_info,
	[INET_DIAG_CONG]	= decode_nla_str,
	[INET_DIAG_TOS]		= decode_nla_u8,
	[INET_DIAG_TCLASS]	= decode_nla_u8,
	[INET_DIAG_SKMEMINFO]	= decode_nla_meminfo,
	[INET_DIAG_SHUTDOWN]	= decode_nla_u8,
	[INET_DIAG_DCTCPINFO]	= decode_tcp_dctcp_info,
	[INET_DIAG_PROTOCOL]	= decode_nla_u8,
	[INET_DIAG_SKV6ONLY]	= decode_nla_u8,
	[INET_DIAG_LOCALS]	= NULL,			/* unimplemented */
	[INET_DIAG_PEERS]	= NULL,			/* unimplemented */
	[INET_DIAG_PAD]		= NULL,
	[INET_DIAG_MARK]	= decode_nla_u32,
	[INET_DIAG_BBRINFO]	= decode_tcp_bbr_info,
	[INET_DIAG_CLASS_ID]	= decode_nla_u32
};

DECL_NETLINK_DIAG_DECODER(decode_inet_diag_msg)
{
	struct inet_diag_msg msg = { .idiag_family = family };
	size_t offset = sizeof(msg.idiag_family);
	bool decode_nla = false;

	tprint_struct_begin();
	PRINT_FIELD_XVAL(msg, idiag_family, addrfams, "AF_???");
	tprints(", ");
	if (len >= sizeof(msg)) {
		if (!umoven_or_printaddr(tcp, addr + offset,
					 sizeof(msg) - offset,
					 (char *) &msg + offset)) {
			PRINT_FIELD_XVAL(msg, idiag_state,
					 tcp_states, "TCP_???");
			tprint_struct_next();
			PRINT_FIELD_U(msg, idiag_timer);
			tprint_struct_next();
			PRINT_FIELD_U(msg, idiag_retrans);
			tprint_struct_next();
			PRINT_FIELD_INET_DIAG_SOCKID(msg, id,
						     msg.idiag_family);
			tprint_struct_next();
			PRINT_FIELD_U(msg, idiag_expires);
			tprint_struct_next();
			PRINT_FIELD_U(msg, idiag_rqueue);
			tprint_struct_next();
			PRINT_FIELD_U(msg, idiag_wqueue);
			tprint_struct_next();
			PRINT_FIELD_U(msg, idiag_uid);
			tprint_struct_next();
			PRINT_FIELD_U(msg, idiag_inode);
			decode_nla = true;
		}
	} else
		tprint_more_data_follows();
	tprint_struct_end();

	offset = NLMSG_ALIGN(sizeof(msg));
	if (decode_nla && len > offset) {
		tprints(", ");
		decode_nlattr(tcp, addr + offset, len - offset,
			      inet_diag_attrs, "INET_DIAG_???",
			      inet_diag_msg_nla_decoders,
			      ARRAY_SIZE(inet_diag_msg_nla_decoders), NULL);
	}
}
