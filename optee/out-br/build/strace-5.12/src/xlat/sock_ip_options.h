/* Generated by ./src/xlat/gen.sh from ./src/xlat/sock_ip_options.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"


#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat sock_ip_options in mpers mode

# else

static const struct xlat_data sock_ip_options_xdata[] = {
#if defined(IP_TOS) || (defined(HAVE_DECL_IP_TOS) && HAVE_DECL_IP_TOS)
  XLAT(IP_TOS),
 #define XLAT_VAL_0 ((unsigned) (IP_TOS))
 #define XLAT_STR_0 STRINGIFY(IP_TOS)
#endif
#if defined(IP_TTL) || (defined(HAVE_DECL_IP_TTL) && HAVE_DECL_IP_TTL)
  XLAT(IP_TTL),
 #define XLAT_VAL_1 ((unsigned) (IP_TTL))
 #define XLAT_STR_1 STRINGIFY(IP_TTL)
#endif
#if defined(IP_HDRINCL) || (defined(HAVE_DECL_IP_HDRINCL) && HAVE_DECL_IP_HDRINCL)
  XLAT(IP_HDRINCL),
 #define XLAT_VAL_2 ((unsigned) (IP_HDRINCL))
 #define XLAT_STR_2 STRINGIFY(IP_HDRINCL)
#endif
#if defined(IP_OPTIONS) || (defined(HAVE_DECL_IP_OPTIONS) && HAVE_DECL_IP_OPTIONS)
  XLAT(IP_OPTIONS),
 #define XLAT_VAL_3 ((unsigned) (IP_OPTIONS))
 #define XLAT_STR_3 STRINGIFY(IP_OPTIONS)
#endif
#if defined(IP_ROUTER_ALERT) || (defined(HAVE_DECL_IP_ROUTER_ALERT) && HAVE_DECL_IP_ROUTER_ALERT)
  XLAT(IP_ROUTER_ALERT),
 #define XLAT_VAL_4 ((unsigned) (IP_ROUTER_ALERT))
 #define XLAT_STR_4 STRINGIFY(IP_ROUTER_ALERT)
#endif
#if defined(IP_RECVOPTIONS) || (defined(HAVE_DECL_IP_RECVOPTIONS) && HAVE_DECL_IP_RECVOPTIONS)
  XLAT(IP_RECVOPTIONS),
 #define XLAT_VAL_5 ((unsigned) (IP_RECVOPTIONS))
 #define XLAT_STR_5 STRINGIFY(IP_RECVOPTIONS)
#endif
#if defined(IP_RECVOPTS) || (defined(HAVE_DECL_IP_RECVOPTS) && HAVE_DECL_IP_RECVOPTS)
  XLAT(IP_RECVOPTS),
 #define XLAT_VAL_6 ((unsigned) (IP_RECVOPTS))
 #define XLAT_STR_6 STRINGIFY(IP_RECVOPTS)
#endif
#if defined(IP_RETOPTS) || (defined(HAVE_DECL_IP_RETOPTS) && HAVE_DECL_IP_RETOPTS)
  XLAT(IP_RETOPTS),
 #define XLAT_VAL_7 ((unsigned) (IP_RETOPTS))
 #define XLAT_STR_7 STRINGIFY(IP_RETOPTS)
#endif
#if defined(IP_RECVRETOPTS) || (defined(HAVE_DECL_IP_RECVRETOPTS) && HAVE_DECL_IP_RECVRETOPTS)
  XLAT(IP_RECVRETOPTS),
 #define XLAT_VAL_8 ((unsigned) (IP_RECVRETOPTS))
 #define XLAT_STR_8 STRINGIFY(IP_RECVRETOPTS)
#endif
#if defined(IP_RECVDSTADDR) || (defined(HAVE_DECL_IP_RECVDSTADDR) && HAVE_DECL_IP_RECVDSTADDR)
  XLAT(IP_RECVDSTADDR),
 #define XLAT_VAL_9 ((unsigned) (IP_RECVDSTADDR))
 #define XLAT_STR_9 STRINGIFY(IP_RECVDSTADDR)
#endif
#if defined(IP_PKTINFO) || (defined(HAVE_DECL_IP_PKTINFO) && HAVE_DECL_IP_PKTINFO)
  XLAT(IP_PKTINFO),
 #define XLAT_VAL_10 ((unsigned) (IP_PKTINFO))
 #define XLAT_STR_10 STRINGIFY(IP_PKTINFO)
#endif
#if defined(IP_PKTOPTIONS) || (defined(HAVE_DECL_IP_PKTOPTIONS) && HAVE_DECL_IP_PKTOPTIONS)
  XLAT(IP_PKTOPTIONS),
 #define XLAT_VAL_11 ((unsigned) (IP_PKTOPTIONS))
 #define XLAT_STR_11 STRINGIFY(IP_PKTOPTIONS)
#endif
#if defined(IP_MTU_DISCOVER) || (defined(HAVE_DECL_IP_MTU_DISCOVER) && HAVE_DECL_IP_MTU_DISCOVER)
  XLAT(IP_MTU_DISCOVER),
 #define XLAT_VAL_12 ((unsigned) (IP_MTU_DISCOVER))
 #define XLAT_STR_12 STRINGIFY(IP_MTU_DISCOVER)
#endif
#if defined(IP_RECVERR) || (defined(HAVE_DECL_IP_RECVERR) && HAVE_DECL_IP_RECVERR)
  XLAT(IP_RECVERR),
 #define XLAT_VAL_13 ((unsigned) (IP_RECVERR))
 #define XLAT_STR_13 STRINGIFY(IP_RECVERR)
#endif
#if defined(IP_RECVTTL) || (defined(HAVE_DECL_IP_RECVTTL) && HAVE_DECL_IP_RECVTTL)
  XLAT(IP_RECVTTL),
 #define XLAT_VAL_14 ((unsigned) (IP_RECVTTL))
 #define XLAT_STR_14 STRINGIFY(IP_RECVTTL)
#endif
#if defined(IP_RECVTOS) || (defined(HAVE_DECL_IP_RECVTOS) && HAVE_DECL_IP_RECVTOS)
  XLAT(IP_RECVTOS),
 #define XLAT_VAL_15 ((unsigned) (IP_RECVTOS))
 #define XLAT_STR_15 STRINGIFY(IP_RECVTOS)
#endif
#if defined(IP_MTU) || (defined(HAVE_DECL_IP_MTU) && HAVE_DECL_IP_MTU)
  XLAT(IP_MTU),
 #define XLAT_VAL_16 ((unsigned) (IP_MTU))
 #define XLAT_STR_16 STRINGIFY(IP_MTU)
#endif
#if defined(IP_MULTICAST_IF) || (defined(HAVE_DECL_IP_MULTICAST_IF) && HAVE_DECL_IP_MULTICAST_IF)
  XLAT(IP_MULTICAST_IF),
 #define XLAT_VAL_17 ((unsigned) (IP_MULTICAST_IF))
 #define XLAT_STR_17 STRINGIFY(IP_MULTICAST_IF)
#endif
#if defined(IP_MULTICAST_TTL) || (defined(HAVE_DECL_IP_MULTICAST_TTL) && HAVE_DECL_IP_MULTICAST_TTL)
  XLAT(IP_MULTICAST_TTL),
 #define XLAT_VAL_18 ((unsigned) (IP_MULTICAST_TTL))
 #define XLAT_STR_18 STRINGIFY(IP_MULTICAST_TTL)
#endif
#if defined(IP_MULTICAST_LOOP) || (defined(HAVE_DECL_IP_MULTICAST_LOOP) && HAVE_DECL_IP_MULTICAST_LOOP)
  XLAT(IP_MULTICAST_LOOP),
 #define XLAT_VAL_19 ((unsigned) (IP_MULTICAST_LOOP))
 #define XLAT_STR_19 STRINGIFY(IP_MULTICAST_LOOP)
#endif
#if defined(IP_ADD_MEMBERSHIP) || (defined(HAVE_DECL_IP_ADD_MEMBERSHIP) && HAVE_DECL_IP_ADD_MEMBERSHIP)
  XLAT(IP_ADD_MEMBERSHIP),
 #define XLAT_VAL_20 ((unsigned) (IP_ADD_MEMBERSHIP))
 #define XLAT_STR_20 STRINGIFY(IP_ADD_MEMBERSHIP)
#endif
#if defined(IP_DROP_MEMBERSHIP) || (defined(HAVE_DECL_IP_DROP_MEMBERSHIP) && HAVE_DECL_IP_DROP_MEMBERSHIP)
  XLAT(IP_DROP_MEMBERSHIP),
 #define XLAT_VAL_21 ((unsigned) (IP_DROP_MEMBERSHIP))
 #define XLAT_STR_21 STRINGIFY(IP_DROP_MEMBERSHIP)
#endif
#if defined(IP_BROADCAST_IF) || (defined(HAVE_DECL_IP_BROADCAST_IF) && HAVE_DECL_IP_BROADCAST_IF)
  XLAT(IP_BROADCAST_IF),
 #define XLAT_VAL_22 ((unsigned) (IP_BROADCAST_IF))
 #define XLAT_STR_22 STRINGIFY(IP_BROADCAST_IF)
#endif
#if defined(IP_RECVIFINDEX) || (defined(HAVE_DECL_IP_RECVIFINDEX) && HAVE_DECL_IP_RECVIFINDEX)
  XLAT(IP_RECVIFINDEX),
 #define XLAT_VAL_23 ((unsigned) (IP_RECVIFINDEX))
 #define XLAT_STR_23 STRINGIFY(IP_RECVIFINDEX)
#endif
#if defined(IP_MSFILTER) || (defined(HAVE_DECL_IP_MSFILTER) && HAVE_DECL_IP_MSFILTER)
  XLAT(IP_MSFILTER),
 #define XLAT_VAL_24 ((unsigned) (IP_MSFILTER))
 #define XLAT_STR_24 STRINGIFY(IP_MSFILTER)
#endif
#if defined(IP_FREEBIND) || (defined(HAVE_DECL_IP_FREEBIND) && HAVE_DECL_IP_FREEBIND)
  XLAT(IP_FREEBIND),
 #define XLAT_VAL_25 ((unsigned) (IP_FREEBIND))
 #define XLAT_STR_25 STRINGIFY(IP_FREEBIND)
#endif
#if defined(IP_IPSEC_POLICY) || (defined(HAVE_DECL_IP_IPSEC_POLICY) && HAVE_DECL_IP_IPSEC_POLICY)
  XLAT(IP_IPSEC_POLICY),
 #define XLAT_VAL_26 ((unsigned) (IP_IPSEC_POLICY))
 #define XLAT_STR_26 STRINGIFY(IP_IPSEC_POLICY)
#endif
#if defined(IP_XFRM_POLICY) || (defined(HAVE_DECL_IP_XFRM_POLICY) && HAVE_DECL_IP_XFRM_POLICY)
  XLAT(IP_XFRM_POLICY),
 #define XLAT_VAL_27 ((unsigned) (IP_XFRM_POLICY))
 #define XLAT_STR_27 STRINGIFY(IP_XFRM_POLICY)
#endif
#if defined(IP_PASSSEC) || (defined(HAVE_DECL_IP_PASSSEC) && HAVE_DECL_IP_PASSSEC)
  XLAT(IP_PASSSEC),
 #define XLAT_VAL_28 ((unsigned) (IP_PASSSEC))
 #define XLAT_STR_28 STRINGIFY(IP_PASSSEC)
#endif
#if defined(IP_TRANSPARENT) || (defined(HAVE_DECL_IP_TRANSPARENT) && HAVE_DECL_IP_TRANSPARENT)
  XLAT(IP_TRANSPARENT),
 #define XLAT_VAL_29 ((unsigned) (IP_TRANSPARENT))
 #define XLAT_STR_29 STRINGIFY(IP_TRANSPARENT)
#endif
#if defined(IP_ORIGDSTADDR) || (defined(HAVE_DECL_IP_ORIGDSTADDR) && HAVE_DECL_IP_ORIGDSTADDR)
  XLAT(IP_ORIGDSTADDR),
 #define XLAT_VAL_30 ((unsigned) (IP_ORIGDSTADDR))
 #define XLAT_STR_30 STRINGIFY(IP_ORIGDSTADDR)
#endif
#if defined(IP_RECVORIGDSTADDR) || (defined(HAVE_DECL_IP_RECVORIGDSTADDR) && HAVE_DECL_IP_RECVORIGDSTADDR)
  XLAT(IP_RECVORIGDSTADDR),
 #define XLAT_VAL_31 ((unsigned) (IP_RECVORIGDSTADDR))
 #define XLAT_STR_31 STRINGIFY(IP_RECVORIGDSTADDR)
#endif
#if defined(IP_MINTTL) || (defined(HAVE_DECL_IP_MINTTL) && HAVE_DECL_IP_MINTTL)
  XLAT(IP_MINTTL),
 #define XLAT_VAL_32 ((unsigned) (IP_MINTTL))
 #define XLAT_STR_32 STRINGIFY(IP_MINTTL)
#endif
#if defined(IP_NODEFRAG) || (defined(HAVE_DECL_IP_NODEFRAG) && HAVE_DECL_IP_NODEFRAG)
  XLAT(IP_NODEFRAG),
 #define XLAT_VAL_33 ((unsigned) (IP_NODEFRAG))
 #define XLAT_STR_33 STRINGIFY(IP_NODEFRAG)
#endif
#if defined(IP_CHECKSUM) || (defined(HAVE_DECL_IP_CHECKSUM) && HAVE_DECL_IP_CHECKSUM)
  XLAT(IP_CHECKSUM),
 #define XLAT_VAL_34 ((unsigned) (IP_CHECKSUM))
 #define XLAT_STR_34 STRINGIFY(IP_CHECKSUM)
#endif
#if defined(IP_BIND_ADDRESS_NO_PORT) || (defined(HAVE_DECL_IP_BIND_ADDRESS_NO_PORT) && HAVE_DECL_IP_BIND_ADDRESS_NO_PORT)
  XLAT(IP_BIND_ADDRESS_NO_PORT),
 #define XLAT_VAL_35 ((unsigned) (IP_BIND_ADDRESS_NO_PORT))
 #define XLAT_STR_35 STRINGIFY(IP_BIND_ADDRESS_NO_PORT)
#endif
#if defined(IP_RECVFRAGSIZE) || (defined(HAVE_DECL_IP_RECVFRAGSIZE) && HAVE_DECL_IP_RECVFRAGSIZE)
  XLAT(IP_RECVFRAGSIZE),
 #define XLAT_VAL_36 ((unsigned) (IP_RECVFRAGSIZE))
 #define XLAT_STR_36 STRINGIFY(IP_RECVFRAGSIZE)
#endif
#if defined(IP_RECVERR_RFC4884) || (defined(HAVE_DECL_IP_RECVERR_RFC4884) && HAVE_DECL_IP_RECVERR_RFC4884)
  XLAT(IP_RECVERR_RFC4884),
 #define XLAT_VAL_37 ((unsigned) (IP_RECVERR_RFC4884))
 #define XLAT_STR_37 STRINGIFY(IP_RECVERR_RFC4884)
#endif
#if defined(IP_UNBLOCK_SOURCE) || (defined(HAVE_DECL_IP_UNBLOCK_SOURCE) && HAVE_DECL_IP_UNBLOCK_SOURCE)
  XLAT(IP_UNBLOCK_SOURCE),
 #define XLAT_VAL_38 ((unsigned) (IP_UNBLOCK_SOURCE))
 #define XLAT_STR_38 STRINGIFY(IP_UNBLOCK_SOURCE)
#endif
#if defined(IP_BLOCK_SOURCE) || (defined(HAVE_DECL_IP_BLOCK_SOURCE) && HAVE_DECL_IP_BLOCK_SOURCE)
  XLAT(IP_BLOCK_SOURCE),
 #define XLAT_VAL_39 ((unsigned) (IP_BLOCK_SOURCE))
 #define XLAT_STR_39 STRINGIFY(IP_BLOCK_SOURCE)
#endif
#if defined(IP_ADD_SOURCE_MEMBERSHIP) || (defined(HAVE_DECL_IP_ADD_SOURCE_MEMBERSHIP) && HAVE_DECL_IP_ADD_SOURCE_MEMBERSHIP)
  XLAT(IP_ADD_SOURCE_MEMBERSHIP),
 #define XLAT_VAL_40 ((unsigned) (IP_ADD_SOURCE_MEMBERSHIP))
 #define XLAT_STR_40 STRINGIFY(IP_ADD_SOURCE_MEMBERSHIP)
#endif
#if defined(IP_DROP_SOURCE_MEMBERSHIP) || (defined(HAVE_DECL_IP_DROP_SOURCE_MEMBERSHIP) && HAVE_DECL_IP_DROP_SOURCE_MEMBERSHIP)
  XLAT(IP_DROP_SOURCE_MEMBERSHIP),
 #define XLAT_VAL_41 ((unsigned) (IP_DROP_SOURCE_MEMBERSHIP))
 #define XLAT_STR_41 STRINGIFY(IP_DROP_SOURCE_MEMBERSHIP)
#endif
#if defined(MCAST_JOIN_GROUP) || (defined(HAVE_DECL_MCAST_JOIN_GROUP) && HAVE_DECL_MCAST_JOIN_GROUP)
  XLAT(MCAST_JOIN_GROUP),
 #define XLAT_VAL_42 ((unsigned) (MCAST_JOIN_GROUP))
 #define XLAT_STR_42 STRINGIFY(MCAST_JOIN_GROUP)
#endif
#if defined(MCAST_BLOCK_SOURCE) || (defined(HAVE_DECL_MCAST_BLOCK_SOURCE) && HAVE_DECL_MCAST_BLOCK_SOURCE)
  XLAT(MCAST_BLOCK_SOURCE),
 #define XLAT_VAL_43 ((unsigned) (MCAST_BLOCK_SOURCE))
 #define XLAT_STR_43 STRINGIFY(MCAST_BLOCK_SOURCE)
#endif
#if defined(MCAST_UNBLOCK_SOURCE) || (defined(HAVE_DECL_MCAST_UNBLOCK_SOURCE) && HAVE_DECL_MCAST_UNBLOCK_SOURCE)
  XLAT(MCAST_UNBLOCK_SOURCE),
 #define XLAT_VAL_44 ((unsigned) (MCAST_UNBLOCK_SOURCE))
 #define XLAT_STR_44 STRINGIFY(MCAST_UNBLOCK_SOURCE)
#endif
#if defined(MCAST_LEAVE_GROUP) || (defined(HAVE_DECL_MCAST_LEAVE_GROUP) && HAVE_DECL_MCAST_LEAVE_GROUP)
  XLAT(MCAST_LEAVE_GROUP),
 #define XLAT_VAL_45 ((unsigned) (MCAST_LEAVE_GROUP))
 #define XLAT_STR_45 STRINGIFY(MCAST_LEAVE_GROUP)
#endif
#if defined(MCAST_JOIN_SOURCE_GROUP) || (defined(HAVE_DECL_MCAST_JOIN_SOURCE_GROUP) && HAVE_DECL_MCAST_JOIN_SOURCE_GROUP)
  XLAT(MCAST_JOIN_SOURCE_GROUP),
 #define XLAT_VAL_46 ((unsigned) (MCAST_JOIN_SOURCE_GROUP))
 #define XLAT_STR_46 STRINGIFY(MCAST_JOIN_SOURCE_GROUP)
#endif
#if defined(MCAST_LEAVE_SOURCE_GROUP) || (defined(HAVE_DECL_MCAST_LEAVE_SOURCE_GROUP) && HAVE_DECL_MCAST_LEAVE_SOURCE_GROUP)
  XLAT(MCAST_LEAVE_SOURCE_GROUP),
 #define XLAT_VAL_47 ((unsigned) (MCAST_LEAVE_SOURCE_GROUP))
 #define XLAT_STR_47 STRINGIFY(MCAST_LEAVE_SOURCE_GROUP)
#endif
#if defined(MCAST_MSFILTER) || (defined(HAVE_DECL_MCAST_MSFILTER) && HAVE_DECL_MCAST_MSFILTER)
  XLAT(MCAST_MSFILTER),
 #define XLAT_VAL_48 ((unsigned) (MCAST_MSFILTER))
 #define XLAT_STR_48 STRINGIFY(MCAST_MSFILTER)
#endif
#if defined(IP_MULTICAST_ALL) || (defined(HAVE_DECL_IP_MULTICAST_ALL) && HAVE_DECL_IP_MULTICAST_ALL)
  XLAT(IP_MULTICAST_ALL),
 #define XLAT_VAL_49 ((unsigned) (IP_MULTICAST_ALL))
 #define XLAT_STR_49 STRINGIFY(IP_MULTICAST_ALL)
#endif
#if defined(IP_UNICAST_IF) || (defined(HAVE_DECL_IP_UNICAST_IF) && HAVE_DECL_IP_UNICAST_IF)
  XLAT(IP_UNICAST_IF),
 #define XLAT_VAL_50 ((unsigned) (IP_UNICAST_IF))
 #define XLAT_STR_50 STRINGIFY(IP_UNICAST_IF)
#endif
};
static
const struct xlat sock_ip_options[1] = { {
 .data = sock_ip_options_xdata,
 .size = ARRAY_SIZE(sock_ip_options_xdata),
 .type = XT_NORMAL,
 .flags_mask = 0
#  ifdef XLAT_VAL_0
  | XLAT_VAL_0
#  endif
#  ifdef XLAT_VAL_1
  | XLAT_VAL_1
#  endif
#  ifdef XLAT_VAL_2
  | XLAT_VAL_2
#  endif
#  ifdef XLAT_VAL_3
  | XLAT_VAL_3
#  endif
#  ifdef XLAT_VAL_4
  | XLAT_VAL_4
#  endif
#  ifdef XLAT_VAL_5
  | XLAT_VAL_5
#  endif
#  ifdef XLAT_VAL_6
  | XLAT_VAL_6
#  endif
#  ifdef XLAT_VAL_7
  | XLAT_VAL_7
#  endif
#  ifdef XLAT_VAL_8
  | XLAT_VAL_8
#  endif
#  ifdef XLAT_VAL_9
  | XLAT_VAL_9
#  endif
#  ifdef XLAT_VAL_10
  | XLAT_VAL_10
#  endif
#  ifdef XLAT_VAL_11
  | XLAT_VAL_11
#  endif
#  ifdef XLAT_VAL_12
  | XLAT_VAL_12
#  endif
#  ifdef XLAT_VAL_13
  | XLAT_VAL_13
#  endif
#  ifdef XLAT_VAL_14
  | XLAT_VAL_14
#  endif
#  ifdef XLAT_VAL_15
  | XLAT_VAL_15
#  endif
#  ifdef XLAT_VAL_16
  | XLAT_VAL_16
#  endif
#  ifdef XLAT_VAL_17
  | XLAT_VAL_17
#  endif
#  ifdef XLAT_VAL_18
  | XLAT_VAL_18
#  endif
#  ifdef XLAT_VAL_19
  | XLAT_VAL_19
#  endif
#  ifdef XLAT_VAL_20
  | XLAT_VAL_20
#  endif
#  ifdef XLAT_VAL_21
  | XLAT_VAL_21
#  endif
#  ifdef XLAT_VAL_22
  | XLAT_VAL_22
#  endif
#  ifdef XLAT_VAL_23
  | XLAT_VAL_23
#  endif
#  ifdef XLAT_VAL_24
  | XLAT_VAL_24
#  endif
#  ifdef XLAT_VAL_25
  | XLAT_VAL_25
#  endif
#  ifdef XLAT_VAL_26
  | XLAT_VAL_26
#  endif
#  ifdef XLAT_VAL_27
  | XLAT_VAL_27
#  endif
#  ifdef XLAT_VAL_28
  | XLAT_VAL_28
#  endif
#  ifdef XLAT_VAL_29
  | XLAT_VAL_29
#  endif
#  ifdef XLAT_VAL_30
  | XLAT_VAL_30
#  endif
#  ifdef XLAT_VAL_31
  | XLAT_VAL_31
#  endif
#  ifdef XLAT_VAL_32
  | XLAT_VAL_32
#  endif
#  ifdef XLAT_VAL_33
  | XLAT_VAL_33
#  endif
#  ifdef XLAT_VAL_34
  | XLAT_VAL_34
#  endif
#  ifdef XLAT_VAL_35
  | XLAT_VAL_35
#  endif
#  ifdef XLAT_VAL_36
  | XLAT_VAL_36
#  endif
#  ifdef XLAT_VAL_37
  | XLAT_VAL_37
#  endif
#  ifdef XLAT_VAL_38
  | XLAT_VAL_38
#  endif
#  ifdef XLAT_VAL_39
  | XLAT_VAL_39
#  endif
#  ifdef XLAT_VAL_40
  | XLAT_VAL_40
#  endif
#  ifdef XLAT_VAL_41
  | XLAT_VAL_41
#  endif
#  ifdef XLAT_VAL_42
  | XLAT_VAL_42
#  endif
#  ifdef XLAT_VAL_43
  | XLAT_VAL_43
#  endif
#  ifdef XLAT_VAL_44
  | XLAT_VAL_44
#  endif
#  ifdef XLAT_VAL_45
  | XLAT_VAL_45
#  endif
#  ifdef XLAT_VAL_46
  | XLAT_VAL_46
#  endif
#  ifdef XLAT_VAL_47
  | XLAT_VAL_47
#  endif
#  ifdef XLAT_VAL_48
  | XLAT_VAL_48
#  endif
#  ifdef XLAT_VAL_49
  | XLAT_VAL_49
#  endif
#  ifdef XLAT_VAL_50
  | XLAT_VAL_50
#  endif
  ,
 .flags_strsz = 0
#  ifdef XLAT_STR_0
  + sizeof(XLAT_STR_0)
#  endif
#  ifdef XLAT_STR_1
  + sizeof(XLAT_STR_1)
#  endif
#  ifdef XLAT_STR_2
  + sizeof(XLAT_STR_2)
#  endif
#  ifdef XLAT_STR_3
  + sizeof(XLAT_STR_3)
#  endif
#  ifdef XLAT_STR_4
  + sizeof(XLAT_STR_4)
#  endif
#  ifdef XLAT_STR_5
  + sizeof(XLAT_STR_5)
#  endif
#  ifdef XLAT_STR_6
  + sizeof(XLAT_STR_6)
#  endif
#  ifdef XLAT_STR_7
  + sizeof(XLAT_STR_7)
#  endif
#  ifdef XLAT_STR_8
  + sizeof(XLAT_STR_8)
#  endif
#  ifdef XLAT_STR_9
  + sizeof(XLAT_STR_9)
#  endif
#  ifdef XLAT_STR_10
  + sizeof(XLAT_STR_10)
#  endif
#  ifdef XLAT_STR_11
  + sizeof(XLAT_STR_11)
#  endif
#  ifdef XLAT_STR_12
  + sizeof(XLAT_STR_12)
#  endif
#  ifdef XLAT_STR_13
  + sizeof(XLAT_STR_13)
#  endif
#  ifdef XLAT_STR_14
  + sizeof(XLAT_STR_14)
#  endif
#  ifdef XLAT_STR_15
  + sizeof(XLAT_STR_15)
#  endif
#  ifdef XLAT_STR_16
  + sizeof(XLAT_STR_16)
#  endif
#  ifdef XLAT_STR_17
  + sizeof(XLAT_STR_17)
#  endif
#  ifdef XLAT_STR_18
  + sizeof(XLAT_STR_18)
#  endif
#  ifdef XLAT_STR_19
  + sizeof(XLAT_STR_19)
#  endif
#  ifdef XLAT_STR_20
  + sizeof(XLAT_STR_20)
#  endif
#  ifdef XLAT_STR_21
  + sizeof(XLAT_STR_21)
#  endif
#  ifdef XLAT_STR_22
  + sizeof(XLAT_STR_22)
#  endif
#  ifdef XLAT_STR_23
  + sizeof(XLAT_STR_23)
#  endif
#  ifdef XLAT_STR_24
  + sizeof(XLAT_STR_24)
#  endif
#  ifdef XLAT_STR_25
  + sizeof(XLAT_STR_25)
#  endif
#  ifdef XLAT_STR_26
  + sizeof(XLAT_STR_26)
#  endif
#  ifdef XLAT_STR_27
  + sizeof(XLAT_STR_27)
#  endif
#  ifdef XLAT_STR_28
  + sizeof(XLAT_STR_28)
#  endif
#  ifdef XLAT_STR_29
  + sizeof(XLAT_STR_29)
#  endif
#  ifdef XLAT_STR_30
  + sizeof(XLAT_STR_30)
#  endif
#  ifdef XLAT_STR_31
  + sizeof(XLAT_STR_31)
#  endif
#  ifdef XLAT_STR_32
  + sizeof(XLAT_STR_32)
#  endif
#  ifdef XLAT_STR_33
  + sizeof(XLAT_STR_33)
#  endif
#  ifdef XLAT_STR_34
  + sizeof(XLAT_STR_34)
#  endif
#  ifdef XLAT_STR_35
  + sizeof(XLAT_STR_35)
#  endif
#  ifdef XLAT_STR_36
  + sizeof(XLAT_STR_36)
#  endif
#  ifdef XLAT_STR_37
  + sizeof(XLAT_STR_37)
#  endif
#  ifdef XLAT_STR_38
  + sizeof(XLAT_STR_38)
#  endif
#  ifdef XLAT_STR_39
  + sizeof(XLAT_STR_39)
#  endif
#  ifdef XLAT_STR_40
  + sizeof(XLAT_STR_40)
#  endif
#  ifdef XLAT_STR_41
  + sizeof(XLAT_STR_41)
#  endif
#  ifdef XLAT_STR_42
  + sizeof(XLAT_STR_42)
#  endif
#  ifdef XLAT_STR_43
  + sizeof(XLAT_STR_43)
#  endif
#  ifdef XLAT_STR_44
  + sizeof(XLAT_STR_44)
#  endif
#  ifdef XLAT_STR_45
  + sizeof(XLAT_STR_45)
#  endif
#  ifdef XLAT_STR_46
  + sizeof(XLAT_STR_46)
#  endif
#  ifdef XLAT_STR_47
  + sizeof(XLAT_STR_47)
#  endif
#  ifdef XLAT_STR_48
  + sizeof(XLAT_STR_48)
#  endif
#  ifdef XLAT_STR_49
  + sizeof(XLAT_STR_49)
#  endif
#  ifdef XLAT_STR_50
  + sizeof(XLAT_STR_50)
#  endif
  ,
} };

#  undef XLAT_STR_0
#  undef XLAT_VAL_0
#  undef XLAT_STR_1
#  undef XLAT_VAL_1
#  undef XLAT_STR_2
#  undef XLAT_VAL_2
#  undef XLAT_STR_3
#  undef XLAT_VAL_3
#  undef XLAT_STR_4
#  undef XLAT_VAL_4
#  undef XLAT_STR_5
#  undef XLAT_VAL_5
#  undef XLAT_STR_6
#  undef XLAT_VAL_6
#  undef XLAT_STR_7
#  undef XLAT_VAL_7
#  undef XLAT_STR_8
#  undef XLAT_VAL_8
#  undef XLAT_STR_9
#  undef XLAT_VAL_9
#  undef XLAT_STR_10
#  undef XLAT_VAL_10
#  undef XLAT_STR_11
#  undef XLAT_VAL_11
#  undef XLAT_STR_12
#  undef XLAT_VAL_12
#  undef XLAT_STR_13
#  undef XLAT_VAL_13
#  undef XLAT_STR_14
#  undef XLAT_VAL_14
#  undef XLAT_STR_15
#  undef XLAT_VAL_15
#  undef XLAT_STR_16
#  undef XLAT_VAL_16
#  undef XLAT_STR_17
#  undef XLAT_VAL_17
#  undef XLAT_STR_18
#  undef XLAT_VAL_18
#  undef XLAT_STR_19
#  undef XLAT_VAL_19
#  undef XLAT_STR_20
#  undef XLAT_VAL_20
#  undef XLAT_STR_21
#  undef XLAT_VAL_21
#  undef XLAT_STR_22
#  undef XLAT_VAL_22
#  undef XLAT_STR_23
#  undef XLAT_VAL_23
#  undef XLAT_STR_24
#  undef XLAT_VAL_24
#  undef XLAT_STR_25
#  undef XLAT_VAL_25
#  undef XLAT_STR_26
#  undef XLAT_VAL_26
#  undef XLAT_STR_27
#  undef XLAT_VAL_27
#  undef XLAT_STR_28
#  undef XLAT_VAL_28
#  undef XLAT_STR_29
#  undef XLAT_VAL_29
#  undef XLAT_STR_30
#  undef XLAT_VAL_30
#  undef XLAT_STR_31
#  undef XLAT_VAL_31
#  undef XLAT_STR_32
#  undef XLAT_VAL_32
#  undef XLAT_STR_33
#  undef XLAT_VAL_33
#  undef XLAT_STR_34
#  undef XLAT_VAL_34
#  undef XLAT_STR_35
#  undef XLAT_VAL_35
#  undef XLAT_STR_36
#  undef XLAT_VAL_36
#  undef XLAT_STR_37
#  undef XLAT_VAL_37
#  undef XLAT_STR_38
#  undef XLAT_VAL_38
#  undef XLAT_STR_39
#  undef XLAT_VAL_39
#  undef XLAT_STR_40
#  undef XLAT_VAL_40
#  undef XLAT_STR_41
#  undef XLAT_VAL_41
#  undef XLAT_STR_42
#  undef XLAT_VAL_42
#  undef XLAT_STR_43
#  undef XLAT_VAL_43
#  undef XLAT_STR_44
#  undef XLAT_VAL_44
#  undef XLAT_STR_45
#  undef XLAT_VAL_45
#  undef XLAT_STR_46
#  undef XLAT_VAL_46
#  undef XLAT_STR_47
#  undef XLAT_VAL_47
#  undef XLAT_STR_48
#  undef XLAT_VAL_48
#  undef XLAT_STR_49
#  undef XLAT_VAL_49
#  undef XLAT_STR_50
#  undef XLAT_VAL_50
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
