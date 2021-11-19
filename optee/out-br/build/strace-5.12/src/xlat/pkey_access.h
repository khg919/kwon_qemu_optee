/* Generated by ./src/xlat/gen.sh from ./src/xlat/pkey_access.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(PKEY_DISABLE_ACCESS) || (defined(HAVE_DECL_PKEY_DISABLE_ACCESS) && HAVE_DECL_PKEY_DISABLE_ACCESS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PKEY_DISABLE_ACCESS) == (0x1), "PKEY_DISABLE_ACCESS != 0x1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PKEY_DISABLE_ACCESS 0x1
#endif
#if defined(PKEY_DISABLE_WRITE) || (defined(HAVE_DECL_PKEY_DISABLE_WRITE) && HAVE_DECL_PKEY_DISABLE_WRITE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PKEY_DISABLE_WRITE) == (0x2), "PKEY_DISABLE_WRITE != 0x2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PKEY_DISABLE_WRITE 0x2
#endif
#if defined(PKEY_DISABLE_EXECUTE) || (defined(HAVE_DECL_PKEY_DISABLE_EXECUTE) && HAVE_DECL_PKEY_DISABLE_EXECUTE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PKEY_DISABLE_EXECUTE) == (0x4), "PKEY_DISABLE_EXECUTE != 0x4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PKEY_DISABLE_EXECUTE 0x4
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat pkey_access in mpers mode

# else

static const struct xlat_data pkey_access_xdata[] = {
 XLAT(PKEY_DISABLE_ACCESS),
 #define XLAT_VAL_0 ((unsigned) (PKEY_DISABLE_ACCESS))
 #define XLAT_STR_0 STRINGIFY(PKEY_DISABLE_ACCESS)
 XLAT(PKEY_DISABLE_WRITE),
 #define XLAT_VAL_1 ((unsigned) (PKEY_DISABLE_WRITE))
 #define XLAT_STR_1 STRINGIFY(PKEY_DISABLE_WRITE)
 XLAT(PKEY_DISABLE_EXECUTE),
 #define XLAT_VAL_2 ((unsigned) (PKEY_DISABLE_EXECUTE))
 #define XLAT_STR_2 STRINGIFY(PKEY_DISABLE_EXECUTE)
};
static
const struct xlat pkey_access[1] = { {
 .data = pkey_access_xdata,
 .size = ARRAY_SIZE(pkey_access_xdata),
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
