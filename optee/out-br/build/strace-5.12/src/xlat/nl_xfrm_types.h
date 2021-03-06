/* Generated by ./src/xlat/gen.sh from ./src/xlat/nl_xfrm_types.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(XFRM_MSG_NEWSA) || (defined(HAVE_DECL_XFRM_MSG_NEWSA) && HAVE_DECL_XFRM_MSG_NEWSA)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((XFRM_MSG_NEWSA) == (0x10), "XFRM_MSG_NEWSA != 0x10");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define XFRM_MSG_NEWSA 0x10
#endif
#if defined(XFRM_MSG_DELSA) || (defined(HAVE_DECL_XFRM_MSG_DELSA) && HAVE_DECL_XFRM_MSG_DELSA)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((XFRM_MSG_DELSA) == (0x11), "XFRM_MSG_DELSA != 0x11");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define XFRM_MSG_DELSA 0x11
#endif
#if defined(XFRM_MSG_GETSA) || (defined(HAVE_DECL_XFRM_MSG_GETSA) && HAVE_DECL_XFRM_MSG_GETSA)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((XFRM_MSG_GETSA) == (0x12), "XFRM_MSG_GETSA != 0x12");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define XFRM_MSG_GETSA 0x12
#endif
#if defined(XFRM_MSG_NEWPOLICY) || (defined(HAVE_DECL_XFRM_MSG_NEWPOLICY) && HAVE_DECL_XFRM_MSG_NEWPOLICY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((XFRM_MSG_NEWPOLICY) == (0x13), "XFRM_MSG_NEWPOLICY != 0x13");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define XFRM_MSG_NEWPOLICY 0x13
#endif
#if defined(XFRM_MSG_DELPOLICY) || (defined(HAVE_DECL_XFRM_MSG_DELPOLICY) && HAVE_DECL_XFRM_MSG_DELPOLICY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((XFRM_MSG_DELPOLICY) == (0x14), "XFRM_MSG_DELPOLICY != 0x14");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define XFRM_MSG_DELPOLICY 0x14
#endif
#if defined(XFRM_MSG_GETPOLICY) || (defined(HAVE_DECL_XFRM_MSG_GETPOLICY) && HAVE_DECL_XFRM_MSG_GETPOLICY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((XFRM_MSG_GETPOLICY) == (0x15), "XFRM_MSG_GETPOLICY != 0x15");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define XFRM_MSG_GETPOLICY 0x15
#endif
#if defined(XFRM_MSG_ALLOCSPI) || (defined(HAVE_DECL_XFRM_MSG_ALLOCSPI) && HAVE_DECL_XFRM_MSG_ALLOCSPI)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((XFRM_MSG_ALLOCSPI) == (0x16), "XFRM_MSG_ALLOCSPI != 0x16");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define XFRM_MSG_ALLOCSPI 0x16
#endif
#if defined(XFRM_MSG_ACQUIRE) || (defined(HAVE_DECL_XFRM_MSG_ACQUIRE) && HAVE_DECL_XFRM_MSG_ACQUIRE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((XFRM_MSG_ACQUIRE) == (0x17), "XFRM_MSG_ACQUIRE != 0x17");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define XFRM_MSG_ACQUIRE 0x17
#endif
#if defined(XFRM_MSG_EXPIRE) || (defined(HAVE_DECL_XFRM_MSG_EXPIRE) && HAVE_DECL_XFRM_MSG_EXPIRE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((XFRM_MSG_EXPIRE) == (0x18), "XFRM_MSG_EXPIRE != 0x18");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define XFRM_MSG_EXPIRE 0x18
#endif
#if defined(XFRM_MSG_UPDPOLICY) || (defined(HAVE_DECL_XFRM_MSG_UPDPOLICY) && HAVE_DECL_XFRM_MSG_UPDPOLICY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((XFRM_MSG_UPDPOLICY) == (0x19), "XFRM_MSG_UPDPOLICY != 0x19");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define XFRM_MSG_UPDPOLICY 0x19
#endif
#if defined(XFRM_MSG_UPDSA) || (defined(HAVE_DECL_XFRM_MSG_UPDSA) && HAVE_DECL_XFRM_MSG_UPDSA)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((XFRM_MSG_UPDSA) == (0x1a), "XFRM_MSG_UPDSA != 0x1a");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define XFRM_MSG_UPDSA 0x1a
#endif
#if defined(XFRM_MSG_POLEXPIRE) || (defined(HAVE_DECL_XFRM_MSG_POLEXPIRE) && HAVE_DECL_XFRM_MSG_POLEXPIRE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((XFRM_MSG_POLEXPIRE) == (0x1b), "XFRM_MSG_POLEXPIRE != 0x1b");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define XFRM_MSG_POLEXPIRE 0x1b
#endif
#if defined(XFRM_MSG_FLUSHSA) || (defined(HAVE_DECL_XFRM_MSG_FLUSHSA) && HAVE_DECL_XFRM_MSG_FLUSHSA)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((XFRM_MSG_FLUSHSA) == (0x1c), "XFRM_MSG_FLUSHSA != 0x1c");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define XFRM_MSG_FLUSHSA 0x1c
#endif
#if defined(XFRM_MSG_FLUSHPOLICY) || (defined(HAVE_DECL_XFRM_MSG_FLUSHPOLICY) && HAVE_DECL_XFRM_MSG_FLUSHPOLICY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((XFRM_MSG_FLUSHPOLICY) == (0x1d), "XFRM_MSG_FLUSHPOLICY != 0x1d");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define XFRM_MSG_FLUSHPOLICY 0x1d
#endif
#if defined(XFRM_MSG_NEWAE) || (defined(HAVE_DECL_XFRM_MSG_NEWAE) && HAVE_DECL_XFRM_MSG_NEWAE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((XFRM_MSG_NEWAE) == (0x1e), "XFRM_MSG_NEWAE != 0x1e");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define XFRM_MSG_NEWAE 0x1e
#endif
#if defined(XFRM_MSG_GETAE) || (defined(HAVE_DECL_XFRM_MSG_GETAE) && HAVE_DECL_XFRM_MSG_GETAE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((XFRM_MSG_GETAE) == (0x1f), "XFRM_MSG_GETAE != 0x1f");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define XFRM_MSG_GETAE 0x1f
#endif
#if defined(XFRM_MSG_REPORT) || (defined(HAVE_DECL_XFRM_MSG_REPORT) && HAVE_DECL_XFRM_MSG_REPORT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((XFRM_MSG_REPORT) == (0x20), "XFRM_MSG_REPORT != 0x20");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define XFRM_MSG_REPORT 0x20
#endif
#if defined(XFRM_MSG_MIGRATE) || (defined(HAVE_DECL_XFRM_MSG_MIGRATE) && HAVE_DECL_XFRM_MSG_MIGRATE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((XFRM_MSG_MIGRATE) == (0x21), "XFRM_MSG_MIGRATE != 0x21");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define XFRM_MSG_MIGRATE 0x21
#endif
#if defined(XFRM_MSG_NEWSADINFO) || (defined(HAVE_DECL_XFRM_MSG_NEWSADINFO) && HAVE_DECL_XFRM_MSG_NEWSADINFO)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((XFRM_MSG_NEWSADINFO) == (0x22), "XFRM_MSG_NEWSADINFO != 0x22");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define XFRM_MSG_NEWSADINFO 0x22
#endif
#if defined(XFRM_MSG_GETSADINFO) || (defined(HAVE_DECL_XFRM_MSG_GETSADINFO) && HAVE_DECL_XFRM_MSG_GETSADINFO)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((XFRM_MSG_GETSADINFO) == (0x23), "XFRM_MSG_GETSADINFO != 0x23");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define XFRM_MSG_GETSADINFO 0x23
#endif
#if defined(XFRM_MSG_NEWSPDINFO) || (defined(HAVE_DECL_XFRM_MSG_NEWSPDINFO) && HAVE_DECL_XFRM_MSG_NEWSPDINFO)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((XFRM_MSG_NEWSPDINFO) == (0x24), "XFRM_MSG_NEWSPDINFO != 0x24");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define XFRM_MSG_NEWSPDINFO 0x24
#endif
#if defined(XFRM_MSG_GETSPDINFO) || (defined(HAVE_DECL_XFRM_MSG_GETSPDINFO) && HAVE_DECL_XFRM_MSG_GETSPDINFO)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((XFRM_MSG_GETSPDINFO) == (0x25), "XFRM_MSG_GETSPDINFO != 0x25");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define XFRM_MSG_GETSPDINFO 0x25
#endif
#if defined(XFRM_MSG_MAPPING) || (defined(HAVE_DECL_XFRM_MSG_MAPPING) && HAVE_DECL_XFRM_MSG_MAPPING)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((XFRM_MSG_MAPPING) == (0x26), "XFRM_MSG_MAPPING != 0x26");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define XFRM_MSG_MAPPING 0x26
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat nl_xfrm_types in mpers mode

# else

static const struct xlat_data nl_xfrm_types_xdata[] = {
 XLAT(XFRM_MSG_NEWSA),
 #define XLAT_VAL_0 ((unsigned) (XFRM_MSG_NEWSA))
 #define XLAT_STR_0 STRINGIFY(XFRM_MSG_NEWSA)
 XLAT(XFRM_MSG_DELSA),
 #define XLAT_VAL_1 ((unsigned) (XFRM_MSG_DELSA))
 #define XLAT_STR_1 STRINGIFY(XFRM_MSG_DELSA)
 XLAT(XFRM_MSG_GETSA),
 #define XLAT_VAL_2 ((unsigned) (XFRM_MSG_GETSA))
 #define XLAT_STR_2 STRINGIFY(XFRM_MSG_GETSA)

 XLAT(XFRM_MSG_NEWPOLICY),
 #define XLAT_VAL_3 ((unsigned) (XFRM_MSG_NEWPOLICY))
 #define XLAT_STR_3 STRINGIFY(XFRM_MSG_NEWPOLICY)
 XLAT(XFRM_MSG_DELPOLICY),
 #define XLAT_VAL_4 ((unsigned) (XFRM_MSG_DELPOLICY))
 #define XLAT_STR_4 STRINGIFY(XFRM_MSG_DELPOLICY)
 XLAT(XFRM_MSG_GETPOLICY),
 #define XLAT_VAL_5 ((unsigned) (XFRM_MSG_GETPOLICY))
 #define XLAT_STR_5 STRINGIFY(XFRM_MSG_GETPOLICY)

 XLAT(XFRM_MSG_ALLOCSPI),
 #define XLAT_VAL_6 ((unsigned) (XFRM_MSG_ALLOCSPI))
 #define XLAT_STR_6 STRINGIFY(XFRM_MSG_ALLOCSPI)
 XLAT(XFRM_MSG_ACQUIRE),
 #define XLAT_VAL_7 ((unsigned) (XFRM_MSG_ACQUIRE))
 #define XLAT_STR_7 STRINGIFY(XFRM_MSG_ACQUIRE)
 XLAT(XFRM_MSG_EXPIRE),
 #define XLAT_VAL_8 ((unsigned) (XFRM_MSG_EXPIRE))
 #define XLAT_STR_8 STRINGIFY(XFRM_MSG_EXPIRE)

 XLAT(XFRM_MSG_UPDPOLICY),
 #define XLAT_VAL_9 ((unsigned) (XFRM_MSG_UPDPOLICY))
 #define XLAT_STR_9 STRINGIFY(XFRM_MSG_UPDPOLICY)
 XLAT(XFRM_MSG_UPDSA),
 #define XLAT_VAL_10 ((unsigned) (XFRM_MSG_UPDSA))
 #define XLAT_STR_10 STRINGIFY(XFRM_MSG_UPDSA)

 XLAT(XFRM_MSG_POLEXPIRE),
 #define XLAT_VAL_11 ((unsigned) (XFRM_MSG_POLEXPIRE))
 #define XLAT_STR_11 STRINGIFY(XFRM_MSG_POLEXPIRE)

 XLAT(XFRM_MSG_FLUSHSA),
 #define XLAT_VAL_12 ((unsigned) (XFRM_MSG_FLUSHSA))
 #define XLAT_STR_12 STRINGIFY(XFRM_MSG_FLUSHSA)
 XLAT(XFRM_MSG_FLUSHPOLICY),
 #define XLAT_VAL_13 ((unsigned) (XFRM_MSG_FLUSHPOLICY))
 #define XLAT_STR_13 STRINGIFY(XFRM_MSG_FLUSHPOLICY)

 XLAT(XFRM_MSG_NEWAE),
 #define XLAT_VAL_14 ((unsigned) (XFRM_MSG_NEWAE))
 #define XLAT_STR_14 STRINGIFY(XFRM_MSG_NEWAE)
 XLAT(XFRM_MSG_GETAE),
 #define XLAT_VAL_15 ((unsigned) (XFRM_MSG_GETAE))
 #define XLAT_STR_15 STRINGIFY(XFRM_MSG_GETAE)

 XLAT(XFRM_MSG_REPORT),
 #define XLAT_VAL_16 ((unsigned) (XFRM_MSG_REPORT))
 #define XLAT_STR_16 STRINGIFY(XFRM_MSG_REPORT)

 XLAT(XFRM_MSG_MIGRATE),
 #define XLAT_VAL_17 ((unsigned) (XFRM_MSG_MIGRATE))
 #define XLAT_STR_17 STRINGIFY(XFRM_MSG_MIGRATE)

 XLAT(XFRM_MSG_NEWSADINFO),
 #define XLAT_VAL_18 ((unsigned) (XFRM_MSG_NEWSADINFO))
 #define XLAT_STR_18 STRINGIFY(XFRM_MSG_NEWSADINFO)
 XLAT(XFRM_MSG_GETSADINFO),
 #define XLAT_VAL_19 ((unsigned) (XFRM_MSG_GETSADINFO))
 #define XLAT_STR_19 STRINGIFY(XFRM_MSG_GETSADINFO)

 XLAT(XFRM_MSG_NEWSPDINFO),
 #define XLAT_VAL_20 ((unsigned) (XFRM_MSG_NEWSPDINFO))
 #define XLAT_STR_20 STRINGIFY(XFRM_MSG_NEWSPDINFO)
 XLAT(XFRM_MSG_GETSPDINFO),
 #define XLAT_VAL_21 ((unsigned) (XFRM_MSG_GETSPDINFO))
 #define XLAT_STR_21 STRINGIFY(XFRM_MSG_GETSPDINFO)

 XLAT(XFRM_MSG_MAPPING),
 #define XLAT_VAL_22 ((unsigned) (XFRM_MSG_MAPPING))
 #define XLAT_STR_22 STRINGIFY(XFRM_MSG_MAPPING)
};
static
const struct xlat nl_xfrm_types[1] = { {
 .data = nl_xfrm_types_xdata,
 .size = ARRAY_SIZE(nl_xfrm_types_xdata),
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
#  ifdef XLAT_VAL_14
  | XLAT_VAL_14
#  endif
#  ifdef XLAT_VAL_15
  | XLAT_VAL_15
#  endif
#  ifdef XLAT_VAL_16
  | XLAT_VAL_16
#  endif
#  ifdef XLAT_VAL_17
  | XLAT_VAL_17
#  endif
#  ifdef XLAT_VAL_18
  | XLAT_VAL_18
#  endif
#  ifdef XLAT_VAL_19
  | XLAT_VAL_19
#  endif
#  ifdef XLAT_VAL_20
  | XLAT_VAL_20
#  endif
#  ifdef XLAT_VAL_21
  | XLAT_VAL_21
#  endif
#  ifdef XLAT_VAL_22
  | XLAT_VAL_22
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
#  ifdef XLAT_STR_14
  + sizeof(XLAT_STR_14)
#  endif
#  ifdef XLAT_STR_15
  + sizeof(XLAT_STR_15)
#  endif
#  ifdef XLAT_STR_16
  + sizeof(XLAT_STR_16)
#  endif
#  ifdef XLAT_STR_17
  + sizeof(XLAT_STR_17)
#  endif
#  ifdef XLAT_STR_18
  + sizeof(XLAT_STR_18)
#  endif
#  ifdef XLAT_STR_19
  + sizeof(XLAT_STR_19)
#  endif
#  ifdef XLAT_STR_20
  + sizeof(XLAT_STR_20)
#  endif
#  ifdef XLAT_STR_21
  + sizeof(XLAT_STR_21)
#  endif
#  ifdef XLAT_STR_22
  + sizeof(XLAT_STR_22)
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
#  undef XLAT_STR_14
#  undef XLAT_VAL_14
#  undef XLAT_STR_15
#  undef XLAT_VAL_15
#  undef XLAT_STR_16
#  undef XLAT_VAL_16
#  undef XLAT_STR_17
#  undef XLAT_VAL_17
#  undef XLAT_STR_18
#  undef XLAT_VAL_18
#  undef XLAT_STR_19
#  undef XLAT_VAL_19
#  undef XLAT_STR_20
#  undef XLAT_VAL_20
#  undef XLAT_STR_21
#  undef XLAT_VAL_21
#  undef XLAT_STR_22
#  undef XLAT_VAL_22
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
