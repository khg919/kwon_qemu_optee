/* Generated by ./src/xlat/gen.sh from ./src/xlat/s390_runtime_instr_commands.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(S390_RUNTIME_INSTR_START) || (defined(HAVE_DECL_S390_RUNTIME_INSTR_START) && HAVE_DECL_S390_RUNTIME_INSTR_START)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((S390_RUNTIME_INSTR_START) == (0x1), "S390_RUNTIME_INSTR_START != 0x1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define S390_RUNTIME_INSTR_START 0x1
#endif
#if defined(S390_RUNTIME_INSTR_STOP) || (defined(HAVE_DECL_S390_RUNTIME_INSTR_STOP) && HAVE_DECL_S390_RUNTIME_INSTR_STOP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((S390_RUNTIME_INSTR_STOP) == (0x2), "S390_RUNTIME_INSTR_STOP != 0x2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define S390_RUNTIME_INSTR_STOP 0x2
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat s390_runtime_instr_commands in mpers mode

# else

static const struct xlat_data s390_runtime_instr_commands_xdata[] = {
 [S390_RUNTIME_INSTR_START] = XLAT(S390_RUNTIME_INSTR_START),
 #define XLAT_VAL_0 ((unsigned) (S390_RUNTIME_INSTR_START))
 #define XLAT_STR_0 STRINGIFY(S390_RUNTIME_INSTR_START)
 [S390_RUNTIME_INSTR_STOP] = XLAT(S390_RUNTIME_INSTR_STOP),
 #define XLAT_VAL_1 ((unsigned) (S390_RUNTIME_INSTR_STOP))
 #define XLAT_STR_1 STRINGIFY(S390_RUNTIME_INSTR_STOP)
};
static
const struct xlat s390_runtime_instr_commands[1] = { {
 .data = s390_runtime_instr_commands_xdata,
 .size = ARRAY_SIZE(s390_runtime_instr_commands_xdata),
 .type = XT_INDEXED,
 .flags_mask = 0
#  ifdef XLAT_VAL_0
  | XLAT_VAL_0
#  endif
#  ifdef XLAT_VAL_1
  | XLAT_VAL_1
#  endif
  ,
 .flags_strsz = 0
#  ifdef XLAT_STR_0
  + sizeof(XLAT_STR_0)
#  endif
#  ifdef XLAT_STR_1
  + sizeof(XLAT_STR_1)
#  endif
  ,
} };

#  undef XLAT_STR_0
#  undef XLAT_VAL_0
#  undef XLAT_STR_1
#  undef XLAT_VAL_1
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
