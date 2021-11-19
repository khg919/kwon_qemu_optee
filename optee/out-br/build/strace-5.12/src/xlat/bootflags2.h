/* Generated by ./src/xlat/gen.sh from ./src/xlat/bootflags2.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(LINUX_REBOOT_MAGIC2) || (defined(HAVE_DECL_LINUX_REBOOT_MAGIC2) && HAVE_DECL_LINUX_REBOOT_MAGIC2)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((LINUX_REBOOT_MAGIC2) == (672274793), "LINUX_REBOOT_MAGIC2 != 672274793");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define LINUX_REBOOT_MAGIC2 672274793
#endif
#if defined(LINUX_REBOOT_MAGIC2A) || (defined(HAVE_DECL_LINUX_REBOOT_MAGIC2A) && HAVE_DECL_LINUX_REBOOT_MAGIC2A)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((LINUX_REBOOT_MAGIC2A) == (85072278), "LINUX_REBOOT_MAGIC2A != 85072278");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define LINUX_REBOOT_MAGIC2A 85072278
#endif
#if defined(LINUX_REBOOT_MAGIC2B) || (defined(HAVE_DECL_LINUX_REBOOT_MAGIC2B) && HAVE_DECL_LINUX_REBOOT_MAGIC2B)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((LINUX_REBOOT_MAGIC2B) == (369367448), "LINUX_REBOOT_MAGIC2B != 369367448");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define LINUX_REBOOT_MAGIC2B 369367448
#endif
#if defined(LINUX_REBOOT_MAGIC2C) || (defined(HAVE_DECL_LINUX_REBOOT_MAGIC2C) && HAVE_DECL_LINUX_REBOOT_MAGIC2C)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((LINUX_REBOOT_MAGIC2C) == (537993216), "LINUX_REBOOT_MAGIC2C != 537993216");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define LINUX_REBOOT_MAGIC2C 537993216
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat bootflags2 in mpers mode

# else

static const struct xlat_data bootflags2_xdata[] = {
 XLAT(LINUX_REBOOT_MAGIC2),
 #define XLAT_VAL_0 ((unsigned) (LINUX_REBOOT_MAGIC2))
 #define XLAT_STR_0 STRINGIFY(LINUX_REBOOT_MAGIC2)
 XLAT(LINUX_REBOOT_MAGIC2A),
 #define XLAT_VAL_1 ((unsigned) (LINUX_REBOOT_MAGIC2A))
 #define XLAT_STR_1 STRINGIFY(LINUX_REBOOT_MAGIC2A)
 XLAT(LINUX_REBOOT_MAGIC2B),
 #define XLAT_VAL_2 ((unsigned) (LINUX_REBOOT_MAGIC2B))
 #define XLAT_STR_2 STRINGIFY(LINUX_REBOOT_MAGIC2B)
 XLAT(LINUX_REBOOT_MAGIC2C),
 #define XLAT_VAL_3 ((unsigned) (LINUX_REBOOT_MAGIC2C))
 #define XLAT_STR_3 STRINGIFY(LINUX_REBOOT_MAGIC2C)
};
static
const struct xlat bootflags2[1] = { {
 .data = bootflags2_xdata,
 .size = ARRAY_SIZE(bootflags2_xdata),
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
