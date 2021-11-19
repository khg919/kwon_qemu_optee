/* Generated by ./src/xlat/gen.sh from ./src/xlat/phonet_protocols.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(PN_PROTO_TRANSPORT) || (defined(HAVE_DECL_PN_PROTO_TRANSPORT) && HAVE_DECL_PN_PROTO_TRANSPORT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PN_PROTO_TRANSPORT) == (0), "PN_PROTO_TRANSPORT != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PN_PROTO_TRANSPORT 0
#endif
#if defined(PN_PROTO_PHONET) || (defined(HAVE_DECL_PN_PROTO_PHONET) && HAVE_DECL_PN_PROTO_PHONET)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PN_PROTO_PHONET) == (1), "PN_PROTO_PHONET != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PN_PROTO_PHONET 1
#endif
#if defined(PN_PROTO_PIPE) || (defined(HAVE_DECL_PN_PROTO_PIPE) && HAVE_DECL_PN_PROTO_PIPE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PN_PROTO_PIPE) == (2), "PN_PROTO_PIPE != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PN_PROTO_PIPE 2
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat phonet_protocols in mpers mode

# else

static const struct xlat_data phonet_protocols_xdata[] = {
 [PN_PROTO_TRANSPORT] = XLAT(PN_PROTO_TRANSPORT),
 #define XLAT_VAL_0 ((unsigned) (PN_PROTO_TRANSPORT))
 #define XLAT_STR_0 STRINGIFY(PN_PROTO_TRANSPORT)
 [PN_PROTO_PHONET] = XLAT(PN_PROTO_PHONET),
 #define XLAT_VAL_1 ((unsigned) (PN_PROTO_PHONET))
 #define XLAT_STR_1 STRINGIFY(PN_PROTO_PHONET)
 [PN_PROTO_PIPE] = XLAT(PN_PROTO_PIPE),
 #define XLAT_VAL_2 ((unsigned) (PN_PROTO_PIPE))
 #define XLAT_STR_2 STRINGIFY(PN_PROTO_PIPE)
};
static
const struct xlat phonet_protocols[1] = { {
 .data = phonet_protocols_xdata,
 .size = ARRAY_SIZE(phonet_protocols_xdata),
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
