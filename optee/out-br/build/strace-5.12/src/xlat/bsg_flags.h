/* Generated by ./src/xlat/gen.sh from ./src/xlat/bsg_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"


#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat bsg_flags in mpers mode

# else

static const struct xlat_data bsg_flags_xdata[] = {
 XLAT(BSG_FLAG_Q_AT_TAIL),
 #define XLAT_VAL_0 ((unsigned) (BSG_FLAG_Q_AT_TAIL))
 #define XLAT_STR_0 STRINGIFY(BSG_FLAG_Q_AT_TAIL)
 XLAT(BSG_FLAG_Q_AT_HEAD),
 #define XLAT_VAL_1 ((unsigned) (BSG_FLAG_Q_AT_HEAD))
 #define XLAT_STR_1 STRINGIFY(BSG_FLAG_Q_AT_HEAD)
};
static
const struct xlat bsg_flags[1] = { {
 .data = bsg_flags_xdata,
 .size = ARRAY_SIZE(bsg_flags_xdata),
 .type = XT_NORMAL,
 .flags_mask = 0
#  ifdef XLAT_VAL_0
  | XLAT_VAL_0
#  endif
#  ifdef XLAT_VAL_1
  | XLAT_VAL_1
#  endif
  ,
 .flags_strsz = 0
#  ifdef XLAT_STR_0
  + sizeof(XLAT_STR_0)
#  endif
#  ifdef XLAT_STR_1
  + sizeof(XLAT_STR_1)
#  endif
  ,
} };

#  undef XLAT_STR_0
#  undef XLAT_VAL_0
#  undef XLAT_STR_1
#  undef XLAT_VAL_1
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */