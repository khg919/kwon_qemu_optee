/* Generated by ./src/xlat/gen.sh from ./src/xlat/v4l2_control_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"


#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

extern const struct xlat v4l2_control_flags[];

# else

static const struct xlat_data v4l2_control_flags_xdata[] = {
 XLAT(V4L2_CTRL_FLAG_DISABLED),
 #define XLAT_VAL_0 ((unsigned) (V4L2_CTRL_FLAG_DISABLED))
 #define XLAT_STR_0 STRINGIFY(V4L2_CTRL_FLAG_DISABLED)
 XLAT(V4L2_CTRL_FLAG_GRABBED),
 #define XLAT_VAL_1 ((unsigned) (V4L2_CTRL_FLAG_GRABBED))
 #define XLAT_STR_1 STRINGIFY(V4L2_CTRL_FLAG_GRABBED)
 XLAT(V4L2_CTRL_FLAG_READ_ONLY),
 #define XLAT_VAL_2 ((unsigned) (V4L2_CTRL_FLAG_READ_ONLY))
 #define XLAT_STR_2 STRINGIFY(V4L2_CTRL_FLAG_READ_ONLY)
 XLAT(V4L2_CTRL_FLAG_UPDATE),
 #define XLAT_VAL_3 ((unsigned) (V4L2_CTRL_FLAG_UPDATE))
 #define XLAT_STR_3 STRINGIFY(V4L2_CTRL_FLAG_UPDATE)
 XLAT(V4L2_CTRL_FLAG_INACTIVE),
 #define XLAT_VAL_4 ((unsigned) (V4L2_CTRL_FLAG_INACTIVE))
 #define XLAT_STR_4 STRINGIFY(V4L2_CTRL_FLAG_INACTIVE)
 XLAT(V4L2_CTRL_FLAG_SLIDER),
 #define XLAT_VAL_5 ((unsigned) (V4L2_CTRL_FLAG_SLIDER))
 #define XLAT_STR_5 STRINGIFY(V4L2_CTRL_FLAG_SLIDER)
 XLAT(V4L2_CTRL_FLAG_WRITE_ONLY),
 #define XLAT_VAL_6 ((unsigned) (V4L2_CTRL_FLAG_WRITE_ONLY))
 #define XLAT_STR_6 STRINGIFY(V4L2_CTRL_FLAG_WRITE_ONLY)
 XLAT(V4L2_CTRL_FLAG_VOLATILE),
 #define XLAT_VAL_7 ((unsigned) (V4L2_CTRL_FLAG_VOLATILE))
 #define XLAT_STR_7 STRINGIFY(V4L2_CTRL_FLAG_VOLATILE)
 XLAT(V4L2_CTRL_FLAG_HAS_PAYLOAD),
 #define XLAT_VAL_8 ((unsigned) (V4L2_CTRL_FLAG_HAS_PAYLOAD))
 #define XLAT_STR_8 STRINGIFY(V4L2_CTRL_FLAG_HAS_PAYLOAD)
 XLAT(V4L2_CTRL_FLAG_EXECUTE_ON_WRITE),
 #define XLAT_VAL_9 ((unsigned) (V4L2_CTRL_FLAG_EXECUTE_ON_WRITE))
 #define XLAT_STR_9 STRINGIFY(V4L2_CTRL_FLAG_EXECUTE_ON_WRITE)
 XLAT(V4L2_CTRL_FLAG_MODIFY_LAYOUT),
 #define XLAT_VAL_10 ((unsigned) (V4L2_CTRL_FLAG_MODIFY_LAYOUT))
 #define XLAT_STR_10 STRINGIFY(V4L2_CTRL_FLAG_MODIFY_LAYOUT)
};
#  if !(defined HAVE_M32_MPERS || defined HAVE_MX32_MPERS)
static
#  endif
const struct xlat v4l2_control_flags[1] = { {
 .data = v4l2_control_flags_xdata,
 .size = ARRAY_SIZE(v4l2_control_flags_xdata),
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
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
