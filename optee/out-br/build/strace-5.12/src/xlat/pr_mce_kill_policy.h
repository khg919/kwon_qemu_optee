/* Generated by ./src/xlat/gen.sh from ./src/xlat/pr_mce_kill_policy.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(PR_MCE_KILL_LATE) || (defined(HAVE_DECL_PR_MCE_KILL_LATE) && HAVE_DECL_PR_MCE_KILL_LATE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PR_MCE_KILL_LATE) == (0), "PR_MCE_KILL_LATE != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PR_MCE_KILL_LATE 0
#endif
#if defined(PR_MCE_KILL_EARLY) || (defined(HAVE_DECL_PR_MCE_KILL_EARLY) && HAVE_DECL_PR_MCE_KILL_EARLY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PR_MCE_KILL_EARLY) == (1), "PR_MCE_KILL_EARLY != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PR_MCE_KILL_EARLY 1
#endif
#if defined(PR_MCE_KILL_DEFAULT) || (defined(HAVE_DECL_PR_MCE_KILL_DEFAULT) && HAVE_DECL_PR_MCE_KILL_DEFAULT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PR_MCE_KILL_DEFAULT) == (2), "PR_MCE_KILL_DEFAULT != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PR_MCE_KILL_DEFAULT 2
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat pr_mce_kill_policy in mpers mode

# else

static const struct xlat_data pr_mce_kill_policy_xdata[] = {
 [PR_MCE_KILL_LATE] = XLAT(PR_MCE_KILL_LATE),
 #define XLAT_VAL_0 ((unsigned) (PR_MCE_KILL_LATE))
 #define XLAT_STR_0 STRINGIFY(PR_MCE_KILL_LATE)
 [PR_MCE_KILL_EARLY] = XLAT(PR_MCE_KILL_EARLY),
 #define XLAT_VAL_1 ((unsigned) (PR_MCE_KILL_EARLY))
 #define XLAT_STR_1 STRINGIFY(PR_MCE_KILL_EARLY)
 [PR_MCE_KILL_DEFAULT] = XLAT(PR_MCE_KILL_DEFAULT),
 #define XLAT_VAL_2 ((unsigned) (PR_MCE_KILL_DEFAULT))
 #define XLAT_STR_2 STRINGIFY(PR_MCE_KILL_DEFAULT)
};
static
const struct xlat pr_mce_kill_policy[1] = { {
 .data = pr_mce_kill_policy_xdata,
 .size = ARRAY_SIZE(pr_mce_kill_policy_xdata),
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
