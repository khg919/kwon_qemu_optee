/* Generated by ./src/xlat/gen.sh from ./src/xlat/fan_classes.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(FAN_CLASS_NOTIF) || (defined(HAVE_DECL_FAN_CLASS_NOTIF) && HAVE_DECL_FAN_CLASS_NOTIF)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FAN_CLASS_NOTIF) == (0x00000000), "FAN_CLASS_NOTIF != 0x00000000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FAN_CLASS_NOTIF 0x00000000
#endif
#if defined(FAN_CLASS_CONTENT) || (defined(HAVE_DECL_FAN_CLASS_CONTENT) && HAVE_DECL_FAN_CLASS_CONTENT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FAN_CLASS_CONTENT) == (0x00000004), "FAN_CLASS_CONTENT != 0x00000004");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FAN_CLASS_CONTENT 0x00000004
#endif
#if defined(FAN_CLASS_PRE_CONTENT) || (defined(HAVE_DECL_FAN_CLASS_PRE_CONTENT) && HAVE_DECL_FAN_CLASS_PRE_CONTENT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FAN_CLASS_PRE_CONTENT) == (0x00000008), "FAN_CLASS_PRE_CONTENT != 0x00000008");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FAN_CLASS_PRE_CONTENT 0x00000008
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat fan_classes in mpers mode

# else

static const struct xlat_data fan_classes_xdata[] = {
 XLAT(FAN_CLASS_NOTIF),
 #define XLAT_VAL_0 ((unsigned) (FAN_CLASS_NOTIF))
 #define XLAT_STR_0 STRINGIFY(FAN_CLASS_NOTIF)
 XLAT(FAN_CLASS_CONTENT),
 #define XLAT_VAL_1 ((unsigned) (FAN_CLASS_CONTENT))
 #define XLAT_STR_1 STRINGIFY(FAN_CLASS_CONTENT)
 XLAT(FAN_CLASS_PRE_CONTENT),
 #define XLAT_VAL_2 ((unsigned) (FAN_CLASS_PRE_CONTENT))
 #define XLAT_STR_2 STRINGIFY(FAN_CLASS_PRE_CONTENT)
};
static
const struct xlat fan_classes[1] = { {
 .data = fan_classes_xdata,
 .size = ARRAY_SIZE(fan_classes_xdata),
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
