/* Generated by ./src/xlat/gen.sh from ./src/xlat/btrfs_features_compat.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"


#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

extern const struct xlat btrfs_features_compat[];

# else

static const struct xlat_data btrfs_features_compat_xdata[] = {
};
#  if !(defined HAVE_M32_MPERS || defined HAVE_MX32_MPERS)
static
#  endif
const struct xlat btrfs_features_compat[1] = { {
 .data = btrfs_features_compat_xdata,
 .size = ARRAY_SIZE(btrfs_features_compat_xdata),
 .type = XT_NORMAL,
 .flags_mask = 0
  ,
 .flags_strsz = 0
  ,
} };

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
