/* Generated by ./src/xlat/gen.sh from ./src/xlat/nl_sock_diag_types.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(TCPDIAG_GETSOCK) || (defined(HAVE_DECL_TCPDIAG_GETSOCK) && HAVE_DECL_TCPDIAG_GETSOCK)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TCPDIAG_GETSOCK) == (18), "TCPDIAG_GETSOCK != 18");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TCPDIAG_GETSOCK 18
#endif
#if defined(DCCPDIAG_GETSOCK) || (defined(HAVE_DECL_DCCPDIAG_GETSOCK) && HAVE_DECL_DCCPDIAG_GETSOCK)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((DCCPDIAG_GETSOCK) == (19), "DCCPDIAG_GETSOCK != 19");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define DCCPDIAG_GETSOCK 19
#endif
#if defined(SOCK_DIAG_BY_FAMILY) || (defined(HAVE_DECL_SOCK_DIAG_BY_FAMILY) && HAVE_DECL_SOCK_DIAG_BY_FAMILY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SOCK_DIAG_BY_FAMILY) == (20), "SOCK_DIAG_BY_FAMILY != 20");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SOCK_DIAG_BY_FAMILY 20
#endif
#if defined(SOCK_DESTROY) || (defined(HAVE_DECL_SOCK_DESTROY) && HAVE_DECL_SOCK_DESTROY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SOCK_DESTROY) == (21), "SOCK_DESTROY != 21");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SOCK_DESTROY 21
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat nl_sock_diag_types in mpers mode

# else

static const struct xlat_data nl_sock_diag_types_xdata[] = {
 XLAT(TCPDIAG_GETSOCK),
 #define XLAT_VAL_0 ((unsigned) (TCPDIAG_GETSOCK))
 #define XLAT_STR_0 STRINGIFY(TCPDIAG_GETSOCK)
 XLAT(DCCPDIAG_GETSOCK),
 #define XLAT_VAL_1 ((unsigned) (DCCPDIAG_GETSOCK))
 #define XLAT_STR_1 STRINGIFY(DCCPDIAG_GETSOCK)
 XLAT(SOCK_DIAG_BY_FAMILY),
 #define XLAT_VAL_2 ((unsigned) (SOCK_DIAG_BY_FAMILY))
 #define XLAT_STR_2 STRINGIFY(SOCK_DIAG_BY_FAMILY)
 XLAT(SOCK_DESTROY),
 #define XLAT_VAL_3 ((unsigned) (SOCK_DESTROY))
 #define XLAT_STR_3 STRINGIFY(SOCK_DESTROY)
};
static
const struct xlat nl_sock_diag_types[1] = { {
 .data = nl_sock_diag_types_xdata,
 .size = ARRAY_SIZE(nl_sock_diag_types_xdata),
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
