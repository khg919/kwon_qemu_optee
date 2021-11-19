/* Generated by ./src/xlat/gen.sh from ./src/xlat/mpol_modes.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(MPOL_DEFAULT) || (defined(HAVE_DECL_MPOL_DEFAULT) && HAVE_DECL_MPOL_DEFAULT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((MPOL_DEFAULT) == (0), "MPOL_DEFAULT != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define MPOL_DEFAULT 0
#endif
#if defined(MPOL_PREFERRED) || (defined(HAVE_DECL_MPOL_PREFERRED) && HAVE_DECL_MPOL_PREFERRED)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((MPOL_PREFERRED) == (1), "MPOL_PREFERRED != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define MPOL_PREFERRED 1
#endif
#if defined(MPOL_BIND) || (defined(HAVE_DECL_MPOL_BIND) && HAVE_DECL_MPOL_BIND)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((MPOL_BIND) == (2), "MPOL_BIND != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define MPOL_BIND 2
#endif
#if defined(MPOL_INTERLEAVE) || (defined(HAVE_DECL_MPOL_INTERLEAVE) && HAVE_DECL_MPOL_INTERLEAVE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((MPOL_INTERLEAVE) == (3), "MPOL_INTERLEAVE != 3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define MPOL_INTERLEAVE 3
#endif
#if defined(MPOL_LOCAL) || (defined(HAVE_DECL_MPOL_LOCAL) && HAVE_DECL_MPOL_LOCAL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((MPOL_LOCAL) == (4), "MPOL_LOCAL != 4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define MPOL_LOCAL 4
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat mpol_modes in mpers mode

# else

static const struct xlat_data mpol_modes_xdata[] = {
 [MPOL_DEFAULT] = XLAT(MPOL_DEFAULT),
 #define XLAT_VAL_0 ((unsigned) (MPOL_DEFAULT))
 #define XLAT_STR_0 STRINGIFY(MPOL_DEFAULT)
 [MPOL_PREFERRED] = XLAT(MPOL_PREFERRED),
 #define XLAT_VAL_1 ((unsigned) (MPOL_PREFERRED))
 #define XLAT_STR_1 STRINGIFY(MPOL_PREFERRED)
 [MPOL_BIND] = XLAT(MPOL_BIND),
 #define XLAT_VAL_2 ((unsigned) (MPOL_BIND))
 #define XLAT_STR_2 STRINGIFY(MPOL_BIND)
 [MPOL_INTERLEAVE] = XLAT(MPOL_INTERLEAVE),
 #define XLAT_VAL_3 ((unsigned) (MPOL_INTERLEAVE))
 #define XLAT_STR_3 STRINGIFY(MPOL_INTERLEAVE)
 [MPOL_LOCAL] = XLAT(MPOL_LOCAL),
 #define XLAT_VAL_4 ((unsigned) (MPOL_LOCAL))
 #define XLAT_STR_4 STRINGIFY(MPOL_LOCAL)
};
static
const struct xlat mpol_modes[1] = { {
 .data = mpol_modes_xdata,
 .size = ARRAY_SIZE(mpol_modes_xdata),
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
