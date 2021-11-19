/* Generated by ./src/xlat/gen.sh from ./src/xlat/ebpf_op_jmp.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(BPF_JNE) || (defined(HAVE_DECL_BPF_JNE) && HAVE_DECL_BPF_JNE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_JNE) == (0x50), "BPF_JNE != 0x50");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_JNE 0x50
#endif
#if defined(BPF_JSGT) || (defined(HAVE_DECL_BPF_JSGT) && HAVE_DECL_BPF_JSGT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_JSGT) == (0x60), "BPF_JSGT != 0x60");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_JSGT 0x60
#endif
#if defined(BPF_JSGE) || (defined(HAVE_DECL_BPF_JSGE) && HAVE_DECL_BPF_JSGE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_JSGE) == (0x70), "BPF_JSGE != 0x70");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_JSGE 0x70
#endif
#if defined(BPF_CALL) || (defined(HAVE_DECL_BPF_CALL) && HAVE_DECL_BPF_CALL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_CALL) == (0x80), "BPF_CALL != 0x80");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_CALL 0x80
#endif
#if defined(BPF_EXIT) || (defined(HAVE_DECL_BPF_EXIT) && HAVE_DECL_BPF_EXIT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_EXIT) == (0x90), "BPF_EXIT != 0x90");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_EXIT 0x90
#endif
#if defined(BPF_JLT) || (defined(HAVE_DECL_BPF_JLT) && HAVE_DECL_BPF_JLT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_JLT) == (0xa0), "BPF_JLT != 0xa0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_JLT 0xa0
#endif
#if defined(BPF_JLE) || (defined(HAVE_DECL_BPF_JLE) && HAVE_DECL_BPF_JLE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_JLE) == (0xb0), "BPF_JLE != 0xb0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_JLE 0xb0
#endif
#if defined(BPF_JSLT) || (defined(HAVE_DECL_BPF_JSLT) && HAVE_DECL_BPF_JSLT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_JSLT) == (0xc0), "BPF_JSLT != 0xc0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_JSLT 0xc0
#endif
#if defined(BPF_JSLE) || (defined(HAVE_DECL_BPF_JSLE) && HAVE_DECL_BPF_JSLE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_JSLE) == (0xd0), "BPF_JSLE != 0xd0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_JSLE 0xd0
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat ebpf_op_jmp in mpers mode

# else

static const struct xlat_data ebpf_op_jmp_xdata[] = {
 XLAT(BPF_JNE),
 #define XLAT_VAL_0 ((unsigned) (BPF_JNE))
 #define XLAT_STR_0 STRINGIFY(BPF_JNE)
 XLAT(BPF_JSGT),
 #define XLAT_VAL_1 ((unsigned) (BPF_JSGT))
 #define XLAT_STR_1 STRINGIFY(BPF_JSGT)
 XLAT(BPF_JSGE),
 #define XLAT_VAL_2 ((unsigned) (BPF_JSGE))
 #define XLAT_STR_2 STRINGIFY(BPF_JSGE)
 XLAT(BPF_CALL),
 #define XLAT_VAL_3 ((unsigned) (BPF_CALL))
 #define XLAT_STR_3 STRINGIFY(BPF_CALL)
 XLAT(BPF_EXIT),
 #define XLAT_VAL_4 ((unsigned) (BPF_EXIT))
 #define XLAT_STR_4 STRINGIFY(BPF_EXIT)
 XLAT(BPF_JLT),
 #define XLAT_VAL_5 ((unsigned) (BPF_JLT))
 #define XLAT_STR_5 STRINGIFY(BPF_JLT)
 XLAT(BPF_JLE),
 #define XLAT_VAL_6 ((unsigned) (BPF_JLE))
 #define XLAT_STR_6 STRINGIFY(BPF_JLE)
 XLAT(BPF_JSLT),
 #define XLAT_VAL_7 ((unsigned) (BPF_JSLT))
 #define XLAT_STR_7 STRINGIFY(BPF_JSLT)
 XLAT(BPF_JSLE),
 #define XLAT_VAL_8 ((unsigned) (BPF_JSLE))
 #define XLAT_STR_8 STRINGIFY(BPF_JSLE)
};
static
const struct xlat ebpf_op_jmp[1] = { {
 .data = ebpf_op_jmp_xdata,
 .size = ARRAY_SIZE(ebpf_op_jmp_xdata),
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
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
