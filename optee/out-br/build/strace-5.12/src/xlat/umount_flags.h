/* Generated by ./src/xlat/gen.sh from ./src/xlat/umount_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(MNT_FORCE) || (defined(HAVE_DECL_MNT_FORCE) && HAVE_DECL_MNT_FORCE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((MNT_FORCE) == (1), "MNT_FORCE != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define MNT_FORCE 1
#endif
#if defined(MNT_DETACH) || (defined(HAVE_DECL_MNT_DETACH) && HAVE_DECL_MNT_DETACH)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((MNT_DETACH) == (2), "MNT_DETACH != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define MNT_DETACH 2
#endif
#if defined(MNT_EXPIRE) || (defined(HAVE_DECL_MNT_EXPIRE) && HAVE_DECL_MNT_EXPIRE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((MNT_EXPIRE) == (4), "MNT_EXPIRE != 4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define MNT_EXPIRE 4
#endif
#if defined(UMOUNT_NOFOLLOW) || (defined(HAVE_DECL_UMOUNT_NOFOLLOW) && HAVE_DECL_UMOUNT_NOFOLLOW)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((UMOUNT_NOFOLLOW) == (8), "UMOUNT_NOFOLLOW != 8");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define UMOUNT_NOFOLLOW 8
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat umount_flags in mpers mode

# else

static const struct xlat_data umount_flags_xdata[] = {
 XLAT(MNT_FORCE),
 #define XLAT_VAL_0 ((unsigned) (MNT_FORCE))
 #define XLAT_STR_0 STRINGIFY(MNT_FORCE)
 XLAT(MNT_DETACH),
 #define XLAT_VAL_1 ((unsigned) (MNT_DETACH))
 #define XLAT_STR_1 STRINGIFY(MNT_DETACH)
 XLAT(MNT_EXPIRE),
 #define XLAT_VAL_2 ((unsigned) (MNT_EXPIRE))
 #define XLAT_STR_2 STRINGIFY(MNT_EXPIRE)
 XLAT(UMOUNT_NOFOLLOW),
 #define XLAT_VAL_3 ((unsigned) (UMOUNT_NOFOLLOW))
 #define XLAT_STR_3 STRINGIFY(UMOUNT_NOFOLLOW)
};
static
const struct xlat umount_flags[1] = { {
 .data = umount_flags_xdata,
 .size = ARRAY_SIZE(umount_flags_xdata),
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
