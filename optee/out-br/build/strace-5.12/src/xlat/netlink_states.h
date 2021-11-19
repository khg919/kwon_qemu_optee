/* Generated by ./src/xlat/gen.sh from ./src/xlat/netlink_states.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(NETLINK_UNCONNECTED) || (defined(HAVE_DECL_NETLINK_UNCONNECTED) && HAVE_DECL_NETLINK_UNCONNECTED)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NETLINK_UNCONNECTED) == (0), "NETLINK_UNCONNECTED != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NETLINK_UNCONNECTED 0
#endif
#if defined(NETLINK_CONNECTED) || (defined(HAVE_DECL_NETLINK_CONNECTED) && HAVE_DECL_NETLINK_CONNECTED)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NETLINK_CONNECTED) == (1), "NETLINK_CONNECTED != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NETLINK_CONNECTED 1
#endif
#if defined(TCP_CLOSE) || (defined(HAVE_DECL_TCP_CLOSE) && HAVE_DECL_TCP_CLOSE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TCP_CLOSE) == (7), "TCP_CLOSE != 7");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TCP_CLOSE 7
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat netlink_states in mpers mode

# else

static const struct xlat_data netlink_states_xdata[] = {
 XLAT(NETLINK_UNCONNECTED),
 #define XLAT_VAL_0 ((unsigned) (NETLINK_UNCONNECTED))
 #define XLAT_STR_0 STRINGIFY(NETLINK_UNCONNECTED)
 XLAT(NETLINK_CONNECTED),
 #define XLAT_VAL_1 ((unsigned) (NETLINK_CONNECTED))
 #define XLAT_STR_1 STRINGIFY(NETLINK_CONNECTED)

 XLAT(TCP_CLOSE),
 #define XLAT_VAL_2 ((unsigned) (TCP_CLOSE))
 #define XLAT_STR_2 STRINGIFY(TCP_CLOSE)
};
static
const struct xlat netlink_states[1] = { {
 .data = netlink_states_xdata,
 .size = ARRAY_SIZE(netlink_states_xdata),
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
  ,
} };

#  undef XLAT_STR_0
#  undef XLAT_VAL_0
#  undef XLAT_STR_1
#  undef XLAT_VAL_1
#  undef XLAT_STR_2
#  undef XLAT_VAL_2
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
