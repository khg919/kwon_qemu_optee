/* Generated by ./src/xlat/gen.sh from ./src/xlat/quotacmds.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(Q_V1_QUOTAON) || (defined(HAVE_DECL_Q_V1_QUOTAON) && HAVE_DECL_Q_V1_QUOTAON)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((Q_V1_QUOTAON) == (OLD_CMD(0x1)), "Q_V1_QUOTAON != OLD_CMD(0x1)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define Q_V1_QUOTAON OLD_CMD(0x1)
#endif
#if defined(Q_V1_QUOTAOFF) || (defined(HAVE_DECL_Q_V1_QUOTAOFF) && HAVE_DECL_Q_V1_QUOTAOFF)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((Q_V1_QUOTAOFF) == (OLD_CMD(0x2)), "Q_V1_QUOTAOFF != OLD_CMD(0x2)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define Q_V1_QUOTAOFF OLD_CMD(0x2)
#endif
#if defined(Q_V1_GETQUOTA) || (defined(HAVE_DECL_Q_V1_GETQUOTA) && HAVE_DECL_Q_V1_GETQUOTA)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((Q_V1_GETQUOTA) == (OLD_CMD(0x3)), "Q_V1_GETQUOTA != OLD_CMD(0x3)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define Q_V1_GETQUOTA OLD_CMD(0x3)
#endif
#if defined(Q_V1_SETQUOTA) || (defined(HAVE_DECL_Q_V1_SETQUOTA) && HAVE_DECL_Q_V1_SETQUOTA)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((Q_V1_SETQUOTA) == (OLD_CMD(0x4)), "Q_V1_SETQUOTA != OLD_CMD(0x4)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define Q_V1_SETQUOTA OLD_CMD(0x4)
#endif
#if defined(Q_V1_SETUSE) || (defined(HAVE_DECL_Q_V1_SETUSE) && HAVE_DECL_Q_V1_SETUSE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((Q_V1_SETUSE) == (OLD_CMD(0x5)), "Q_V1_SETUSE != OLD_CMD(0x5)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define Q_V1_SETUSE OLD_CMD(0x5)
#endif
#if defined(Q_V1_SYNC) || (defined(HAVE_DECL_Q_V1_SYNC) && HAVE_DECL_Q_V1_SYNC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((Q_V1_SYNC) == (OLD_CMD(0x6)), "Q_V1_SYNC != OLD_CMD(0x6)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define Q_V1_SYNC OLD_CMD(0x6)
#endif
#if defined(Q_SETQLIM) || (defined(HAVE_DECL_Q_SETQLIM) && HAVE_DECL_Q_SETQLIM)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((Q_SETQLIM) == (OLD_CMD(0x7)), "Q_SETQLIM != OLD_CMD(0x7)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define Q_SETQLIM OLD_CMD(0x7)
#endif
#if defined(Q_V1_GETSTATS) || (defined(HAVE_DECL_Q_V1_GETSTATS) && HAVE_DECL_Q_V1_GETSTATS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((Q_V1_GETSTATS) == (OLD_CMD(0x8)), "Q_V1_GETSTATS != OLD_CMD(0x8)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define Q_V1_GETSTATS OLD_CMD(0x8)
#endif
#if defined(Q_V1_RSQUASH) || (defined(HAVE_DECL_Q_V1_RSQUASH) && HAVE_DECL_Q_V1_RSQUASH)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((Q_V1_RSQUASH) == (OLD_CMD(0x10)), "Q_V1_RSQUASH != OLD_CMD(0x10)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define Q_V1_RSQUASH OLD_CMD(0x10)
#endif
#if defined(Q_V2_GETQUOTA) || (defined(HAVE_DECL_Q_V2_GETQUOTA) && HAVE_DECL_Q_V2_GETQUOTA)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((Q_V2_GETQUOTA) == (OLD_CMD(0xD)), "Q_V2_GETQUOTA != OLD_CMD(0xD)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define Q_V2_GETQUOTA OLD_CMD(0xD)
#endif
#if defined(Q_V2_SETQUOTA) || (defined(HAVE_DECL_Q_V2_SETQUOTA) && HAVE_DECL_Q_V2_SETQUOTA)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((Q_V2_SETQUOTA) == (OLD_CMD(0xE)), "Q_V2_SETQUOTA != OLD_CMD(0xE)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define Q_V2_SETQUOTA OLD_CMD(0xE)
#endif
#if defined(Q_V2_SETUSE) || (defined(HAVE_DECL_Q_V2_SETUSE) && HAVE_DECL_Q_V2_SETUSE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((Q_V2_SETUSE) == (OLD_CMD(0xF)), "Q_V2_SETUSE != OLD_CMD(0xF)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define Q_V2_SETUSE OLD_CMD(0xF)
#endif
#if defined(Q_V2_GETINFO) || (defined(HAVE_DECL_Q_V2_GETINFO) && HAVE_DECL_Q_V2_GETINFO)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((Q_V2_GETINFO) == (OLD_CMD(0x9)), "Q_V2_GETINFO != OLD_CMD(0x9)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define Q_V2_GETINFO OLD_CMD(0x9)
#endif
#if defined(Q_V2_SETINFO) || (defined(HAVE_DECL_Q_V2_SETINFO) && HAVE_DECL_Q_V2_SETINFO)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((Q_V2_SETINFO) == (OLD_CMD(0xA)), "Q_V2_SETINFO != OLD_CMD(0xA)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define Q_V2_SETINFO OLD_CMD(0xA)
#endif
#if defined(Q_V2_SETGRACE) || (defined(HAVE_DECL_Q_V2_SETGRACE) && HAVE_DECL_Q_V2_SETGRACE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((Q_V2_SETGRACE) == (OLD_CMD(0xB)), "Q_V2_SETGRACE != OLD_CMD(0xB)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define Q_V2_SETGRACE OLD_CMD(0xB)
#endif
#if defined(Q_V2_SETFLAGS) || (defined(HAVE_DECL_Q_V2_SETFLAGS) && HAVE_DECL_Q_V2_SETFLAGS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((Q_V2_SETFLAGS) == (OLD_CMD(0xC)), "Q_V2_SETFLAGS != OLD_CMD(0xC)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define Q_V2_SETFLAGS OLD_CMD(0xC)
#endif
#if defined(Q_V2_GETSTATS) || (defined(HAVE_DECL_Q_V2_GETSTATS) && HAVE_DECL_Q_V2_GETSTATS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((Q_V2_GETSTATS) == (OLD_CMD(0x11)), "Q_V2_GETSTATS != OLD_CMD(0x11)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define Q_V2_GETSTATS OLD_CMD(0x11)
#endif
#if defined(Q_SYNC) || (defined(HAVE_DECL_Q_SYNC) && HAVE_DECL_Q_SYNC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((Q_SYNC) == (NEW_CMD(0x1)), "Q_SYNC != NEW_CMD(0x1)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define Q_SYNC NEW_CMD(0x1)
#endif
#if defined(Q_QUOTAON) || (defined(HAVE_DECL_Q_QUOTAON) && HAVE_DECL_Q_QUOTAON)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((Q_QUOTAON) == (NEW_CMD(0x2)), "Q_QUOTAON != NEW_CMD(0x2)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define Q_QUOTAON NEW_CMD(0x2)
#endif
#if defined(Q_QUOTAOFF) || (defined(HAVE_DECL_Q_QUOTAOFF) && HAVE_DECL_Q_QUOTAOFF)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((Q_QUOTAOFF) == (NEW_CMD(0x3)), "Q_QUOTAOFF != NEW_CMD(0x3)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define Q_QUOTAOFF NEW_CMD(0x3)
#endif
#if defined(Q_GETFMT) || (defined(HAVE_DECL_Q_GETFMT) && HAVE_DECL_Q_GETFMT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((Q_GETFMT) == (NEW_CMD(0x4)), "Q_GETFMT != NEW_CMD(0x4)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define Q_GETFMT NEW_CMD(0x4)
#endif
#if defined(Q_GETINFO) || (defined(HAVE_DECL_Q_GETINFO) && HAVE_DECL_Q_GETINFO)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((Q_GETINFO) == (NEW_CMD(0x5)), "Q_GETINFO != NEW_CMD(0x5)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define Q_GETINFO NEW_CMD(0x5)
#endif
#if defined(Q_SETINFO) || (defined(HAVE_DECL_Q_SETINFO) && HAVE_DECL_Q_SETINFO)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((Q_SETINFO) == (NEW_CMD(0x6)), "Q_SETINFO != NEW_CMD(0x6)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define Q_SETINFO NEW_CMD(0x6)
#endif
#if defined(Q_GETQUOTA) || (defined(HAVE_DECL_Q_GETQUOTA) && HAVE_DECL_Q_GETQUOTA)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((Q_GETQUOTA) == (NEW_CMD(0x7)), "Q_GETQUOTA != NEW_CMD(0x7)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define Q_GETQUOTA NEW_CMD(0x7)
#endif
#if defined(Q_SETQUOTA) || (defined(HAVE_DECL_Q_SETQUOTA) && HAVE_DECL_Q_SETQUOTA)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((Q_SETQUOTA) == (NEW_CMD(0x8)), "Q_SETQUOTA != NEW_CMD(0x8)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define Q_SETQUOTA NEW_CMD(0x8)
#endif
#if defined(Q_GETNEXTQUOTA) || (defined(HAVE_DECL_Q_GETNEXTQUOTA) && HAVE_DECL_Q_GETNEXTQUOTA)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((Q_GETNEXTQUOTA) == (NEW_CMD(0x9)), "Q_GETNEXTQUOTA != NEW_CMD(0x9)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define Q_GETNEXTQUOTA NEW_CMD(0x9)
#endif
#if defined(Q_XQUOTAON) || (defined(HAVE_DECL_Q_XQUOTAON) && HAVE_DECL_Q_XQUOTAON)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((Q_XQUOTAON) == (XQM_CMD(0x1)), "Q_XQUOTAON != XQM_CMD(0x1)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define Q_XQUOTAON XQM_CMD(0x1)
#endif
#if defined(Q_XQUOTAOFF) || (defined(HAVE_DECL_Q_XQUOTAOFF) && HAVE_DECL_Q_XQUOTAOFF)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((Q_XQUOTAOFF) == (XQM_CMD(0x2)), "Q_XQUOTAOFF != XQM_CMD(0x2)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define Q_XQUOTAOFF XQM_CMD(0x2)
#endif
#if defined(Q_XGETQUOTA) || (defined(HAVE_DECL_Q_XGETQUOTA) && HAVE_DECL_Q_XGETQUOTA)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((Q_XGETQUOTA) == (XQM_CMD(0x3)), "Q_XGETQUOTA != XQM_CMD(0x3)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define Q_XGETQUOTA XQM_CMD(0x3)
#endif
#if defined(Q_XSETQLIM) || (defined(HAVE_DECL_Q_XSETQLIM) && HAVE_DECL_Q_XSETQLIM)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((Q_XSETQLIM) == (XQM_CMD(0x4)), "Q_XSETQLIM != XQM_CMD(0x4)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define Q_XSETQLIM XQM_CMD(0x4)
#endif
#if defined(Q_XGETQSTAT) || (defined(HAVE_DECL_Q_XGETQSTAT) && HAVE_DECL_Q_XGETQSTAT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((Q_XGETQSTAT) == (XQM_CMD(0x5)), "Q_XGETQSTAT != XQM_CMD(0x5)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define Q_XGETQSTAT XQM_CMD(0x5)
#endif
#if defined(Q_XQUOTARM) || (defined(HAVE_DECL_Q_XQUOTARM) && HAVE_DECL_Q_XQUOTARM)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((Q_XQUOTARM) == (XQM_CMD(0x6)), "Q_XQUOTARM != XQM_CMD(0x6)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define Q_XQUOTARM XQM_CMD(0x6)
#endif
#if defined(Q_XQUOTASYNC) || (defined(HAVE_DECL_Q_XQUOTASYNC) && HAVE_DECL_Q_XQUOTASYNC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((Q_XQUOTASYNC) == (XQM_CMD(0x7)), "Q_XQUOTASYNC != XQM_CMD(0x7)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define Q_XQUOTASYNC XQM_CMD(0x7)
#endif
#if defined(Q_XGETQSTATV) || (defined(HAVE_DECL_Q_XGETQSTATV) && HAVE_DECL_Q_XGETQSTATV)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((Q_XGETQSTATV) == (XQM_CMD(0x8)), "Q_XGETQSTATV != XQM_CMD(0x8)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define Q_XGETQSTATV XQM_CMD(0x8)
#endif
#if defined(Q_XGETNEXTQUOTA) || (defined(HAVE_DECL_Q_XGETNEXTQUOTA) && HAVE_DECL_Q_XGETNEXTQUOTA)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((Q_XGETNEXTQUOTA) == (XQM_CMD(0x9)), "Q_XGETNEXTQUOTA != XQM_CMD(0x9)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define Q_XGETNEXTQUOTA XQM_CMD(0x9)
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat quotacmds in mpers mode

# else

static const struct xlat_data quotacmds_xdata[] = {
 XLAT(Q_V1_QUOTAON),
 #define XLAT_VAL_0 ((unsigned) (Q_V1_QUOTAON))
 #define XLAT_STR_0 STRINGIFY(Q_V1_QUOTAON)
 XLAT(Q_V1_QUOTAOFF),
 #define XLAT_VAL_1 ((unsigned) (Q_V1_QUOTAOFF))
 #define XLAT_STR_1 STRINGIFY(Q_V1_QUOTAOFF)
 XLAT(Q_V1_GETQUOTA),
 #define XLAT_VAL_2 ((unsigned) (Q_V1_GETQUOTA))
 #define XLAT_STR_2 STRINGIFY(Q_V1_GETQUOTA)
 XLAT(Q_V1_SETQUOTA),
 #define XLAT_VAL_3 ((unsigned) (Q_V1_SETQUOTA))
 #define XLAT_STR_3 STRINGIFY(Q_V1_SETQUOTA)
 XLAT(Q_V1_SETUSE),
 #define XLAT_VAL_4 ((unsigned) (Q_V1_SETUSE))
 #define XLAT_STR_4 STRINGIFY(Q_V1_SETUSE)
 XLAT(Q_V1_SYNC),
 #define XLAT_VAL_5 ((unsigned) (Q_V1_SYNC))
 #define XLAT_STR_5 STRINGIFY(Q_V1_SYNC)
 XLAT(Q_SETQLIM),
 #define XLAT_VAL_6 ((unsigned) (Q_SETQLIM))
 #define XLAT_STR_6 STRINGIFY(Q_SETQLIM)
 XLAT(Q_V1_GETSTATS),
 #define XLAT_VAL_7 ((unsigned) (Q_V1_GETSTATS))
 #define XLAT_STR_7 STRINGIFY(Q_V1_GETSTATS)
 XLAT(Q_V1_RSQUASH),
 #define XLAT_VAL_8 ((unsigned) (Q_V1_RSQUASH))
 #define XLAT_STR_8 STRINGIFY(Q_V1_RSQUASH)

 XLAT(Q_V2_GETQUOTA),
 #define XLAT_VAL_9 ((unsigned) (Q_V2_GETQUOTA))
 #define XLAT_STR_9 STRINGIFY(Q_V2_GETQUOTA)
 XLAT(Q_V2_SETQUOTA),
 #define XLAT_VAL_10 ((unsigned) (Q_V2_SETQUOTA))
 #define XLAT_STR_10 STRINGIFY(Q_V2_SETQUOTA)
 XLAT(Q_V2_SETUSE),
 #define XLAT_VAL_11 ((unsigned) (Q_V2_SETUSE))
 #define XLAT_STR_11 STRINGIFY(Q_V2_SETUSE)
 XLAT(Q_V2_GETINFO),
 #define XLAT_VAL_12 ((unsigned) (Q_V2_GETINFO))
 #define XLAT_STR_12 STRINGIFY(Q_V2_GETINFO)
 XLAT(Q_V2_SETINFO),
 #define XLAT_VAL_13 ((unsigned) (Q_V2_SETINFO))
 #define XLAT_STR_13 STRINGIFY(Q_V2_SETINFO)
 XLAT(Q_V2_SETGRACE),
 #define XLAT_VAL_14 ((unsigned) (Q_V2_SETGRACE))
 #define XLAT_STR_14 STRINGIFY(Q_V2_SETGRACE)
 XLAT(Q_V2_SETFLAGS),
 #define XLAT_VAL_15 ((unsigned) (Q_V2_SETFLAGS))
 #define XLAT_STR_15 STRINGIFY(Q_V2_SETFLAGS)
 XLAT(Q_V2_GETSTATS),
 #define XLAT_VAL_16 ((unsigned) (Q_V2_GETSTATS))
 #define XLAT_STR_16 STRINGIFY(Q_V2_GETSTATS)

 XLAT(Q_SYNC),
 #define XLAT_VAL_17 ((unsigned) (Q_SYNC))
 #define XLAT_STR_17 STRINGIFY(Q_SYNC)
 XLAT(Q_QUOTAON),
 #define XLAT_VAL_18 ((unsigned) (Q_QUOTAON))
 #define XLAT_STR_18 STRINGIFY(Q_QUOTAON)
 XLAT(Q_QUOTAOFF),
 #define XLAT_VAL_19 ((unsigned) (Q_QUOTAOFF))
 #define XLAT_STR_19 STRINGIFY(Q_QUOTAOFF)
 XLAT(Q_GETFMT),
 #define XLAT_VAL_20 ((unsigned) (Q_GETFMT))
 #define XLAT_STR_20 STRINGIFY(Q_GETFMT)
 XLAT(Q_GETINFO),
 #define XLAT_VAL_21 ((unsigned) (Q_GETINFO))
 #define XLAT_STR_21 STRINGIFY(Q_GETINFO)
 XLAT(Q_SETINFO),
 #define XLAT_VAL_22 ((unsigned) (Q_SETINFO))
 #define XLAT_STR_22 STRINGIFY(Q_SETINFO)
 XLAT(Q_GETQUOTA),
 #define XLAT_VAL_23 ((unsigned) (Q_GETQUOTA))
 #define XLAT_STR_23 STRINGIFY(Q_GETQUOTA)
 XLAT(Q_SETQUOTA),
 #define XLAT_VAL_24 ((unsigned) (Q_SETQUOTA))
 #define XLAT_STR_24 STRINGIFY(Q_SETQUOTA)
 XLAT(Q_GETNEXTQUOTA),
 #define XLAT_VAL_25 ((unsigned) (Q_GETNEXTQUOTA))
 #define XLAT_STR_25 STRINGIFY(Q_GETNEXTQUOTA)

 XLAT(Q_XQUOTAON),
 #define XLAT_VAL_26 ((unsigned) (Q_XQUOTAON))
 #define XLAT_STR_26 STRINGIFY(Q_XQUOTAON)
 XLAT(Q_XQUOTAOFF),
 #define XLAT_VAL_27 ((unsigned) (Q_XQUOTAOFF))
 #define XLAT_STR_27 STRINGIFY(Q_XQUOTAOFF)
 XLAT(Q_XGETQUOTA),
 #define XLAT_VAL_28 ((unsigned) (Q_XGETQUOTA))
 #define XLAT_STR_28 STRINGIFY(Q_XGETQUOTA)
 XLAT(Q_XSETQLIM),
 #define XLAT_VAL_29 ((unsigned) (Q_XSETQLIM))
 #define XLAT_STR_29 STRINGIFY(Q_XSETQLIM)
 XLAT(Q_XGETQSTAT),
 #define XLAT_VAL_30 ((unsigned) (Q_XGETQSTAT))
 #define XLAT_STR_30 STRINGIFY(Q_XGETQSTAT)
 XLAT(Q_XQUOTARM),
 #define XLAT_VAL_31 ((unsigned) (Q_XQUOTARM))
 #define XLAT_STR_31 STRINGIFY(Q_XQUOTARM)
 XLAT(Q_XQUOTASYNC),
 #define XLAT_VAL_32 ((unsigned) (Q_XQUOTASYNC))
 #define XLAT_STR_32 STRINGIFY(Q_XQUOTASYNC)
 XLAT(Q_XGETQSTATV),
 #define XLAT_VAL_33 ((unsigned) (Q_XGETQSTATV))
 #define XLAT_STR_33 STRINGIFY(Q_XGETQSTATV)
 XLAT(Q_XGETNEXTQUOTA),
 #define XLAT_VAL_34 ((unsigned) (Q_XGETNEXTQUOTA))
 #define XLAT_STR_34 STRINGIFY(Q_XGETNEXTQUOTA)
};
static
const struct xlat quotacmds[1] = { {
 .data = quotacmds_xdata,
 .size = ARRAY_SIZE(quotacmds_xdata),
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
#  ifdef XLAT_VAL_23
  | XLAT_VAL_23
#  endif
#  ifdef XLAT_VAL_24
  | XLAT_VAL_24
#  endif
#  ifdef XLAT_VAL_25
  | XLAT_VAL_25
#  endif
#  ifdef XLAT_VAL_26
  | XLAT_VAL_26
#  endif
#  ifdef XLAT_VAL_27
  | XLAT_VAL_27
#  endif
#  ifdef XLAT_VAL_28
  | XLAT_VAL_28
#  endif
#  ifdef XLAT_VAL_29
  | XLAT_VAL_29
#  endif
#  ifdef XLAT_VAL_30
  | XLAT_VAL_30
#  endif
#  ifdef XLAT_VAL_31
  | XLAT_VAL_31
#  endif
#  ifdef XLAT_VAL_32
  | XLAT_VAL_32
#  endif
#  ifdef XLAT_VAL_33
  | XLAT_VAL_33
#  endif
#  ifdef XLAT_VAL_34
  | XLAT_VAL_34
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
#  ifdef XLAT_STR_23
  + sizeof(XLAT_STR_23)
#  endif
#  ifdef XLAT_STR_24
  + sizeof(XLAT_STR_24)
#  endif
#  ifdef XLAT_STR_25
  + sizeof(XLAT_STR_25)
#  endif
#  ifdef XLAT_STR_26
  + sizeof(XLAT_STR_26)
#  endif
#  ifdef XLAT_STR_27
  + sizeof(XLAT_STR_27)
#  endif
#  ifdef XLAT_STR_28
  + sizeof(XLAT_STR_28)
#  endif
#  ifdef XLAT_STR_29
  + sizeof(XLAT_STR_29)
#  endif
#  ifdef XLAT_STR_30
  + sizeof(XLAT_STR_30)
#  endif
#  ifdef XLAT_STR_31
  + sizeof(XLAT_STR_31)
#  endif
#  ifdef XLAT_STR_32
  + sizeof(XLAT_STR_32)
#  endif
#  ifdef XLAT_STR_33
  + sizeof(XLAT_STR_33)
#  endif
#  ifdef XLAT_STR_34
  + sizeof(XLAT_STR_34)
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
#  undef XLAT_STR_23
#  undef XLAT_VAL_23
#  undef XLAT_STR_24
#  undef XLAT_VAL_24
#  undef XLAT_STR_25
#  undef XLAT_VAL_25
#  undef XLAT_STR_26
#  undef XLAT_VAL_26
#  undef XLAT_STR_27
#  undef XLAT_VAL_27
#  undef XLAT_STR_28
#  undef XLAT_VAL_28
#  undef XLAT_STR_29
#  undef XLAT_VAL_29
#  undef XLAT_STR_30
#  undef XLAT_VAL_30
#  undef XLAT_STR_31
#  undef XLAT_VAL_31
#  undef XLAT_STR_32
#  undef XLAT_VAL_32
#  undef XLAT_STR_33
#  undef XLAT_VAL_33
#  undef XLAT_STR_34
#  undef XLAT_VAL_34
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
