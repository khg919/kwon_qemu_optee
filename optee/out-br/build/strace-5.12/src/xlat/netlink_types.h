/* Generated by ./src/xlat/gen.sh from ./src/xlat/netlink_types.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"


#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat netlink_types in mpers mode

# else

static const struct xlat_data netlink_types_xdata[] = {
 [NLMSG_NOOP] = XLAT(NLMSG_NOOP),
 #define XLAT_VAL_0 ((unsigned) (NLMSG_NOOP))
 #define XLAT_STR_0 STRINGIFY(NLMSG_NOOP)
 [NLMSG_ERROR] = XLAT(NLMSG_ERROR),
 #define XLAT_VAL_1 ((unsigned) (NLMSG_ERROR))
 #define XLAT_STR_1 STRINGIFY(NLMSG_ERROR)
 [NLMSG_DONE] = XLAT(NLMSG_DONE),
 #define XLAT_VAL_2 ((unsigned) (NLMSG_DONE))
 #define XLAT_STR_2 STRINGIFY(NLMSG_DONE)
 [NLMSG_OVERRUN] = XLAT(NLMSG_OVERRUN),
 #define XLAT_VAL_3 ((unsigned) (NLMSG_OVERRUN))
 #define XLAT_STR_3 STRINGIFY(NLMSG_OVERRUN)
};
static
const struct xlat netlink_types[1] = { {
 .data = netlink_types_xdata,
 .size = ARRAY_SIZE(netlink_types_xdata),
 .type = XT_INDEXED,
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
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
