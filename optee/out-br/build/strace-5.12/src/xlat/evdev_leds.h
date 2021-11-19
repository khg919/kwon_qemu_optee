/* Generated by ./src/xlat/gen.sh from ./src/xlat/evdev_leds.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"


#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat evdev_leds in mpers mode

# else

static const struct xlat_data evdev_leds_xdata[] = {
 [LED_NUML] = XLAT(LED_NUML),
 #define XLAT_VAL_0 ((unsigned) (LED_NUML))
 #define XLAT_STR_0 STRINGIFY(LED_NUML)
 [LED_CAPSL] = XLAT(LED_CAPSL),
 #define XLAT_VAL_1 ((unsigned) (LED_CAPSL))
 #define XLAT_STR_1 STRINGIFY(LED_CAPSL)
 [LED_SCROLLL] = XLAT(LED_SCROLLL),
 #define XLAT_VAL_2 ((unsigned) (LED_SCROLLL))
 #define XLAT_STR_2 STRINGIFY(LED_SCROLLL)
 [LED_COMPOSE] = XLAT(LED_COMPOSE),
 #define XLAT_VAL_3 ((unsigned) (LED_COMPOSE))
 #define XLAT_STR_3 STRINGIFY(LED_COMPOSE)
 [LED_KANA] = XLAT(LED_KANA),
 #define XLAT_VAL_4 ((unsigned) (LED_KANA))
 #define XLAT_STR_4 STRINGIFY(LED_KANA)
 [LED_SLEEP] = XLAT(LED_SLEEP),
 #define XLAT_VAL_5 ((unsigned) (LED_SLEEP))
 #define XLAT_STR_5 STRINGIFY(LED_SLEEP)
 [LED_SUSPEND] = XLAT(LED_SUSPEND),
 #define XLAT_VAL_6 ((unsigned) (LED_SUSPEND))
 #define XLAT_STR_6 STRINGIFY(LED_SUSPEND)
 [LED_MUTE] = XLAT(LED_MUTE),
 #define XLAT_VAL_7 ((unsigned) (LED_MUTE))
 #define XLAT_STR_7 STRINGIFY(LED_MUTE)
 [LED_MISC] = XLAT(LED_MISC),
 #define XLAT_VAL_8 ((unsigned) (LED_MISC))
 #define XLAT_STR_8 STRINGIFY(LED_MISC)
 [LED_MAIL] = XLAT(LED_MAIL),
 #define XLAT_VAL_9 ((unsigned) (LED_MAIL))
 #define XLAT_STR_9 STRINGIFY(LED_MAIL)
 [LED_CHARGING] = XLAT(LED_CHARGING),
 #define XLAT_VAL_10 ((unsigned) (LED_CHARGING))
 #define XLAT_STR_10 STRINGIFY(LED_CHARGING)
};
static
const struct xlat evdev_leds[1] = { {
 .data = evdev_leds_xdata,
 .size = ARRAY_SIZE(evdev_leds_xdata),
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
