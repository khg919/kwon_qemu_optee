/* Generated by ./src/xlat/gen.sh from ./src/xlat/uring_setup_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"


#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat uring_setup_flags in mpers mode

# else

static const struct xlat_data uring_setup_flags_xdata[] = {
 XLAT(IORING_SETUP_IOPOLL),
 #define XLAT_VAL_0 ((unsigned) (IORING_SETUP_IOPOLL))
 #define XLAT_STR_0 STRINGIFY(IORING_SETUP_IOPOLL)
 XLAT(IORING_SETUP_SQPOLL),
 #define XLAT_VAL_1 ((unsigned) (IORING_SETUP_SQPOLL))
 #define XLAT_STR_1 STRINGIFY(IORING_SETUP_SQPOLL)
 XLAT(IORING_SETUP_SQ_AFF),
 #define XLAT_VAL_2 ((unsigned) (IORING_SETUP_SQ_AFF))
 #define XLAT_STR_2 STRINGIFY(IORING_SETUP_SQ_AFF)
 XLAT(IORING_SETUP_CQSIZE),
 #define XLAT_VAL_3 ((unsigned) (IORING_SETUP_CQSIZE))
 #define XLAT_STR_3 STRINGIFY(IORING_SETUP_CQSIZE)
 XLAT(IORING_SETUP_CLAMP),
 #define XLAT_VAL_4 ((unsigned) (IORING_SETUP_CLAMP))
 #define XLAT_STR_4 STRINGIFY(IORING_SETUP_CLAMP)
 XLAT(IORING_SETUP_ATTACH_WQ),
 #define XLAT_VAL_5 ((unsigned) (IORING_SETUP_ATTACH_WQ))
 #define XLAT_STR_5 STRINGIFY(IORING_SETUP_ATTACH_WQ)
 XLAT(IORING_SETUP_R_DISABLED),
 #define XLAT_VAL_6 ((unsigned) (IORING_SETUP_R_DISABLED))
 #define XLAT_STR_6 STRINGIFY(IORING_SETUP_R_DISABLED)
};
static
const struct xlat uring_setup_flags[1] = { {
 .data = uring_setup_flags_xdata,
 .size = ARRAY_SIZE(uring_setup_flags_xdata),
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
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
