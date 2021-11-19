/* Generated by ./src/xlat/gen.sh from ./src/xlat/f_owner_types.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"


#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat f_owner_types in mpers mode

# else

static const struct xlat_data f_owner_types_xdata[] = {
 [F_OWNER_TID] = XLAT(F_OWNER_TID),
 #define XLAT_VAL_0 ((unsigned) (F_OWNER_TID))
 #define XLAT_STR_0 STRINGIFY(F_OWNER_TID)
 [F_OWNER_PID] = XLAT(F_OWNER_PID),
 #define XLAT_VAL_1 ((unsigned) (F_OWNER_PID))
 #define XLAT_STR_1 STRINGIFY(F_OWNER_PID)
 [F_OWNER_PGRP] = XLAT(F_OWNER_PGRP),
 #define XLAT_VAL_2 ((unsigned) (F_OWNER_PGRP))
 #define XLAT_STR_2 STRINGIFY(F_OWNER_PGRP)
};
static
const struct xlat f_owner_types[1] = { {
 .data = f_owner_types_xdata,
 .size = ARRAY_SIZE(f_owner_types_xdata),
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
  ,
} };

#  undef XLAT_STR_0
#  undef XLAT_VAL_0
#  undef XLAT_STR_1
#  undef XLAT_VAL_1
#  undef XLAT_STR_2
#  undef XLAT_VAL_2
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
