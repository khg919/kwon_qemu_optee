/* Generated by ./src/xlat/gen.sh from ./src/xlat/v4l2_control_classes.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"


#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

extern const struct xlat v4l2_control_classes[];

# else

static const struct xlat_data v4l2_control_classes_xdata[] = {
 XLAT(V4L2_CTRL_CLASS_USER),
 #define XLAT_VAL_0 ((unsigned) (V4L2_CTRL_CLASS_USER))
 #define XLAT_STR_0 STRINGIFY(V4L2_CTRL_CLASS_USER)
 XLAT(V4L2_CTRL_CLASS_CODEC),
 #define XLAT_VAL_1 ((unsigned) (V4L2_CTRL_CLASS_CODEC))
 #define XLAT_STR_1 STRINGIFY(V4L2_CTRL_CLASS_CODEC)
 XLAT(V4L2_CTRL_CLASS_CAMERA),
 #define XLAT_VAL_2 ((unsigned) (V4L2_CTRL_CLASS_CAMERA))
 #define XLAT_STR_2 STRINGIFY(V4L2_CTRL_CLASS_CAMERA)
 XLAT(V4L2_CTRL_CLASS_FM_TX),
 #define XLAT_VAL_3 ((unsigned) (V4L2_CTRL_CLASS_FM_TX))
 #define XLAT_STR_3 STRINGIFY(V4L2_CTRL_CLASS_FM_TX)
 XLAT(V4L2_CTRL_CLASS_FLASH),
 #define XLAT_VAL_4 ((unsigned) (V4L2_CTRL_CLASS_FLASH))
 #define XLAT_STR_4 STRINGIFY(V4L2_CTRL_CLASS_FLASH)
 XLAT(V4L2_CTRL_CLASS_JPEG),
 #define XLAT_VAL_5 ((unsigned) (V4L2_CTRL_CLASS_JPEG))
 #define XLAT_STR_5 STRINGIFY(V4L2_CTRL_CLASS_JPEG)
 XLAT(V4L2_CTRL_CLASS_IMAGE_SOURCE),
 #define XLAT_VAL_6 ((unsigned) (V4L2_CTRL_CLASS_IMAGE_SOURCE))
 #define XLAT_STR_6 STRINGIFY(V4L2_CTRL_CLASS_IMAGE_SOURCE)
 XLAT(V4L2_CTRL_CLASS_IMAGE_PROC),
 #define XLAT_VAL_7 ((unsigned) (V4L2_CTRL_CLASS_IMAGE_PROC))
 #define XLAT_STR_7 STRINGIFY(V4L2_CTRL_CLASS_IMAGE_PROC)
 XLAT(V4L2_CTRL_CLASS_DV),
 #define XLAT_VAL_8 ((unsigned) (V4L2_CTRL_CLASS_DV))
 #define XLAT_STR_8 STRINGIFY(V4L2_CTRL_CLASS_DV)
 XLAT(V4L2_CTRL_CLASS_FM_RX),
 #define XLAT_VAL_9 ((unsigned) (V4L2_CTRL_CLASS_FM_RX))
 #define XLAT_STR_9 STRINGIFY(V4L2_CTRL_CLASS_FM_RX)
 XLAT(V4L2_CTRL_CLASS_RF_TUNER),
 #define XLAT_VAL_10 ((unsigned) (V4L2_CTRL_CLASS_RF_TUNER))
 #define XLAT_STR_10 STRINGIFY(V4L2_CTRL_CLASS_RF_TUNER)
 XLAT(V4L2_CTRL_CLASS_DETECT),
 #define XLAT_VAL_11 ((unsigned) (V4L2_CTRL_CLASS_DETECT))
 #define XLAT_STR_11 STRINGIFY(V4L2_CTRL_CLASS_DETECT)
 XLAT(V4L2_CTRL_CLASS_CODEC_STATELESS),
 #define XLAT_VAL_12 ((unsigned) (V4L2_CTRL_CLASS_CODEC_STATELESS))
 #define XLAT_STR_12 STRINGIFY(V4L2_CTRL_CLASS_CODEC_STATELESS)
};
#  if !(defined HAVE_M32_MPERS || defined HAVE_MX32_MPERS)
static
#  endif
const struct xlat v4l2_control_classes[1] = { {
 .data = v4l2_control_classes_xdata,
 .size = ARRAY_SIZE(v4l2_control_classes_xdata),
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
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
