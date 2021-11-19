/* Generated by ./src/xlat/gen.sh from ./src/xlat/inotify_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(IN_ACCESS) || (defined(HAVE_DECL_IN_ACCESS) && HAVE_DECL_IN_ACCESS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IN_ACCESS) == (0x00000001), "IN_ACCESS != 0x00000001");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IN_ACCESS 0x00000001
#endif
#if defined(IN_MODIFY) || (defined(HAVE_DECL_IN_MODIFY) && HAVE_DECL_IN_MODIFY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IN_MODIFY) == (0x00000002), "IN_MODIFY != 0x00000002");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IN_MODIFY 0x00000002
#endif
#if defined(IN_ATTRIB) || (defined(HAVE_DECL_IN_ATTRIB) && HAVE_DECL_IN_ATTRIB)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IN_ATTRIB) == (0x00000004), "IN_ATTRIB != 0x00000004");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IN_ATTRIB 0x00000004
#endif
#if defined(IN_CLOSE_WRITE) || (defined(HAVE_DECL_IN_CLOSE_WRITE) && HAVE_DECL_IN_CLOSE_WRITE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IN_CLOSE_WRITE) == (0x00000008), "IN_CLOSE_WRITE != 0x00000008");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IN_CLOSE_WRITE 0x00000008
#endif
#if defined(IN_CLOSE_NOWRITE) || (defined(HAVE_DECL_IN_CLOSE_NOWRITE) && HAVE_DECL_IN_CLOSE_NOWRITE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IN_CLOSE_NOWRITE) == (0x00000010), "IN_CLOSE_NOWRITE != 0x00000010");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IN_CLOSE_NOWRITE 0x00000010
#endif
#if defined(IN_OPEN) || (defined(HAVE_DECL_IN_OPEN) && HAVE_DECL_IN_OPEN)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IN_OPEN) == (0x00000020), "IN_OPEN != 0x00000020");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IN_OPEN 0x00000020
#endif
#if defined(IN_MOVED_FROM) || (defined(HAVE_DECL_IN_MOVED_FROM) && HAVE_DECL_IN_MOVED_FROM)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IN_MOVED_FROM) == (0x00000040), "IN_MOVED_FROM != 0x00000040");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IN_MOVED_FROM 0x00000040
#endif
#if defined(IN_MOVED_TO) || (defined(HAVE_DECL_IN_MOVED_TO) && HAVE_DECL_IN_MOVED_TO)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IN_MOVED_TO) == (0x00000080), "IN_MOVED_TO != 0x00000080");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IN_MOVED_TO 0x00000080
#endif
#if defined(IN_CREATE) || (defined(HAVE_DECL_IN_CREATE) && HAVE_DECL_IN_CREATE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IN_CREATE) == (0x00000100), "IN_CREATE != 0x00000100");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IN_CREATE 0x00000100
#endif
#if defined(IN_DELETE) || (defined(HAVE_DECL_IN_DELETE) && HAVE_DECL_IN_DELETE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IN_DELETE) == (0x00000200), "IN_DELETE != 0x00000200");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IN_DELETE 0x00000200
#endif
#if defined(IN_DELETE_SELF) || (defined(HAVE_DECL_IN_DELETE_SELF) && HAVE_DECL_IN_DELETE_SELF)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IN_DELETE_SELF) == (0x00000400), "IN_DELETE_SELF != 0x00000400");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IN_DELETE_SELF 0x00000400
#endif
#if defined(IN_MOVE_SELF) || (defined(HAVE_DECL_IN_MOVE_SELF) && HAVE_DECL_IN_MOVE_SELF)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IN_MOVE_SELF) == (0x00000800), "IN_MOVE_SELF != 0x00000800");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IN_MOVE_SELF 0x00000800
#endif
#if defined(IN_UNMOUNT) || (defined(HAVE_DECL_IN_UNMOUNT) && HAVE_DECL_IN_UNMOUNT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IN_UNMOUNT) == (0x00002000), "IN_UNMOUNT != 0x00002000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IN_UNMOUNT 0x00002000
#endif
#if defined(IN_Q_OVERFLOW) || (defined(HAVE_DECL_IN_Q_OVERFLOW) && HAVE_DECL_IN_Q_OVERFLOW)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IN_Q_OVERFLOW) == (0x00004000), "IN_Q_OVERFLOW != 0x00004000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IN_Q_OVERFLOW 0x00004000
#endif
#if defined(IN_IGNORED) || (defined(HAVE_DECL_IN_IGNORED) && HAVE_DECL_IN_IGNORED)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IN_IGNORED) == (0x00008000), "IN_IGNORED != 0x00008000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IN_IGNORED 0x00008000
#endif
#if defined(IN_ONLYDIR) || (defined(HAVE_DECL_IN_ONLYDIR) && HAVE_DECL_IN_ONLYDIR)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IN_ONLYDIR) == (0x01000000), "IN_ONLYDIR != 0x01000000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IN_ONLYDIR 0x01000000
#endif
#if defined(IN_DONT_FOLLOW) || (defined(HAVE_DECL_IN_DONT_FOLLOW) && HAVE_DECL_IN_DONT_FOLLOW)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IN_DONT_FOLLOW) == (0x02000000), "IN_DONT_FOLLOW != 0x02000000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IN_DONT_FOLLOW 0x02000000
#endif
#if defined(IN_EXCL_UNLINK) || (defined(HAVE_DECL_IN_EXCL_UNLINK) && HAVE_DECL_IN_EXCL_UNLINK)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IN_EXCL_UNLINK) == (0x04000000), "IN_EXCL_UNLINK != 0x04000000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IN_EXCL_UNLINK 0x04000000
#endif
#if defined(IN_MASK_CREATE) || (defined(HAVE_DECL_IN_MASK_CREATE) && HAVE_DECL_IN_MASK_CREATE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IN_MASK_CREATE) == (0x10000000), "IN_MASK_CREATE != 0x10000000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IN_MASK_CREATE 0x10000000
#endif
#if defined(IN_MASK_ADD) || (defined(HAVE_DECL_IN_MASK_ADD) && HAVE_DECL_IN_MASK_ADD)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IN_MASK_ADD) == (0x20000000), "IN_MASK_ADD != 0x20000000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IN_MASK_ADD 0x20000000
#endif
#if defined(IN_ISDIR) || (defined(HAVE_DECL_IN_ISDIR) && HAVE_DECL_IN_ISDIR)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IN_ISDIR) == (0x40000000), "IN_ISDIR != 0x40000000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IN_ISDIR 0x40000000
#endif
#if defined(IN_ONESHOT) || (defined(HAVE_DECL_IN_ONESHOT) && HAVE_DECL_IN_ONESHOT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IN_ONESHOT) == (0x80000000), "IN_ONESHOT != 0x80000000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IN_ONESHOT 0x80000000
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat inotify_flags in mpers mode

# else

static const struct xlat_data inotify_flags_xdata[] = {
 XLAT(IN_ACCESS),
 #define XLAT_VAL_0 ((unsigned) (IN_ACCESS))
 #define XLAT_STR_0 STRINGIFY(IN_ACCESS)
 XLAT(IN_MODIFY),
 #define XLAT_VAL_1 ((unsigned) (IN_MODIFY))
 #define XLAT_STR_1 STRINGIFY(IN_MODIFY)
 XLAT(IN_ATTRIB),
 #define XLAT_VAL_2 ((unsigned) (IN_ATTRIB))
 #define XLAT_STR_2 STRINGIFY(IN_ATTRIB)
 XLAT(IN_CLOSE_WRITE),
 #define XLAT_VAL_3 ((unsigned) (IN_CLOSE_WRITE))
 #define XLAT_STR_3 STRINGIFY(IN_CLOSE_WRITE)
 XLAT(IN_CLOSE_NOWRITE),
 #define XLAT_VAL_4 ((unsigned) (IN_CLOSE_NOWRITE))
 #define XLAT_STR_4 STRINGIFY(IN_CLOSE_NOWRITE)
 XLAT(IN_OPEN),
 #define XLAT_VAL_5 ((unsigned) (IN_OPEN))
 #define XLAT_STR_5 STRINGIFY(IN_OPEN)
 XLAT(IN_MOVED_FROM),
 #define XLAT_VAL_6 ((unsigned) (IN_MOVED_FROM))
 #define XLAT_STR_6 STRINGIFY(IN_MOVED_FROM)
 XLAT(IN_MOVED_TO),
 #define XLAT_VAL_7 ((unsigned) (IN_MOVED_TO))
 #define XLAT_STR_7 STRINGIFY(IN_MOVED_TO)
 XLAT(IN_CREATE),
 #define XLAT_VAL_8 ((unsigned) (IN_CREATE))
 #define XLAT_STR_8 STRINGIFY(IN_CREATE)
 XLAT(IN_DELETE),
 #define XLAT_VAL_9 ((unsigned) (IN_DELETE))
 #define XLAT_STR_9 STRINGIFY(IN_DELETE)
 XLAT(IN_DELETE_SELF),
 #define XLAT_VAL_10 ((unsigned) (IN_DELETE_SELF))
 #define XLAT_STR_10 STRINGIFY(IN_DELETE_SELF)
 XLAT(IN_MOVE_SELF),
 #define XLAT_VAL_11 ((unsigned) (IN_MOVE_SELF))
 #define XLAT_STR_11 STRINGIFY(IN_MOVE_SELF)
 XLAT(IN_UNMOUNT),
 #define XLAT_VAL_12 ((unsigned) (IN_UNMOUNT))
 #define XLAT_STR_12 STRINGIFY(IN_UNMOUNT)
 XLAT(IN_Q_OVERFLOW),
 #define XLAT_VAL_13 ((unsigned) (IN_Q_OVERFLOW))
 #define XLAT_STR_13 STRINGIFY(IN_Q_OVERFLOW)
 XLAT(IN_IGNORED),
 #define XLAT_VAL_14 ((unsigned) (IN_IGNORED))
 #define XLAT_STR_14 STRINGIFY(IN_IGNORED)
 XLAT(IN_ONLYDIR),
 #define XLAT_VAL_15 ((unsigned) (IN_ONLYDIR))
 #define XLAT_STR_15 STRINGIFY(IN_ONLYDIR)
 XLAT(IN_DONT_FOLLOW),
 #define XLAT_VAL_16 ((unsigned) (IN_DONT_FOLLOW))
 #define XLAT_STR_16 STRINGIFY(IN_DONT_FOLLOW)
 XLAT(IN_EXCL_UNLINK),
 #define XLAT_VAL_17 ((unsigned) (IN_EXCL_UNLINK))
 #define XLAT_STR_17 STRINGIFY(IN_EXCL_UNLINK)
 XLAT(IN_MASK_CREATE),
 #define XLAT_VAL_18 ((unsigned) (IN_MASK_CREATE))
 #define XLAT_STR_18 STRINGIFY(IN_MASK_CREATE)
 XLAT(IN_MASK_ADD),
 #define XLAT_VAL_19 ((unsigned) (IN_MASK_ADD))
 #define XLAT_STR_19 STRINGIFY(IN_MASK_ADD)
 XLAT(IN_ISDIR),
 #define XLAT_VAL_20 ((unsigned) (IN_ISDIR))
 #define XLAT_STR_20 STRINGIFY(IN_ISDIR)
 XLAT(IN_ONESHOT),
 #define XLAT_VAL_21 ((unsigned) (IN_ONESHOT))
 #define XLAT_STR_21 STRINGIFY(IN_ONESHOT)
};
static
const struct xlat inotify_flags[1] = { {
 .data = inotify_flags_xdata,
 .size = ARRAY_SIZE(inotify_flags_xdata),
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
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
