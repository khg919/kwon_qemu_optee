/* Generated by ./src/xlat/gen.sh from ./src/xlat/semctl_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(IPC_RMID) || (defined(HAVE_DECL_IPC_RMID) && HAVE_DECL_IPC_RMID)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IPC_RMID) == (0), "IPC_RMID != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IPC_RMID 0
#endif
#if defined(IPC_SET) || (defined(HAVE_DECL_IPC_SET) && HAVE_DECL_IPC_SET)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IPC_SET) == (1), "IPC_SET != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IPC_SET 1
#endif
#if defined(IPC_STAT) || (defined(HAVE_DECL_IPC_STAT) && HAVE_DECL_IPC_STAT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IPC_STAT) == (2), "IPC_STAT != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IPC_STAT 2
#endif
#if defined(IPC_INFO) || (defined(HAVE_DECL_IPC_INFO) && HAVE_DECL_IPC_INFO)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IPC_INFO) == (3), "IPC_INFO != 3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IPC_INFO 3
#endif
#if defined(GETPID) || (defined(HAVE_DECL_GETPID) && HAVE_DECL_GETPID)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((GETPID) == (11), "GETPID != 11");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define GETPID 11
#endif
#if defined(GETVAL) || (defined(HAVE_DECL_GETVAL) && HAVE_DECL_GETVAL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((GETVAL) == (12), "GETVAL != 12");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define GETVAL 12
#endif
#if defined(GETALL) || (defined(HAVE_DECL_GETALL) && HAVE_DECL_GETALL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((GETALL) == (13), "GETALL != 13");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define GETALL 13
#endif
#if defined(GETNCNT) || (defined(HAVE_DECL_GETNCNT) && HAVE_DECL_GETNCNT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((GETNCNT) == (14), "GETNCNT != 14");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define GETNCNT 14
#endif
#if defined(GETZCNT) || (defined(HAVE_DECL_GETZCNT) && HAVE_DECL_GETZCNT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((GETZCNT) == (15), "GETZCNT != 15");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define GETZCNT 15
#endif
#if defined(SETVAL) || (defined(HAVE_DECL_SETVAL) && HAVE_DECL_SETVAL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SETVAL) == (16), "SETVAL != 16");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SETVAL 16
#endif
#if defined(SETALL) || (defined(HAVE_DECL_SETALL) && HAVE_DECL_SETALL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SETALL) == (17), "SETALL != 17");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SETALL 17
#endif
#if defined(SEM_STAT) || (defined(HAVE_DECL_SEM_STAT) && HAVE_DECL_SEM_STAT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SEM_STAT) == (18), "SEM_STAT != 18");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SEM_STAT 18
#endif
#if defined(SEM_INFO) || (defined(HAVE_DECL_SEM_INFO) && HAVE_DECL_SEM_INFO)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SEM_INFO) == (19), "SEM_INFO != 19");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SEM_INFO 19
#endif
#if defined(SEM_STAT_ANY) || (defined(HAVE_DECL_SEM_STAT_ANY) && HAVE_DECL_SEM_STAT_ANY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SEM_STAT_ANY) == (20), "SEM_STAT_ANY != 20");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SEM_STAT_ANY 20
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

extern const struct xlat semctl_flags[];

# else

static const struct xlat_data semctl_flags_xdata[] = {
 XLAT(IPC_RMID),
 #define XLAT_VAL_0 ((unsigned) (IPC_RMID))
 #define XLAT_STR_0 STRINGIFY(IPC_RMID)
 XLAT(IPC_SET),
 #define XLAT_VAL_1 ((unsigned) (IPC_SET))
 #define XLAT_STR_1 STRINGIFY(IPC_SET)
 XLAT(IPC_STAT),
 #define XLAT_VAL_2 ((unsigned) (IPC_STAT))
 #define XLAT_STR_2 STRINGIFY(IPC_STAT)
 XLAT(IPC_INFO),
 #define XLAT_VAL_3 ((unsigned) (IPC_INFO))
 #define XLAT_STR_3 STRINGIFY(IPC_INFO)
 XLAT(GETPID),
 #define XLAT_VAL_4 ((unsigned) (GETPID))
 #define XLAT_STR_4 STRINGIFY(GETPID)
 XLAT(GETVAL),
 #define XLAT_VAL_5 ((unsigned) (GETVAL))
 #define XLAT_STR_5 STRINGIFY(GETVAL)
 XLAT(GETALL),
 #define XLAT_VAL_6 ((unsigned) (GETALL))
 #define XLAT_STR_6 STRINGIFY(GETALL)
 XLAT(GETNCNT),
 #define XLAT_VAL_7 ((unsigned) (GETNCNT))
 #define XLAT_STR_7 STRINGIFY(GETNCNT)
 XLAT(GETZCNT),
 #define XLAT_VAL_8 ((unsigned) (GETZCNT))
 #define XLAT_STR_8 STRINGIFY(GETZCNT)
 XLAT(SETVAL),
 #define XLAT_VAL_9 ((unsigned) (SETVAL))
 #define XLAT_STR_9 STRINGIFY(SETVAL)
 XLAT(SETALL),
 #define XLAT_VAL_10 ((unsigned) (SETALL))
 #define XLAT_STR_10 STRINGIFY(SETALL)
 XLAT(SEM_STAT),
 #define XLAT_VAL_11 ((unsigned) (SEM_STAT))
 #define XLAT_STR_11 STRINGIFY(SEM_STAT)
 XLAT(SEM_INFO),
 #define XLAT_VAL_12 ((unsigned) (SEM_INFO))
 #define XLAT_STR_12 STRINGIFY(SEM_INFO)
 XLAT(SEM_STAT_ANY),
 #define XLAT_VAL_13 ((unsigned) (SEM_STAT_ANY))
 #define XLAT_STR_13 STRINGIFY(SEM_STAT_ANY)
};
#  if !(defined HAVE_M32_MPERS || defined HAVE_MX32_MPERS)
static
#  endif
const struct xlat semctl_flags[1] = { {
 .data = semctl_flags_xdata,
 .size = ARRAY_SIZE(semctl_flags_xdata),
 .type = XT_SORTED,
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
#  ifdef XLAT_VAL_10
  | XLAT_VAL_10
#  endif
#  ifdef XLAT_VAL_11
  | XLAT_VAL_11
#  endif
#  ifdef XLAT_VAL_12
  | XLAT_VAL_12
#  endif
#  ifdef XLAT_VAL_13
  | XLAT_VAL_13
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
#  ifdef XLAT_STR_10
  + sizeof(XLAT_STR_10)
#  endif
#  ifdef XLAT_STR_11
  + sizeof(XLAT_STR_11)
#  endif
#  ifdef XLAT_STR_12
  + sizeof(XLAT_STR_12)
#  endif
#  ifdef XLAT_STR_13
  + sizeof(XLAT_STR_13)
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
#  undef XLAT_STR_10
#  undef XLAT_VAL_10
#  undef XLAT_STR_11
#  undef XLAT_VAL_11
#  undef XLAT_STR_12
#  undef XLAT_VAL_12
#  undef XLAT_STR_13
#  undef XLAT_VAL_13
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */