/* Generated by ./src/xlat/gen.sh from ./src/xlat/skf_off.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(SKF_AD_OFF) || (defined(HAVE_DECL_SKF_AD_OFF) && HAVE_DECL_SKF_AD_OFF)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SKF_AD_OFF) == (-0x1000), "SKF_AD_OFF != -0x1000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SKF_AD_OFF -0x1000
#endif
#if defined(SKF_NET_OFF) || (defined(HAVE_DECL_SKF_NET_OFF) && HAVE_DECL_SKF_NET_OFF)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SKF_NET_OFF) == (-0x100000), "SKF_NET_OFF != -0x100000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SKF_NET_OFF -0x100000
#endif
#if defined(SKF_LL_OFF) || (defined(HAVE_DECL_SKF_LL_OFF) && HAVE_DECL_SKF_LL_OFF)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SKF_LL_OFF) == (-0x200000), "SKF_LL_OFF != -0x200000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SKF_LL_OFF -0x200000
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat skf_off in mpers mode

# else

static const struct xlat_data skf_off_xdata[] = {
 XLAT(SKF_AD_OFF),
 #define XLAT_VAL_0 ((unsigned) (SKF_AD_OFF))
 #define XLAT_STR_0 STRINGIFY(SKF_AD_OFF)
 XLAT(SKF_NET_OFF),
 #define XLAT_VAL_1 ((unsigned) (SKF_NET_OFF))
 #define XLAT_STR_1 STRINGIFY(SKF_NET_OFF)
 XLAT(SKF_LL_OFF),
 #define XLAT_VAL_2 ((unsigned) (SKF_LL_OFF))
 #define XLAT_STR_2 STRINGIFY(SKF_LL_OFF)
};
static
const struct xlat skf_off[1] = { {
 .data = skf_off_xdata,
 .size = ARRAY_SIZE(skf_off_xdata),
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