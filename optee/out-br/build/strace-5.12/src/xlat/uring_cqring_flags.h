/* Generated by ./src/xlat/gen.sh from ./src/xlat/uring_cqring_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"


#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat uring_cqring_flags in mpers mode

# else

static const struct xlat_data uring_cqring_flags_xdata[] = {
 XLAT(IORING_CQ_EVENTFD_DISABLED),
 #define XLAT_VAL_0 ((unsigned) (IORING_CQ_EVENTFD_DISABLED))
 #define XLAT_STR_0 STRINGIFY(IORING_CQ_EVENTFD_DISABLED)
};
static
const struct xlat uring_cqring_flags[1] = { {
 .data = uring_cqring_flags_xdata,
 .size = ARRAY_SIZE(uring_cqring_flags_xdata),
 .type = XT_NORMAL,
 .flags_mask = 0
#  ifdef XLAT_VAL_0
  | XLAT_VAL_0
#  endif
  ,
 .flags_strsz = 0
#  ifdef XLAT_STR_0
  + sizeof(XLAT_STR_0)
#  endif
  ,
} };

#  undef XLAT_STR_0
#  undef XLAT_VAL_0
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
