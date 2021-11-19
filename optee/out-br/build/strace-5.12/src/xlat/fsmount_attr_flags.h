/* Generated by ./src/xlat/gen.sh from ./src/xlat/fsmount_attr_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"


#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat fsmount_attr_flags in mpers mode

# else

static const struct xlat_data fsmount_attr_flags_xdata[] = {
 XLAT(MOUNT_ATTR_RDONLY),
 #define XLAT_VAL_0 ((unsigned) (MOUNT_ATTR_RDONLY))
 #define XLAT_STR_0 STRINGIFY(MOUNT_ATTR_RDONLY)
 XLAT(MOUNT_ATTR_NOSUID),
 #define XLAT_VAL_1 ((unsigned) (MOUNT_ATTR_NOSUID))
 #define XLAT_STR_1 STRINGIFY(MOUNT_ATTR_NOSUID)
 XLAT(MOUNT_ATTR_NODEV),
 #define XLAT_VAL_2 ((unsigned) (MOUNT_ATTR_NODEV))
 #define XLAT_STR_2 STRINGIFY(MOUNT_ATTR_NODEV)
 XLAT(MOUNT_ATTR_NOEXEC),
 #define XLAT_VAL_3 ((unsigned) (MOUNT_ATTR_NOEXEC))
 #define XLAT_STR_3 STRINGIFY(MOUNT_ATTR_NOEXEC)
 XLAT(MOUNT_ATTR_NOATIME),
 #define XLAT_VAL_4 ((unsigned) (MOUNT_ATTR_NOATIME))
 #define XLAT_STR_4 STRINGIFY(MOUNT_ATTR_NOATIME)
 XLAT(MOUNT_ATTR_STRICTATIME),
 #define XLAT_VAL_5 ((unsigned) (MOUNT_ATTR_STRICTATIME))
 #define XLAT_STR_5 STRINGIFY(MOUNT_ATTR_STRICTATIME)
 XLAT(MOUNT_ATTR_NODIRATIME),
 #define XLAT_VAL_6 ((unsigned) (MOUNT_ATTR_NODIRATIME))
 #define XLAT_STR_6 STRINGIFY(MOUNT_ATTR_NODIRATIME)
};
static
const struct xlat fsmount_attr_flags[1] = { {
 .data = fsmount_attr_flags_xdata,
 .size = ARRAY_SIZE(fsmount_attr_flags_xdata),
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
