/* Generated by ./src/xlat/gen.sh from ./src/xlat/nf_cttimeout_msg_types.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"


#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat nf_cttimeout_msg_types in mpers mode

# else

static const struct xlat_data nf_cttimeout_msg_types_xdata[] = {
 [IPCTNL_MSG_TIMEOUT_NEW] = XLAT(IPCTNL_MSG_TIMEOUT_NEW),
 #define XLAT_VAL_0 ((unsigned) (IPCTNL_MSG_TIMEOUT_NEW))
 #define XLAT_STR_0 STRINGIFY(IPCTNL_MSG_TIMEOUT_NEW)
 [IPCTNL_MSG_TIMEOUT_GET] = XLAT(IPCTNL_MSG_TIMEOUT_GET),
 #define XLAT_VAL_1 ((unsigned) (IPCTNL_MSG_TIMEOUT_GET))
 #define XLAT_STR_1 STRINGIFY(IPCTNL_MSG_TIMEOUT_GET)
 [IPCTNL_MSG_TIMEOUT_DELETE] = XLAT(IPCTNL_MSG_TIMEOUT_DELETE),
 #define XLAT_VAL_2 ((unsigned) (IPCTNL_MSG_TIMEOUT_DELETE))
 #define XLAT_STR_2 STRINGIFY(IPCTNL_MSG_TIMEOUT_DELETE)
 [IPCTNL_MSG_TIMEOUT_DEFAULT_SET] = XLAT(IPCTNL_MSG_TIMEOUT_DEFAULT_SET),
 #define XLAT_VAL_3 ((unsigned) (IPCTNL_MSG_TIMEOUT_DEFAULT_SET))
 #define XLAT_STR_3 STRINGIFY(IPCTNL_MSG_TIMEOUT_DEFAULT_SET)
 [IPCTNL_MSG_TIMEOUT_DEFAULT_GET] = XLAT(IPCTNL_MSG_TIMEOUT_DEFAULT_GET),
 #define XLAT_VAL_4 ((unsigned) (IPCTNL_MSG_TIMEOUT_DEFAULT_GET))
 #define XLAT_STR_4 STRINGIFY(IPCTNL_MSG_TIMEOUT_DEFAULT_GET)
};
static
const struct xlat nf_cttimeout_msg_types[1] = { {
 .data = nf_cttimeout_msg_types_xdata,
 .size = ARRAY_SIZE(nf_cttimeout_msg_types_xdata),
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
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
