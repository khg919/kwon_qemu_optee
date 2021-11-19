enum {
SEN_printargs = 0,
SEN_ARCH_mmap,
SEN_accept,
SEN_accept4,
SEN_access,
SEN_acct,
SEN_add_key,
SEN_adjtimex32,
SEN_adjtimex64,
SEN_afs_syscall,
SEN_alarm,
SEN_arch_prctl,
SEN_bdflush,
SEN_bind,
SEN_bpf,
SEN_break,
SEN_brk,
SEN_cacheflush,
SEN_capget,
SEN_capset,
SEN_chdir,
SEN_chmod,
SEN_chown,
SEN_chown16,
SEN_chroot,
SEN_clock_adjtime32,
SEN_clock_adjtime64,
SEN_clock_getres_time32,
SEN_clock_getres_time64,
SEN_clock_gettime32,
SEN_clock_gettime64,
SEN_clock_nanosleep_time32,
SEN_clock_nanosleep_time64,
SEN_clock_settime32,
SEN_clock_settime64,
SEN_clock_sparc64_adjtime,
SEN_clone,
SEN_clone3,
SEN_close,
SEN_close_range,
SEN_connect,
SEN_copy_file_range,
SEN_creat,
SEN_create_module,
SEN_delete_module,
SEN_dup,
SEN_dup2,
SEN_dup3,
SEN_epoll_create,
SEN_epoll_create1,
SEN_epoll_ctl,
SEN_epoll_pwait,
SEN_epoll_pwait2,
SEN_epoll_wait,
SEN_eventfd,
SEN_eventfd2,
SEN_execv,
SEN_execve,
SEN_execveat,
SEN_exit,
SEN_faccessat,
SEN_faccessat2,
SEN_fadvise64,
SEN_fadvise64_64,
SEN_fallocate,
SEN_fanotify_init,
SEN_fanotify_mark,
SEN_fchdir,
SEN_fchmod,
SEN_fchmodat,
SEN_fchown,
SEN_fchown16,
SEN_fchownat,
SEN_fcntl,
SEN_fcntl64,
SEN_fdatasync,
SEN_fgetxattr,
SEN_finit_module,
SEN_flistxattr,
SEN_flock,
SEN_fork,
SEN_fremovexattr,
SEN_fsconfig,
SEN_fsetxattr,
SEN_fsmount,
SEN_fsopen,
SEN_fspick,
SEN_fstat,
SEN_fstat64,
SEN_fstatat64,
SEN_fstatfs,
SEN_fstatfs64,
SEN_fsync,
SEN_ftime,
SEN_ftruncate,
SEN_ftruncate64,
SEN_futex_time32,
SEN_futex_time64,
SEN_futimesat,
SEN_get_kernel_syms,
SEN_get_mempolicy,
SEN_get_robust_list,
SEN_get_thread_area,
SEN_getcpu,
SEN_getcwd,
SEN_getdents,
SEN_getdents64,
SEN_getdtablesize,
SEN_getegid,
SEN_getegid16,
SEN_geteuid,
SEN_geteuid16,
SEN_getgid,
SEN_getgid16,
SEN_getgroups,
SEN_getgroups16,
SEN_gethostname,
SEN_getitimer,
SEN_getpagesize,
SEN_getpeername,
SEN_getpgid,
SEN_getpgrp,
SEN_getpid,
SEN_getpmsg,
SEN_getppid,
SEN_getpriority,
SEN_getrandom,
SEN_getresgid,
SEN_getresgid16,
SEN_getresuid,
SEN_getresuid16,
SEN_getrlimit,
SEN_getrusage,
SEN_getsid,
SEN_getsockname,
SEN_getsockopt,
SEN_gettid,
SEN_gettimeofday,
SEN_getuid,
SEN_getuid16,
SEN_getxattr,
SEN_getxgid,
SEN_getxpid,
SEN_getxuid,
SEN_gtty,
SEN_idle,
SEN_init_module,
SEN_inotify_add_watch,
SEN_inotify_init,
SEN_inotify_init1,
SEN_inotify_rm_watch,
SEN_io_cancel,
SEN_io_destroy,
SEN_io_getevents_time32,
SEN_io_getevents_time64,
SEN_io_pgetevents_time32,
SEN_io_pgetevents_time64,
SEN_io_setup,
SEN_io_submit,
SEN_io_uring_enter,
SEN_io_uring_register,
SEN_io_uring_setup,
SEN_ioctl,
SEN_ioperm,
SEN_iopl,
SEN_ioprio_get,
SEN_ioprio_set,
SEN_ipc,
SEN_kcmp,
SEN_kern_features,
SEN_kexec_file_load,
SEN_kexec_load,
SEN_keyctl,
SEN_kill,
SEN_link,
SEN_linkat,
SEN_listen,
SEN_listxattr,
SEN_llseek,
SEN_lock,
SEN_lookup_dcookie,
SEN_lseek,
SEN_lstat,
SEN_lstat64,
SEN_madvise,
SEN_mbind,
SEN_membarrier,
SEN_memfd_create,
SEN_migrate_pages,
SEN_mincore,
SEN_mkdir,
SEN_mkdirat,
SEN_mknod,
SEN_mknodat,
SEN_mlock,
SEN_mlock2,
SEN_mlockall,
SEN_mmap,
SEN_mmap_4koff,
SEN_mmap_pgoff,
SEN_modify_ldt,
SEN_mount,
SEN_mount_setattr,
SEN_move_mount,
SEN_move_pages,
SEN_mprotect,
SEN_mpx,
SEN_mq_getsetattr,
SEN_mq_notify,
SEN_mq_open,
SEN_mq_timedreceive_time32,
SEN_mq_timedreceive_time64,
SEN_mq_timedsend_time32,
SEN_mq_timedsend_time64,
SEN_mq_unlink,
SEN_mremap,
SEN_msgctl,
SEN_msgget,
SEN_msgrcv,
SEN_msgsnd,
SEN_msync,
SEN_munlock,
SEN_munlockall,
SEN_munmap,
SEN_name_to_handle_at,
SEN_nanosleep_time32,
SEN_nanosleep_time64,
SEN_newfstatat,
SEN_nfsservctl,
SEN_nice,
SEN_old_mmap,
SEN_old_mmap_pgoff,
SEN_oldfstat,
SEN_oldlstat,
SEN_oldolduname,
SEN_oldselect,
SEN_oldstat,
SEN_olduname,
SEN_open,
SEN_open_by_handle_at,
SEN_open_tree,
SEN_openat,
SEN_openat2,
SEN_or1k_atomic,
SEN_osf_fstatfs,
SEN_osf_getitimer,
SEN_osf_getrusage,
SEN_osf_gettimeofday,
SEN_osf_select,
SEN_osf_setitimer,
SEN_osf_settimeofday,
SEN_osf_sigprocmask,
SEN_osf_statfs,
SEN_osf_utimes,
SEN_osf_wait4,
SEN_pause,
SEN_perf_event_open,
SEN_personality,
SEN_pidfd_getfd,
SEN_pidfd_open,
SEN_pidfd_send_signal,
SEN_pipe,
SEN_pipe2,
SEN_pivotroot,
SEN_pkey_alloc,
SEN_pkey_free,
SEN_pkey_mprotect,
SEN_poll_time32,
SEN_poll_time64,
SEN_ppoll_time32,
SEN_ppoll_time64,
SEN_prctl,
SEN_pread,
SEN_preadv,
SEN_preadv2,
SEN_prlimit64,
SEN_process_madvise,
SEN_process_vm_readv,
SEN_process_vm_writev,
SEN_prof,
SEN_profil,
SEN_pselect6_time32,
SEN_pselect6_time64,
SEN_ptrace,
SEN_putpmsg,
SEN_pwrite,
SEN_pwritev,
SEN_pwritev2,
SEN_query_module,
SEN_quotactl,
SEN_read,
SEN_readahead,
SEN_readdir,
SEN_readlink,
SEN_readlinkat,
SEN_readv,
SEN_reboot,
SEN_recv,
SEN_recvfrom,
SEN_recvmmsg,
SEN_recvmmsg_time32,
SEN_recvmmsg_time64,
SEN_recvmsg,
SEN_remap_file_pages,
SEN_removexattr,
SEN_rename,
SEN_renameat,
SEN_renameat2,
SEN_request_key,
SEN_restart_syscall,
SEN_riscv_flush_icache,
SEN_rmdir,
SEN_rseq,
SEN_rt_sigaction,
SEN_rt_sigpending,
SEN_rt_sigprocmask,
SEN_rt_sigqueueinfo,
SEN_rt_sigreturn,
SEN_rt_sigsuspend,
SEN_rt_sigtimedwait_time32,
SEN_rt_sigtimedwait_time64,
SEN_rt_tgsigqueueinfo,
SEN_s390_guarded_storage,
SEN_s390_pci_mmio_read,
SEN_s390_pci_mmio_write,
SEN_s390_runtime_instr,
SEN_s390_sthyi,
SEN_sched_get_priority_max,
SEN_sched_get_priority_min,
SEN_sched_getaffinity,
SEN_sched_getattr,
SEN_sched_getparam,
SEN_sched_getscheduler,
SEN_sched_rr_get_interval_time32,
SEN_sched_rr_get_interval_time64,
SEN_sched_setaffinity,
SEN_sched_setattr,
SEN_sched_setparam,
SEN_sched_setscheduler,
SEN_sched_yield,
SEN_seccomp,
SEN_security,
SEN_select,
SEN_semctl,
SEN_semget,
SEN_semop,
SEN_semtimedop,
SEN_semtimedop_time32,
SEN_semtimedop_time64,
SEN_send,
SEN_sendfile,
SEN_sendfile64,
SEN_sendmmsg,
SEN_sendmsg,
SEN_sendto,
SEN_set_mempolicy,
SEN_set_robust_list,
SEN_set_thread_area,
SEN_set_tid_address,
SEN_setdomainname,
SEN_setfsgid,
SEN_setfsgid16,
SEN_setfsuid,
SEN_setfsuid16,
SEN_setgid,
SEN_setgid16,
SEN_setgroups,
SEN_setgroups16,
SEN_sethostname,
SEN_setitimer,
SEN_setns,
SEN_setpgid,
SEN_setpgrp,
SEN_setpriority,
SEN_setregid,
SEN_setregid16,
SEN_setresgid,
SEN_setresgid16,
SEN_setresuid,
SEN_setresuid16,
SEN_setreuid,
SEN_setreuid16,
SEN_setrlimit,
SEN_setsid,
SEN_setsockopt,
SEN_settimeofday,
SEN_setuid,
SEN_setuid16,
SEN_setup,
SEN_setxattr,
SEN_sgetmask,
SEN_shmat,
SEN_shmctl,
SEN_shmdt,
SEN_shmget,
SEN_shutdown,
SEN_sigaction,
SEN_sigaltstack,
SEN_signal,
SEN_signalfd,
SEN_signalfd4,
SEN_sigpending,
SEN_sigprocmask,
SEN_sigreturn,
SEN_sigsuspend,
SEN_socket,
SEN_socketcall,
SEN_socketpair,
SEN_splice,
SEN_sram_alloc,
SEN_ssetmask,
SEN_stat,
SEN_stat64,
SEN_statfs,
SEN_statfs64,
SEN_statx,
SEN_stime,
SEN_stty,
SEN_subpage_prot,
SEN_swapoff,
SEN_swapon,
SEN_symlink,
SEN_symlinkat,
SEN_sync,
SEN_sync_file_range,
SEN_sync_file_range2,
SEN_syncfs,
SEN_syscall,
SEN_sysctl,
SEN_sysfs,
SEN_sysinfo,
SEN_syslog,
SEN_sysmips,
SEN_tee,
SEN_tgkill,
SEN_time,
SEN_timer_create,
SEN_timer_delete,
SEN_timer_getoverrun,
SEN_timer_gettime32,
SEN_timer_gettime64,
SEN_timer_settime32,
SEN_timer_settime64,
SEN_timerfd,
SEN_timerfd_create,
SEN_timerfd_gettime32,
SEN_timerfd_gettime64,
SEN_timerfd_settime32,
SEN_timerfd_settime64,
SEN_times,
SEN_tkill,
SEN_truncate,
SEN_truncate64,
SEN_tuxcall,
SEN_ulimit,
SEN_umask,
SEN_umount,
SEN_umount2,
SEN_uname,
SEN_unlink,
SEN_unlinkat,
SEN_unshare,
SEN_uselib,
SEN_userfaultfd,
SEN_ustat,
SEN_utime,
SEN_utimensat_time32,
SEN_utimensat_time64,
SEN_utimes,
SEN_vfork,
SEN_vhangup,
SEN_vm86,
SEN_vm86old,
SEN_vmsplice,
SEN_vserver,
SEN_wait4,
SEN_waitid,
SEN_waitpid,
SEN_write,
SEN_writev,
};
