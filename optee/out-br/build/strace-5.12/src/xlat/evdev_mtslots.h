/* Generated by ./src/xlat/gen.sh from ./src/xlat/evdev_mtslots.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"


#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat evdev_mtslots in mpers mode

# else

static const struct xlat_data evdev_mtslots_xdata[] = {
 XLAT(ABS_MT_SLOT),
 #define XLAT_VAL_0 ((unsigned) (ABS_MT_SLOT))
 #define XLAT_STR_0 STRINGIFY(ABS_MT_SLOT)
 XLAT(ABS_MT_TOUCH_MAJOR),
 #define XLAT_VAL_1 ((unsigned) (ABS_MT_TOUCH_MAJOR))
 #define XLAT_STR_1 STRINGIFY(ABS_MT_TOUCH_MAJOR)
 XLAT(ABS_MT_TOUCH_MINOR),
 #define XLAT_VAL_2 ((unsigned) (ABS_MT_TOUCH_MINOR))
 #define XLAT_STR_2 STRINGIFY(ABS_MT_TOUCH_MINOR)
 XLAT(ABS_MT_WIDTH_MAJOR),
 #define XLAT_VAL_3 ((unsigned) (ABS_MT_WIDTH_MAJOR))
 #define XLAT_STR_3 STRINGIFY(ABS_MT_WIDTH_MAJOR)
 XLAT(ABS_MT_WIDTH_MINOR),
 #define XLAT_VAL_4 ((unsigned) (ABS_MT_WIDTH_MINOR))
 #define XLAT_STR_4 STRINGIFY(ABS_MT_WIDTH_MINOR)
 XLAT(ABS_MT_ORIENTATION),
 #define XLAT_VAL_5 ((unsigned) (ABS_MT_ORIENTATION))
 #define XLAT_STR_5 STRINGIFY(ABS_MT_ORIENTATION)
 XLAT(ABS_MT_POSITION_X),
 #define XLAT_VAL_6 ((unsigned) (ABS_MT_POSITION_X))
 #define XLAT_STR_6 STRINGIFY(ABS_MT_POSITION_X)
 XLAT(ABS_MT_POSITION_Y),
 #define XLAT_VAL_7 ((unsigned) (ABS_MT_POSITION_Y))
 #define XLAT_STR_7 STRINGIFY(ABS_MT_POSITION_Y)
 XLAT(ABS_MT_TOOL_TYPE),
 #define XLAT_VAL_8 ((unsigned) (ABS_MT_TOOL_TYPE))
 #define XLAT_STR_8 STRINGIFY(ABS_MT_TOOL_TYPE)
 XLAT(ABS_MT_BLOB_ID),
 #define XLAT_VAL_9 ((unsigned) (ABS_MT_BLOB_ID))
 #define XLAT_STR_9 STRINGIFY(ABS_MT_BLOB_ID)
 XLAT(ABS_MT_TRACKING_ID),
 #define XLAT_VAL_10 ((unsigned) (ABS_MT_TRACKING_ID))
 #define XLAT_STR_10 STRINGIFY(ABS_MT_TRACKING_ID)
 XLAT(ABS_MT_PRESSURE),
 #define XLAT_VAL_11 ((unsigned) (ABS_MT_PRESSURE))
 #define XLAT_STR_11 STRINGIFY(ABS_MT_PRESSURE)
 XLAT(ABS_MT_DISTANCE),
 #define XLAT_VAL_12 ((unsigned) (ABS_MT_DISTANCE))
 #define XLAT_STR_12 STRINGIFY(ABS_MT_DISTANCE)
 XLAT(ABS_MT_TOOL_X),
 #define XLAT_VAL_13 ((unsigned) (ABS_MT_TOOL_X))
 #define XLAT_STR_13 STRINGIFY(ABS_MT_TOOL_X)
 XLAT(ABS_MT_TOOL_Y),
 #define XLAT_VAL_14 ((unsigned) (ABS_MT_TOOL_Y))
 #define XLAT_STR_14 STRINGIFY(ABS_MT_TOOL_Y)
};
static
const struct xlat evdev_mtslots[1] = { {
 .data = evdev_mtslots_xdata,
 .size = ARRAY_SIZE(evdev_mtslots_xdata),
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
#  ifdef XLAT_VAL_13
  | XLAT_VAL_13
#  endif
#  ifdef XLAT_VAL_14
  | XLAT_VAL_14
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
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */