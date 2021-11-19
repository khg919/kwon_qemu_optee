/* Generated by ./src/xlat/gen.sh from ./src/xlat/sysctl_net_unix.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"


#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat sysctl_net_unix in mpers mode

# else

static const struct xlat_data sysctl_net_unix_xdata[] = {
 XLAT(NET_UNIX_DESTROY_DELAY),
 #define XLAT_VAL_0 ((unsigned) (NET_UNIX_DESTROY_DELAY))
 #define XLAT_STR_0 STRINGIFY(NET_UNIX_DESTROY_DELAY)
 XLAT(NET_UNIX_DELETE_DELAY),
 #define XLAT_VAL_1 ((unsigned) (NET_UNIX_DELETE_DELAY))
 #define XLAT_STR_1 STRINGIFY(NET_UNIX_DELETE_DELAY)
 XLAT(NET_UNIX_MAX_DGRAM_QLEN),
 #define XLAT_VAL_2 ((unsigned) (NET_UNIX_MAX_DGRAM_QLEN))
 #define XLAT_STR_2 STRINGIFY(NET_UNIX_MAX_DGRAM_QLEN)
};
static
const struct xlat sysctl_net_unix[1] = { {
 .data = sysctl_net_unix_xdata,
 .size = ARRAY_SIZE(sysctl_net_unix_xdata),
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