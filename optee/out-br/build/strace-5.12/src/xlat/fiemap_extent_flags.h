/* Generated by ./src/xlat/gen.sh from ./src/xlat/fiemap_extent_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"


#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat fiemap_extent_flags in mpers mode

# else

static const struct xlat_data fiemap_extent_flags_xdata[] = {
 XLAT(FIEMAP_EXTENT_LAST),
 #define XLAT_VAL_0 ((unsigned) (FIEMAP_EXTENT_LAST))
 #define XLAT_STR_0 STRINGIFY(FIEMAP_EXTENT_LAST)
 XLAT(FIEMAP_EXTENT_UNKNOWN),
 #define XLAT_VAL_1 ((unsigned) (FIEMAP_EXTENT_UNKNOWN))
 #define XLAT_STR_1 STRINGIFY(FIEMAP_EXTENT_UNKNOWN)
 XLAT(FIEMAP_EXTENT_DELALLOC),
 #define XLAT_VAL_2 ((unsigned) (FIEMAP_EXTENT_DELALLOC))
 #define XLAT_STR_2 STRINGIFY(FIEMAP_EXTENT_DELALLOC)
 XLAT(FIEMAP_EXTENT_ENCODED),
 #define XLAT_VAL_3 ((unsigned) (FIEMAP_EXTENT_ENCODED))
 #define XLAT_STR_3 STRINGIFY(FIEMAP_EXTENT_ENCODED)
 XLAT(FIEMAP_EXTENT_DATA_ENCRYPTED),
 #define XLAT_VAL_4 ((unsigned) (FIEMAP_EXTENT_DATA_ENCRYPTED))
 #define XLAT_STR_4 STRINGIFY(FIEMAP_EXTENT_DATA_ENCRYPTED)
 XLAT(FIEMAP_EXTENT_NOT_ALIGNED),
 #define XLAT_VAL_5 ((unsigned) (FIEMAP_EXTENT_NOT_ALIGNED))
 #define XLAT_STR_5 STRINGIFY(FIEMAP_EXTENT_NOT_ALIGNED)
 XLAT(FIEMAP_EXTENT_DATA_INLINE),
 #define XLAT_VAL_6 ((unsigned) (FIEMAP_EXTENT_DATA_INLINE))
 #define XLAT_STR_6 STRINGIFY(FIEMAP_EXTENT_DATA_INLINE)
 XLAT(FIEMAP_EXTENT_DATA_TAIL),
 #define XLAT_VAL_7 ((unsigned) (FIEMAP_EXTENT_DATA_TAIL))
 #define XLAT_STR_7 STRINGIFY(FIEMAP_EXTENT_DATA_TAIL)
 XLAT(FIEMAP_EXTENT_UNWRITTEN),
 #define XLAT_VAL_8 ((unsigned) (FIEMAP_EXTENT_UNWRITTEN))
 #define XLAT_STR_8 STRINGIFY(FIEMAP_EXTENT_UNWRITTEN)
 XLAT(FIEMAP_EXTENT_MERGED),
 #define XLAT_VAL_9 ((unsigned) (FIEMAP_EXTENT_MERGED))
 #define XLAT_STR_9 STRINGIFY(FIEMAP_EXTENT_MERGED)
 XLAT(FIEMAP_EXTENT_SHARED),
 #define XLAT_VAL_10 ((unsigned) (FIEMAP_EXTENT_SHARED))
 #define XLAT_STR_10 STRINGIFY(FIEMAP_EXTENT_SHARED)
};
static
const struct xlat fiemap_extent_flags[1] = { {
 .data = fiemap_extent_flags_xdata,
 .size = ARRAY_SIZE(fiemap_extent_flags_xdata),
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