/*
 * Check decoding of oldfstat syscall.
 *
 * Copyright (c) 2015-2016 Dmitry V. Levin <ldv@strace.io>
 * Copyright (c) 2016 Eugene Syromyatnikov <evgsyr@gmail.com>
 * Copyright (c) 2016-2021 The strace developers.
 * All rights reserved.
 *
 * SPDX-License-Identifier: GPL-2.0-or-later
 */

#include "tests.h"
#include "scno.h"

#if defined __NR_oldfstat && HAVE_STRUCT___OLD_KERNEL_STAT

# define OLD_STAT 1
# define TEST_SYSCALL_NR __NR_oldfstat
# define TEST_SYSCALL_STR "oldfstat"
# define STRUCT_STAT struct __old_kernel_stat
# define STRUCT_STAT_STR "struct __old_kernel_stat"
# define STRUCT_STAT_IS_STAT64 0
# define SAMPLE_SIZE ((libc_off_t) (kernel_ulong_t) 23147718418U)
# include "fstatx.c"

#else

SKIP_MAIN_UNDEFINED("__NR_oldfstat && HAVE_STRUCT___OLD_KERNEL_STAT")

#endif
