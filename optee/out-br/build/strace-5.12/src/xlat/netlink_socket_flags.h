/* Generated by ./src/xlat/gen.sh from ./src/xlat/netlink_socket_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"


#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat netlink_socket_flags in mpers mode

# else

static const struct xlat_data netlink_socket_flags_xdata[] = {
#if defined(NDIAG_FLAG_CB_RUNNING) || (defined(HAVE_DECL_NDIAG_FLAG_CB_RUNNING) && HAVE_DECL_NDIAG_FLAG_CB_RUNNING)
  XLAT(NDIAG_FLAG_CB_RUNNING),
 #define XLAT_VAL_0 ((unsigned) (NDIAG_FLAG_CB_RUNNING))
 #define XLAT_STR_0 STRINGIFY(NDIAG_FLAG_CB_RUNNING)
#endif
#if defined(NDIAG_FLAG_PKTINFO) || (defined(HAVE_DECL_NDIAG_FLAG_PKTINFO) && HAVE_DECL_NDIAG_FLAG_PKTINFO)
  XLAT(NDIAG_FLAG_PKTINFO),
 #define XLAT_VAL_1 ((unsigned) (NDIAG_FLAG_PKTINFO))
 #define XLAT_STR_1 STRINGIFY(NDIAG_FLAG_PKTINFO)
#endif
#if defined(NDIAG_FLAG_BROADCAST_ERROR) || (defined(HAVE_DECL_NDIAG_FLAG_BROADCAST_ERROR) && HAVE_DECL_NDIAG_FLAG_BROADCAST_ERROR)
  XLAT(NDIAG_FLAG_BROADCAST_ERROR),
 #define XLAT_VAL_2 ((unsigned) (NDIAG_FLAG_BROADCAST_ERROR))
 #define XLAT_STR_2 STRINGIFY(NDIAG_FLAG_BROADCAST_ERROR)
#endif
#if defined(NDIAG_FLAG_NO_ENOBUFS) || (defined(HAVE_DECL_NDIAG_FLAG_NO_ENOBUFS) && HAVE_DECL_NDIAG_FLAG_NO_ENOBUFS)
  XLAT(NDIAG_FLAG_NO_ENOBUFS),
 #define XLAT_VAL_3 ((unsigned) (NDIAG_FLAG_NO_ENOBUFS))
 #define XLAT_STR_3 STRINGIFY(NDIAG_FLAG_NO_ENOBUFS)
#endif
#if defined(NDIAG_FLAG_LISTEN_ALL_NSID) || (defined(HAVE_DECL_NDIAG_FLAG_LISTEN_ALL_NSID) && HAVE_DECL_NDIAG_FLAG_LISTEN_ALL_NSID)
  XLAT(NDIAG_FLAG_LISTEN_ALL_NSID),
 #define XLAT_VAL_4 ((unsigned) (NDIAG_FLAG_LISTEN_ALL_NSID))
 #define XLAT_STR_4 STRINGIFY(NDIAG_FLAG_LISTEN_ALL_NSID)
#endif
#if defined(NDIAG_FLAG_CAP_ACK) || (defined(HAVE_DECL_NDIAG_FLAG_CAP_ACK) && HAVE_DECL_NDIAG_FLAG_CAP_ACK)
  XLAT(NDIAG_FLAG_CAP_ACK),
 #define XLAT_VAL_5 ((unsigned) (NDIAG_FLAG_CAP_ACK))
 #define XLAT_STR_5 STRINGIFY(NDIAG_FLAG_CAP_ACK)
#endif
};
static
const struct xlat netlink_socket_flags[1] = { {
 .data = netlink_socket_flags_xdata,
 .size = ARRAY_SIZE(netlink_socket_flags_xdata),
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
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
