/* Generated by ./src/xlat/gen.sh from ./src/xlat/rtnl_neightbl_attrs.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(NDTA_UNSPEC) || (defined(HAVE_DECL_NDTA_UNSPEC) && HAVE_DECL_NDTA_UNSPEC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NDTA_UNSPEC) == (0), "NDTA_UNSPEC != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NDTA_UNSPEC 0
#endif
#if defined(NDTA_NAME) || (defined(HAVE_DECL_NDTA_NAME) && HAVE_DECL_NDTA_NAME)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NDTA_NAME) == (1), "NDTA_NAME != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NDTA_NAME 1
#endif
#if defined(NDTA_THRESH1) || (defined(HAVE_DECL_NDTA_THRESH1) && HAVE_DECL_NDTA_THRESH1)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NDTA_THRESH1) == (2), "NDTA_THRESH1 != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NDTA_THRESH1 2
#endif
#if defined(NDTA_THRESH2) || (defined(HAVE_DECL_NDTA_THRESH2) && HAVE_DECL_NDTA_THRESH2)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NDTA_THRESH2) == (3), "NDTA_THRESH2 != 3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NDTA_THRESH2 3
#endif
#if defined(NDTA_THRESH3) || (defined(HAVE_DECL_NDTA_THRESH3) && HAVE_DECL_NDTA_THRESH3)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NDTA_THRESH3) == (4), "NDTA_THRESH3 != 4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NDTA_THRESH3 4
#endif
#if defined(NDTA_CONFIG) || (defined(HAVE_DECL_NDTA_CONFIG) && HAVE_DECL_NDTA_CONFIG)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NDTA_CONFIG) == (5), "NDTA_CONFIG != 5");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NDTA_CONFIG 5
#endif
#if defined(NDTA_PARMS) || (defined(HAVE_DECL_NDTA_PARMS) && HAVE_DECL_NDTA_PARMS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NDTA_PARMS) == (6), "NDTA_PARMS != 6");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NDTA_PARMS 6
#endif
#if defined(NDTA_STATS) || (defined(HAVE_DECL_NDTA_STATS) && HAVE_DECL_NDTA_STATS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NDTA_STATS) == (7), "NDTA_STATS != 7");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NDTA_STATS 7
#endif
#if defined(NDTA_GC_INTERVAL) || (defined(HAVE_DECL_NDTA_GC_INTERVAL) && HAVE_DECL_NDTA_GC_INTERVAL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NDTA_GC_INTERVAL) == (8), "NDTA_GC_INTERVAL != 8");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NDTA_GC_INTERVAL 8
#endif
#if defined(NDTA_PAD) || (defined(HAVE_DECL_NDTA_PAD) && HAVE_DECL_NDTA_PAD)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NDTA_PAD) == (9), "NDTA_PAD != 9");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NDTA_PAD 9
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat rtnl_neightbl_attrs in mpers mode

# else

static const struct xlat_data rtnl_neightbl_attrs_xdata[] = {
 [NDTA_UNSPEC] = XLAT(NDTA_UNSPEC),
 #define XLAT_VAL_0 ((unsigned) (NDTA_UNSPEC))
 #define XLAT_STR_0 STRINGIFY(NDTA_UNSPEC)
 [NDTA_NAME] = XLAT(NDTA_NAME),
 #define XLAT_VAL_1 ((unsigned) (NDTA_NAME))
 #define XLAT_STR_1 STRINGIFY(NDTA_NAME)
 [NDTA_THRESH1] = XLAT(NDTA_THRESH1),
 #define XLAT_VAL_2 ((unsigned) (NDTA_THRESH1))
 #define XLAT_STR_2 STRINGIFY(NDTA_THRESH1)
 [NDTA_THRESH2] = XLAT(NDTA_THRESH2),
 #define XLAT_VAL_3 ((unsigned) (NDTA_THRESH2))
 #define XLAT_STR_3 STRINGIFY(NDTA_THRESH2)
 [NDTA_THRESH3] = XLAT(NDTA_THRESH3),
 #define XLAT_VAL_4 ((unsigned) (NDTA_THRESH3))
 #define XLAT_STR_4 STRINGIFY(NDTA_THRESH3)
 [NDTA_CONFIG] = XLAT(NDTA_CONFIG),
 #define XLAT_VAL_5 ((unsigned) (NDTA_CONFIG))
 #define XLAT_STR_5 STRINGIFY(NDTA_CONFIG)
 [NDTA_PARMS] = XLAT(NDTA_PARMS),
 #define XLAT_VAL_6 ((unsigned) (NDTA_PARMS))
 #define XLAT_STR_6 STRINGIFY(NDTA_PARMS)
 [NDTA_STATS] = XLAT(NDTA_STATS),
 #define XLAT_VAL_7 ((unsigned) (NDTA_STATS))
 #define XLAT_STR_7 STRINGIFY(NDTA_STATS)
 [NDTA_GC_INTERVAL] = XLAT(NDTA_GC_INTERVAL),
 #define XLAT_VAL_8 ((unsigned) (NDTA_GC_INTERVAL))
 #define XLAT_STR_8 STRINGIFY(NDTA_GC_INTERVAL)
 [NDTA_PAD] = XLAT(NDTA_PAD),
 #define XLAT_VAL_9 ((unsigned) (NDTA_PAD))
 #define XLAT_STR_9 STRINGIFY(NDTA_PAD)
};
static
const struct xlat rtnl_neightbl_attrs[1] = { {
 .data = rtnl_neightbl_attrs_xdata,
 .size = ARRAY_SIZE(rtnl_neightbl_attrs_xdata),
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
#  ifdef XLAT_VAL_5
  | XLAT_VAL_5
#  endif
#  ifdef XLAT_VAL_6
  | XLAT_VAL_6
#  endif
#  ifdef XLAT_VAL_7
  | XLAT_VAL_7
#  endif
#  ifdef XLAT_VAL_8
  | XLAT_VAL_8
#  endif
#  ifdef XLAT_VAL_9
  | XLAT_VAL_9
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
#  ifdef XLAT_STR_7
  + sizeof(XLAT_STR_7)
#  endif
#  ifdef XLAT_STR_8
  + sizeof(XLAT_STR_8)
#  endif
#  ifdef XLAT_STR_9
  + sizeof(XLAT_STR_9)
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
#  undef XLAT_STR_7
#  undef XLAT_VAL_7
#  undef XLAT_STR_8
#  undef XLAT_VAL_8
#  undef XLAT_STR_9
#  undef XLAT_VAL_9
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */