/* Generated by ./src/xlat/gen.sh from ./src/xlat/siginfo_codes.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(SI_USER) || (defined(HAVE_DECL_SI_USER) && HAVE_DECL_SI_USER)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SI_USER) == (0), "SI_USER != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SI_USER 0
#endif
#if defined(SI_KERNEL) || (defined(HAVE_DECL_SI_KERNEL) && HAVE_DECL_SI_KERNEL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SI_KERNEL) == (0x80), "SI_KERNEL != 0x80");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SI_KERNEL 0x80
#endif
#if defined(SI_QUEUE) || (defined(HAVE_DECL_SI_QUEUE) && HAVE_DECL_SI_QUEUE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SI_QUEUE) == (-1), "SI_QUEUE != -1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SI_QUEUE -1
#endif
#ifdef __mips__
#if defined(SI_ASYNCIO) || (defined(HAVE_DECL_SI_ASYNCIO) && HAVE_DECL_SI_ASYNCIO)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SI_ASYNCIO) == (-2), "SI_ASYNCIO != -2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SI_ASYNCIO -2
#endif
#if defined(SI_TIMER) || (defined(HAVE_DECL_SI_TIMER) && HAVE_DECL_SI_TIMER)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SI_TIMER) == (-3), "SI_TIMER != -3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SI_TIMER -3
#endif
#if defined(SI_MESGQ) || (defined(HAVE_DECL_SI_MESGQ) && HAVE_DECL_SI_MESGQ)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SI_MESGQ) == (-4), "SI_MESGQ != -4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SI_MESGQ -4
#endif
#else
#if defined(SI_TIMER) || (defined(HAVE_DECL_SI_TIMER) && HAVE_DECL_SI_TIMER)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SI_TIMER) == (-2), "SI_TIMER != -2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SI_TIMER -2
#endif
#if defined(SI_MESGQ) || (defined(HAVE_DECL_SI_MESGQ) && HAVE_DECL_SI_MESGQ)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SI_MESGQ) == (-3), "SI_MESGQ != -3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SI_MESGQ -3
#endif
#if defined(SI_ASYNCIO) || (defined(HAVE_DECL_SI_ASYNCIO) && HAVE_DECL_SI_ASYNCIO)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SI_ASYNCIO) == (-4), "SI_ASYNCIO != -4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SI_ASYNCIO -4
#endif
#endif
#if defined(SI_SIGIO) || (defined(HAVE_DECL_SI_SIGIO) && HAVE_DECL_SI_SIGIO)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SI_SIGIO) == (-5), "SI_SIGIO != -5");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SI_SIGIO -5
#endif
#if defined(SI_TKILL) || (defined(HAVE_DECL_SI_TKILL) && HAVE_DECL_SI_TKILL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SI_TKILL) == (-6), "SI_TKILL != -6");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SI_TKILL -6
#endif
#if defined(SI_DETHREAD) || (defined(HAVE_DECL_SI_DETHREAD) && HAVE_DECL_SI_DETHREAD)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SI_DETHREAD) == (-7), "SI_DETHREAD != -7");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SI_DETHREAD -7
#endif
#if defined(SI_ASYNCNL) || (defined(HAVE_DECL_SI_ASYNCNL) && HAVE_DECL_SI_ASYNCNL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SI_ASYNCNL) == (-60), "SI_ASYNCNL != -60");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SI_ASYNCNL -60
#endif
#ifdef __sparc__
#if defined(SI_NOINFO) || (defined(HAVE_DECL_SI_NOINFO) && HAVE_DECL_SI_NOINFO)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SI_NOINFO) == (32767), "SI_NOINFO != 32767");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SI_NOINFO 32767
#endif
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

extern const struct xlat siginfo_codes[];

# else

static const struct xlat_data siginfo_codes_xdata[] = {
 XLAT(SI_USER),
 #define XLAT_VAL_0 ((unsigned) (SI_USER))
 #define XLAT_STR_0 STRINGIFY(SI_USER)
 XLAT(SI_KERNEL),
 #define XLAT_VAL_1 ((unsigned) (SI_KERNEL))
 #define XLAT_STR_1 STRINGIFY(SI_KERNEL)
 XLAT(SI_QUEUE),
 #define XLAT_VAL_2 ((unsigned) (SI_QUEUE))
 #define XLAT_STR_2 STRINGIFY(SI_QUEUE)

#ifdef __mips__
 XLAT(SI_ASYNCIO),
 #define XLAT_VAL_3 ((unsigned) (SI_ASYNCIO))
 #define XLAT_STR_3 STRINGIFY(SI_ASYNCIO)
 XLAT(SI_TIMER),
 #define XLAT_VAL_4 ((unsigned) (SI_TIMER))
 #define XLAT_STR_4 STRINGIFY(SI_TIMER)
 XLAT(SI_MESGQ),
 #define XLAT_VAL_5 ((unsigned) (SI_MESGQ))
 #define XLAT_STR_5 STRINGIFY(SI_MESGQ)
#else
 XLAT(SI_TIMER),
 #define XLAT_VAL_6 ((unsigned) (SI_TIMER))
 #define XLAT_STR_6 STRINGIFY(SI_TIMER)
 XLAT(SI_MESGQ),
 #define XLAT_VAL_7 ((unsigned) (SI_MESGQ))
 #define XLAT_STR_7 STRINGIFY(SI_MESGQ)
 XLAT(SI_ASYNCIO),
 #define XLAT_VAL_8 ((unsigned) (SI_ASYNCIO))
 #define XLAT_STR_8 STRINGIFY(SI_ASYNCIO)
#endif

 XLAT(SI_SIGIO),
 #define XLAT_VAL_9 ((unsigned) (SI_SIGIO))
 #define XLAT_STR_9 STRINGIFY(SI_SIGIO)
 XLAT(SI_TKILL),
 #define XLAT_VAL_10 ((unsigned) (SI_TKILL))
 #define XLAT_STR_10 STRINGIFY(SI_TKILL)
 XLAT(SI_DETHREAD),
 #define XLAT_VAL_11 ((unsigned) (SI_DETHREAD))
 #define XLAT_STR_11 STRINGIFY(SI_DETHREAD)
 XLAT(SI_ASYNCNL),
 #define XLAT_VAL_12 ((unsigned) (SI_ASYNCNL))
 #define XLAT_STR_12 STRINGIFY(SI_ASYNCNL)

#ifdef __sparc__
 XLAT(SI_NOINFO),
 #define XLAT_VAL_13 ((unsigned) (SI_NOINFO))
 #define XLAT_STR_13 STRINGIFY(SI_NOINFO)
#endif
};
#  if !(defined HAVE_M32_MPERS || defined HAVE_MX32_MPERS)
static
#  endif
const struct xlat siginfo_codes[1] = { {
 .data = siginfo_codes_xdata,
 .size = ARRAY_SIZE(siginfo_codes_xdata),
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
