/* Generated by ./src/xlat/gen.sh from ./src/xlat/v4l2_meta_fmts.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"


#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

extern const struct xlat v4l2_meta_fmts[];

# else

static const struct xlat_data v4l2_meta_fmts_xdata[] = {
 XLAT(V4L2_META_FMT_VIVID),
 #define XLAT_VAL_0 ((unsigned) (V4L2_META_FMT_VIVID))
 #define XLAT_STR_0 STRINGIFY(V4L2_META_FMT_VIVID)
 XLAT(V4L2_META_FMT_UVC),
 #define XLAT_VAL_1 ((unsigned) (V4L2_META_FMT_UVC))
 #define XLAT_STR_1 STRINGIFY(V4L2_META_FMT_UVC)
 XLAT(V4L2_META_FMT_VSP1_HGO),
 #define XLAT_VAL_2 ((unsigned) (V4L2_META_FMT_VSP1_HGO))
 #define XLAT_STR_2 STRINGIFY(V4L2_META_FMT_VSP1_HGO)
 XLAT(V4L2_META_FMT_RK_ISP1_PARAMS),
 #define XLAT_VAL_3 ((unsigned) (V4L2_META_FMT_RK_ISP1_PARAMS))
 #define XLAT_STR_3 STRINGIFY(V4L2_META_FMT_RK_ISP1_PARAMS)
 XLAT(V4L2_META_FMT_RK_ISP1_STAT_3A),
 #define XLAT_VAL_4 ((unsigned) (V4L2_META_FMT_RK_ISP1_STAT_3A))
 #define XLAT_STR_4 STRINGIFY(V4L2_META_FMT_RK_ISP1_STAT_3A)
 XLAT(V4L2_META_FMT_VSP1_HGT),
 #define XLAT_VAL_5 ((unsigned) (V4L2_META_FMT_VSP1_HGT))
 #define XLAT_STR_5 STRINGIFY(V4L2_META_FMT_VSP1_HGT)
 XLAT(V4L2_META_FMT_D4XX),
 #define XLAT_VAL_6 ((unsigned) (V4L2_META_FMT_D4XX))
 #define XLAT_STR_6 STRINGIFY(V4L2_META_FMT_D4XX)
};
#  if !(defined HAVE_M32_MPERS || defined HAVE_MX32_MPERS)
static
#  endif
const struct xlat v4l2_meta_fmts[1] = { {
 .data = v4l2_meta_fmts_xdata,
 .size = ARRAY_SIZE(v4l2_meta_fmts_xdata),
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
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
