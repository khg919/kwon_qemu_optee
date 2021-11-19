/* Generated by ./src/xlat/gen.sh from ./src/xlat/ebpf_op_alu.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(BPF_MOV) || (defined(HAVE_DECL_BPF_MOV) && HAVE_DECL_BPF_MOV)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_MOV) == (0xb0), "BPF_MOV != 0xb0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_MOV 0xb0
#endif
#if defined(BPF_ARSH) || (defined(HAVE_DECL_BPF_ARSH) && HAVE_DECL_BPF_ARSH)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_ARSH) == (0xc0), "BPF_ARSH != 0xc0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_ARSH 0xc0
#endif
#if defined(BPF_END) || (defined(HAVE_DECL_BPF_END) && HAVE_DECL_BPF_END)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_END) == (0xd0), "BPF_END != 0xd0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_END 0xd0
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat ebpf_op_alu in mpers mode

# else

static const struct xlat_data ebpf_op_alu_xdata[] = {
 XLAT(BPF_MOV),
 #define XLAT_VAL_0 ((unsigned) (BPF_MOV))
 #define XLAT_STR_0 STRINGIFY(BPF_MOV)
 XLAT(BPF_ARSH),
 #define XLAT_VAL_1 ((unsigned) (BPF_ARSH))
 #define XLAT_STR_1 STRINGIFY(BPF_ARSH)
 XLAT(BPF_END),
 #define XLAT_VAL_2 ((unsigned) (BPF_END))
 #define XLAT_STR_2 STRINGIFY(BPF_END)
};
static
const struct xlat ebpf_op_alu[1] = { {
 .data = ebpf_op_alu_xdata,
 .size = ARRAY_SIZE(ebpf_op_alu_xdata),
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
