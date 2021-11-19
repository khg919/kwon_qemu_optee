/* Generated by ./src/xlat/gen.sh from ./src/xlat/rwf_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(RWF_HIPRI) || (defined(HAVE_DECL_RWF_HIPRI) && HAVE_DECL_RWF_HIPRI)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RWF_HIPRI) == (0x01), "RWF_HIPRI != 0x01");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RWF_HIPRI 0x01
#endif
#if defined(RWF_DSYNC) || (defined(HAVE_DECL_RWF_DSYNC) && HAVE_DECL_RWF_DSYNC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RWF_DSYNC) == (0x02), "RWF_DSYNC != 0x02");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RWF_DSYNC 0x02
#endif
#if defined(RWF_SYNC) || (defined(HAVE_DECL_RWF_SYNC) && HAVE_DECL_RWF_SYNC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RWF_SYNC) == (0x04), "RWF_SYNC != 0x04");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RWF_SYNC 0x04
#endif
#if defined(RWF_NOWAIT) || (defined(HAVE_DECL_RWF_NOWAIT) && HAVE_DECL_RWF_NOWAIT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RWF_NOWAIT) == (0x08), "RWF_NOWAIT != 0x08");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RWF_NOWAIT 0x08
#endif
#if defined(RWF_APPEND) || (defined(HAVE_DECL_RWF_APPEND) && HAVE_DECL_RWF_APPEND)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RWF_APPEND) == (0x10), "RWF_APPEND != 0x10");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RWF_APPEND 0x10
#endif

#ifndef XLAT_MACROS_ONLY

# ifndef IN_MPERS

static const struct xlat_data rwf_flags_xdata[] = {
 XLAT(RWF_HIPRI),
 #define XLAT_VAL_0 ((unsigned) (RWF_HIPRI))
 #define XLAT_STR_0 STRINGIFY(RWF_HIPRI)
 XLAT(RWF_DSYNC),
 #define XLAT_VAL_1 ((unsigned) (RWF_DSYNC))
 #define XLAT_STR_1 STRINGIFY(RWF_DSYNC)
 XLAT(RWF_SYNC),
 #define XLAT_VAL_2 ((unsigned) (RWF_SYNC))
 #define XLAT_STR_2 STRINGIFY(RWF_SYNC)
 XLAT(RWF_NOWAIT),
 #define XLAT_VAL_3 ((unsigned) (RWF_NOWAIT))
 #define XLAT_STR_3 STRINGIFY(RWF_NOWAIT)
 XLAT(RWF_APPEND),
 #define XLAT_VAL_4 ((unsigned) (RWF_APPEND))
 #define XLAT_STR_4 STRINGIFY(RWF_APPEND)
};
const struct xlat rwf_flags[1] = { {
 .data = rwf_flags_xdata,
 .size = ARRAY_SIZE(rwf_flags_xdata),
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
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
