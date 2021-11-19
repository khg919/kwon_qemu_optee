/* Generated by ./src/xlat/gen.sh from ./src/xlat/v4l2_device_capabilities_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"


#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

extern const struct xlat v4l2_device_capabilities_flags[];

# else

static const struct xlat_data v4l2_device_capabilities_flags_xdata[] = {
 XLAT(V4L2_CAP_VIDEO_CAPTURE),
 #define XLAT_VAL_0 ((unsigned) (V4L2_CAP_VIDEO_CAPTURE))
 #define XLAT_STR_0 STRINGIFY(V4L2_CAP_VIDEO_CAPTURE)
 XLAT(V4L2_CAP_VIDEO_OUTPUT),
 #define XLAT_VAL_1 ((unsigned) (V4L2_CAP_VIDEO_OUTPUT))
 #define XLAT_STR_1 STRINGIFY(V4L2_CAP_VIDEO_OUTPUT)
 XLAT(V4L2_CAP_VIDEO_OVERLAY),
 #define XLAT_VAL_2 ((unsigned) (V4L2_CAP_VIDEO_OVERLAY))
 #define XLAT_STR_2 STRINGIFY(V4L2_CAP_VIDEO_OVERLAY)
 XLAT(V4L2_CAP_VBI_CAPTURE),
 #define XLAT_VAL_3 ((unsigned) (V4L2_CAP_VBI_CAPTURE))
 #define XLAT_STR_3 STRINGIFY(V4L2_CAP_VBI_CAPTURE)
 XLAT(V4L2_CAP_VBI_OUTPUT),
 #define XLAT_VAL_4 ((unsigned) (V4L2_CAP_VBI_OUTPUT))
 #define XLAT_STR_4 STRINGIFY(V4L2_CAP_VBI_OUTPUT)
 XLAT(V4L2_CAP_SLICED_VBI_CAPTURE),
 #define XLAT_VAL_5 ((unsigned) (V4L2_CAP_SLICED_VBI_CAPTURE))
 #define XLAT_STR_5 STRINGIFY(V4L2_CAP_SLICED_VBI_CAPTURE)
 XLAT(V4L2_CAP_SLICED_VBI_OUTPUT),
 #define XLAT_VAL_6 ((unsigned) (V4L2_CAP_SLICED_VBI_OUTPUT))
 #define XLAT_STR_6 STRINGIFY(V4L2_CAP_SLICED_VBI_OUTPUT)
 XLAT(V4L2_CAP_RDS_CAPTURE),
 #define XLAT_VAL_7 ((unsigned) (V4L2_CAP_RDS_CAPTURE))
 #define XLAT_STR_7 STRINGIFY(V4L2_CAP_RDS_CAPTURE)
 XLAT(V4L2_CAP_VIDEO_OUTPUT_OVERLAY),
 #define XLAT_VAL_8 ((unsigned) (V4L2_CAP_VIDEO_OUTPUT_OVERLAY))
 #define XLAT_STR_8 STRINGIFY(V4L2_CAP_VIDEO_OUTPUT_OVERLAY)
 XLAT(V4L2_CAP_HW_FREQ_SEEK),
 #define XLAT_VAL_9 ((unsigned) (V4L2_CAP_HW_FREQ_SEEK))
 #define XLAT_STR_9 STRINGIFY(V4L2_CAP_HW_FREQ_SEEK)
 XLAT(V4L2_CAP_RDS_OUTPUT),
 #define XLAT_VAL_10 ((unsigned) (V4L2_CAP_RDS_OUTPUT))
 #define XLAT_STR_10 STRINGIFY(V4L2_CAP_RDS_OUTPUT)
 XLAT(V4L2_CAP_VIDEO_CAPTURE_MPLANE),
 #define XLAT_VAL_11 ((unsigned) (V4L2_CAP_VIDEO_CAPTURE_MPLANE))
 #define XLAT_STR_11 STRINGIFY(V4L2_CAP_VIDEO_CAPTURE_MPLANE)
 XLAT(V4L2_CAP_VIDEO_OUTPUT_MPLANE),
 #define XLAT_VAL_12 ((unsigned) (V4L2_CAP_VIDEO_OUTPUT_MPLANE))
 #define XLAT_STR_12 STRINGIFY(V4L2_CAP_VIDEO_OUTPUT_MPLANE)
 XLAT(V4L2_CAP_VIDEO_M2M_MPLANE),
 #define XLAT_VAL_13 ((unsigned) (V4L2_CAP_VIDEO_M2M_MPLANE))
 #define XLAT_STR_13 STRINGIFY(V4L2_CAP_VIDEO_M2M_MPLANE)
 XLAT(V4L2_CAP_VIDEO_M2M),
 #define XLAT_VAL_14 ((unsigned) (V4L2_CAP_VIDEO_M2M))
 #define XLAT_STR_14 STRINGIFY(V4L2_CAP_VIDEO_M2M)
 XLAT(V4L2_CAP_TUNER),
 #define XLAT_VAL_15 ((unsigned) (V4L2_CAP_TUNER))
 #define XLAT_STR_15 STRINGIFY(V4L2_CAP_TUNER)
 XLAT(V4L2_CAP_AUDIO),
 #define XLAT_VAL_16 ((unsigned) (V4L2_CAP_AUDIO))
 #define XLAT_STR_16 STRINGIFY(V4L2_CAP_AUDIO)
 XLAT(V4L2_CAP_RADIO),
 #define XLAT_VAL_17 ((unsigned) (V4L2_CAP_RADIO))
 #define XLAT_STR_17 STRINGIFY(V4L2_CAP_RADIO)
 XLAT(V4L2_CAP_MODULATOR),
 #define XLAT_VAL_18 ((unsigned) (V4L2_CAP_MODULATOR))
 #define XLAT_STR_18 STRINGIFY(V4L2_CAP_MODULATOR)
 XLAT(V4L2_CAP_SDR_CAPTURE),
 #define XLAT_VAL_19 ((unsigned) (V4L2_CAP_SDR_CAPTURE))
 #define XLAT_STR_19 STRINGIFY(V4L2_CAP_SDR_CAPTURE)
 XLAT(V4L2_CAP_EXT_PIX_FORMAT),
 #define XLAT_VAL_20 ((unsigned) (V4L2_CAP_EXT_PIX_FORMAT))
 #define XLAT_STR_20 STRINGIFY(V4L2_CAP_EXT_PIX_FORMAT)
 XLAT(V4L2_CAP_SDR_OUTPUT),
 #define XLAT_VAL_21 ((unsigned) (V4L2_CAP_SDR_OUTPUT))
 #define XLAT_STR_21 STRINGIFY(V4L2_CAP_SDR_OUTPUT)
 XLAT(V4L2_CAP_META_CAPTURE),
 #define XLAT_VAL_22 ((unsigned) (V4L2_CAP_META_CAPTURE))
 #define XLAT_STR_22 STRINGIFY(V4L2_CAP_META_CAPTURE)
 XLAT(V4L2_CAP_READWRITE),
 #define XLAT_VAL_23 ((unsigned) (V4L2_CAP_READWRITE))
 #define XLAT_STR_23 STRINGIFY(V4L2_CAP_READWRITE)
 XLAT(V4L2_CAP_ASYNCIO),
 #define XLAT_VAL_24 ((unsigned) (V4L2_CAP_ASYNCIO))
 #define XLAT_STR_24 STRINGIFY(V4L2_CAP_ASYNCIO)
 XLAT(V4L2_CAP_STREAMING),
 #define XLAT_VAL_25 ((unsigned) (V4L2_CAP_STREAMING))
 #define XLAT_STR_25 STRINGIFY(V4L2_CAP_STREAMING)
 XLAT(V4L2_CAP_META_OUTPUT),
 #define XLAT_VAL_26 ((unsigned) (V4L2_CAP_META_OUTPUT))
 #define XLAT_STR_26 STRINGIFY(V4L2_CAP_META_OUTPUT)
 XLAT(V4L2_CAP_TOUCH),
 #define XLAT_VAL_27 ((unsigned) (V4L2_CAP_TOUCH))
 #define XLAT_STR_27 STRINGIFY(V4L2_CAP_TOUCH)
 XLAT(V4L2_CAP_DEVICE_CAPS),
 #define XLAT_VAL_28 ((unsigned) (V4L2_CAP_DEVICE_CAPS))
 #define XLAT_STR_28 STRINGIFY(V4L2_CAP_DEVICE_CAPS)
};
#  if !(defined HAVE_M32_MPERS || defined HAVE_MX32_MPERS)
static
#  endif
const struct xlat v4l2_device_capabilities_flags[1] = { {
 .data = v4l2_device_capabilities_flags_xdata,
 .size = ARRAY_SIZE(v4l2_device_capabilities_flags_xdata),
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
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
