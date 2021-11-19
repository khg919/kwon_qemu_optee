/*
 * This file is part of sched_xetaffinity strace test.
 *
 * Copyright (c) 2016-2018 Dmitry V. Levin <ldv@strace.io>
 * Copyright (c) 2016-2020 The strace developers.
 * All rights reserved.
 *
 * SPDX-License-Identifier: GPL-2.0-or-later
 */

#include "tests.h"
#include "scno.h"
#include "pidns.h"
#include <sched.h>

#if defined __NR_sched_getaffinity && defined __NR_sched_setaffinity \
 && defined CPU_ISSET_S && defined CPU_ZERO_S && defined CPU_SET_S

# include <assert.h>
# include <errno.h>
# include <stdio.h>
# include <unistd.h>

static const char *errstr;

static int
getaffinity(unsigned long pid, unsigned long size, void *set)
{
	int rc = syscall(__NR_sched_getaffinity, pid, size, set);
	errstr = sprintrc(rc);
	return rc;
}

static int
setaffinity(unsigned long pid, unsigned long size, void *set)
{
	int rc = syscall(__NR_sched_setaffinity, pid, size, set);
	errstr = sprintrc(rc);
	return rc;
}

int
main(void)
{
	PIDNS_TEST_INIT;

	unsigned int cpuset_size = 1;
	const pid_t pid = getpid();
	const char *pid_str = pidns_pid2str(PT_TGID);

	while (cpuset_size) {
		assert(getaffinity(pid, cpuset_size, NULL) == -1);
		if (EFAULT == errno)
			break;
		if (EINVAL != errno)
			perror_msg_and_skip("sched_getaffinity");
		pidns_print_leader();
		printf("sched_getaffinity(%d%s, %u, NULL) = %s\n",
		       pid, pid_str, cpuset_size, errstr);
		cpuset_size <<= 1;
	}
	assert(cpuset_size);
	pidns_print_leader();
	printf("sched_getaffinity(%d%s, %u, NULL) = %s\n",
	       pid, pid_str, cpuset_size, errstr);

	cpu_set_t *cpuset = tail_alloc(cpuset_size);
	getaffinity(pid, cpuset_size, cpuset + 1);
	pidns_print_leader();
	printf("sched_getaffinity(%d%s, %u, %p) = %s\n",
	       pid, pid_str, cpuset_size, cpuset + 1, errstr);

	int ret_size = getaffinity(pid, cpuset_size, cpuset);
	if (ret_size < 0)
		perror_msg_and_fail("sched_getaffinity(%d, %u, %p) = %s\n",
				    pid, (unsigned) cpuset_size, cpuset, errstr);
	assert(ret_size <= (int) cpuset_size);

	pidns_print_leader();
	printf("sched_getaffinity(%d%s, %u, [", pid, pid_str, cpuset_size);
	const char *sep;
	unsigned int i, cpu;
	for (i = 0, cpu = 0, sep = ""; i < (unsigned) ret_size * 8; ++i) {
		if (CPU_ISSET_S(i, (unsigned) ret_size, cpuset)) {
			printf("%s%u", sep, i);
			sep = ", ";
			cpu = i;
		}
	}
	printf("]) = %s\n", errstr);

	CPU_ZERO_S(cpuset_size, cpuset);
	CPU_SET_S(cpu, cpuset_size, cpuset);
	if (setaffinity(pid, cpuset_size, cpuset))
		perror_msg_and_skip("sched_setaffinity");
	pidns_print_leader();
	printf("sched_setaffinity(%d%s, %u, [%u]) = 0\n",
	       pid, pid_str, cpuset_size, cpu);

	const unsigned int big_size = cpuset_size < 128 ? 128 : cpuset_size * 2;
	cpuset = tail_alloc(big_size);
	ret_size = getaffinity(pid, big_size, cpuset);
	if (ret_size < 0)
		perror_msg_and_fail("sched_getaffinity(%d, %u, %p) = %s\n",
				    pid, big_size, cpuset, errstr);
	assert(ret_size <= (int) big_size);
	pidns_print_leader();
	printf("sched_getaffinity(%d%s, %u, [", pid, pid_str, big_size);
	for (i = 0, sep = ""; i < (unsigned) ret_size * 8; ++i) {
		if (CPU_ISSET_S(i, (unsigned) ret_size, cpuset)) {
			printf("%s%u", sep, i);
			sep = ", ";
		}
	}
	printf("]) = %s\n", errstr);

	pidns_print_leader();
	puts("+++ exited with 0 +++");
	return 0;
}

#else

SKIP_MAIN_UNDEFINED("__NR_sched_getaffinity && __NR_sched_setaffinity"
		    " && CPU_ISSET_S && CPU_ZERO_S && CPU_SET_S")

#endif
