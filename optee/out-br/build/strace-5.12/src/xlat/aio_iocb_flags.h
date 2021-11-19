/* Generated by ./src/xlat/gen.sh from ./src/xlat/aio_iocb_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(IOCB_FLAG_RESFD) || (defined(HAVE_DECL_IOCB_FLAG_RESFD) && HAVE_DECL_IOCB_FLAG_RESFD)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IOCB_FLAG_RESFD) == (1), "IOCB_FLAG_RESFD != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IOCB_FLAG_RESFD 1
#endif
#if defined(IOCB_FLAG_IOPRIO) || (defined(HAVE_DECL_IOCB_FLAG_IOPRIO) && HAVE_DECL_IOCB_FLAG_IOPRIO)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IOCB_FLAG_IOPRIO) == (2), "IOCB_FLAG_IOPRIO != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IOCB_FLAG_IOPRIO 2
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat aio_iocb_flags in mpers mode

# else

static const struct xlat_data aio_iocb_flags_xdata[] = {
 XLAT(IOCB_FLAG_RESFD),
 #define XLAT_VAL_0 ((unsigned) (IOCB_FLAG_RESFD))
 #define XLAT_STR_0 STRINGIFY(IOCB_FLAG_RESFD)
 XLAT(IOCB_FLAG_IOPRIO),
 #define XLAT_VAL_1 ((unsigned) (IOCB_FLAG_IOPRIO))
 #define XLAT_STR_1 STRINGIFY(IOCB_FLAG_IOPRIO)
};
static
const struct xlat aio_iocb_flags[1] = { {
 .data = aio_iocb_flags_xdata,
 .size = ARRAY_SIZE(aio_iocb_flags_xdata),
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
