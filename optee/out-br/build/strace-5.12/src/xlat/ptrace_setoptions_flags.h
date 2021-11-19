/* Generated by ./src/xlat/gen.sh from ./src/xlat/ptrace_setoptions_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"


#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat ptrace_setoptions_flags in mpers mode

# else

static const struct xlat_data ptrace_setoptions_flags_xdata[] = {
#if defined(PTRACE_O_TRACESYSGOOD) || (defined(HAVE_DECL_PTRACE_O_TRACESYSGOOD) && HAVE_DECL_PTRACE_O_TRACESYSGOOD)
  XLAT(PTRACE_O_TRACESYSGOOD),
 #define XLAT_VAL_0 ((unsigned) (PTRACE_O_TRACESYSGOOD))
 #define XLAT_STR_0 STRINGIFY(PTRACE_O_TRACESYSGOOD)
#endif
#if defined(PTRACE_O_TRACEFORK) || (defined(HAVE_DECL_PTRACE_O_TRACEFORK) && HAVE_DECL_PTRACE_O_TRACEFORK)
  XLAT(PTRACE_O_TRACEFORK),
 #define XLAT_VAL_1 ((unsigned) (PTRACE_O_TRACEFORK))
 #define XLAT_STR_1 STRINGIFY(PTRACE_O_TRACEFORK)
#endif
#if defined(PTRACE_O_TRACEVFORK) || (defined(HAVE_DECL_PTRACE_O_TRACEVFORK) && HAVE_DECL_PTRACE_O_TRACEVFORK)
  XLAT(PTRACE_O_TRACEVFORK),
 #define XLAT_VAL_2 ((unsigned) (PTRACE_O_TRACEVFORK))
 #define XLAT_STR_2 STRINGIFY(PTRACE_O_TRACEVFORK)
#endif
#if defined(PTRACE_O_TRACECLONE) || (defined(HAVE_DECL_PTRACE_O_TRACECLONE) && HAVE_DECL_PTRACE_O_TRACECLONE)
  XLAT(PTRACE_O_TRACECLONE),
 #define XLAT_VAL_3 ((unsigned) (PTRACE_O_TRACECLONE))
 #define XLAT_STR_3 STRINGIFY(PTRACE_O_TRACECLONE)
#endif
#if defined(PTRACE_O_TRACEEXEC) || (defined(HAVE_DECL_PTRACE_O_TRACEEXEC) && HAVE_DECL_PTRACE_O_TRACEEXEC)
  XLAT(PTRACE_O_TRACEEXEC),
 #define XLAT_VAL_4 ((unsigned) (PTRACE_O_TRACEEXEC))
 #define XLAT_STR_4 STRINGIFY(PTRACE_O_TRACEEXEC)
#endif
#if defined(PTRACE_O_TRACEVFORKDONE) || (defined(HAVE_DECL_PTRACE_O_TRACEVFORKDONE) && HAVE_DECL_PTRACE_O_TRACEVFORKDONE)
  XLAT(PTRACE_O_TRACEVFORKDONE),
 #define XLAT_VAL_5 ((unsigned) (PTRACE_O_TRACEVFORKDONE))
 #define XLAT_STR_5 STRINGIFY(PTRACE_O_TRACEVFORKDONE)
#endif
#if defined(PTRACE_O_TRACEEXIT) || (defined(HAVE_DECL_PTRACE_O_TRACEEXIT) && HAVE_DECL_PTRACE_O_TRACEEXIT)
  XLAT(PTRACE_O_TRACEEXIT),
 #define XLAT_VAL_6 ((unsigned) (PTRACE_O_TRACEEXIT))
 #define XLAT_STR_6 STRINGIFY(PTRACE_O_TRACEEXIT)
#endif
#if defined(PTRACE_O_TRACESECCOMP) || (defined(HAVE_DECL_PTRACE_O_TRACESECCOMP) && HAVE_DECL_PTRACE_O_TRACESECCOMP)
  XLAT(PTRACE_O_TRACESECCOMP),
 #define XLAT_VAL_7 ((unsigned) (PTRACE_O_TRACESECCOMP))
 #define XLAT_STR_7 STRINGIFY(PTRACE_O_TRACESECCOMP)
#endif
#if defined(PTRACE_O_EXITKILL) || (defined(HAVE_DECL_PTRACE_O_EXITKILL) && HAVE_DECL_PTRACE_O_EXITKILL)
  XLAT(PTRACE_O_EXITKILL),
 #define XLAT_VAL_8 ((unsigned) (PTRACE_O_EXITKILL))
 #define XLAT_STR_8 STRINGIFY(PTRACE_O_EXITKILL)
#endif
#if defined(PTRACE_O_SUSPEND_SECCOMP) || (defined(HAVE_DECL_PTRACE_O_SUSPEND_SECCOMP) && HAVE_DECL_PTRACE_O_SUSPEND_SECCOMP)
  XLAT(PTRACE_O_SUSPEND_SECCOMP),
 #define XLAT_VAL_9 ((unsigned) (PTRACE_O_SUSPEND_SECCOMP))
 #define XLAT_STR_9 STRINGIFY(PTRACE_O_SUSPEND_SECCOMP)
#endif

#if defined(PTRACE_O_TRACEMIGRATE) || (defined(HAVE_DECL_PTRACE_O_TRACEMIGRATE) && HAVE_DECL_PTRACE_O_TRACEMIGRATE)
  XLAT(PTRACE_O_TRACEMIGRATE),
 #define XLAT_VAL_10 ((unsigned) (PTRACE_O_TRACEMIGRATE))
 #define XLAT_STR_10 STRINGIFY(PTRACE_O_TRACEMIGRATE)
#endif
};
static
const struct xlat ptrace_setoptions_flags[1] = { {
 .data = ptrace_setoptions_flags_xdata,
 .size = ARRAY_SIZE(ptrace_setoptions_flags_xdata),
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
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
