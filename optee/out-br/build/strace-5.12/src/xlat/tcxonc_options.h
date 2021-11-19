/* Generated by ./src/xlat/gen.sh from ./src/xlat/tcxonc_options.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"


#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat tcxonc_options in mpers mode

# else

static const struct xlat_data tcxonc_options_xdata[] = {
#if defined(TCOOFF) || (defined(HAVE_DECL_TCOOFF) && HAVE_DECL_TCOOFF)
  XLAT(TCOOFF),
 #define XLAT_VAL_0 ((unsigned) (TCOOFF))
 #define XLAT_STR_0 STRINGIFY(TCOOFF)
#endif
#if defined(TCOON) || (defined(HAVE_DECL_TCOON) && HAVE_DECL_TCOON)
  XLAT(TCOON),
 #define XLAT_VAL_1 ((unsigned) (TCOON))
 #define XLAT_STR_1 STRINGIFY(TCOON)
#endif
#if defined(TCIOFF) || (defined(HAVE_DECL_TCIOFF) && HAVE_DECL_TCIOFF)
  XLAT(TCIOFF),
 #define XLAT_VAL_2 ((unsigned) (TCIOFF))
 #define XLAT_STR_2 STRINGIFY(TCIOFF)
#endif
#if defined(TCION) || (defined(HAVE_DECL_TCION) && HAVE_DECL_TCION)
  XLAT(TCION),
 #define XLAT_VAL_3 ((unsigned) (TCION))
 #define XLAT_STR_3 STRINGIFY(TCION)
#endif
};
static
const struct xlat tcxonc_options[1] = { {
 .data = tcxonc_options_xdata,
 .size = ARRAY_SIZE(tcxonc_options_xdata),
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
