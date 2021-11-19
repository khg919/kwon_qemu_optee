cmd_miscutils/hexedit.o := /home/qemu-sgx/devel/optee/out-br/host/bin/arm-linux-gnueabihf-gcc -Wp,-MD,miscutils/.hexedit.o.d   -std=gnu99 -Iinclude -Ilibbb  -include include/autoconf.h -D_GNU_SOURCE -DNDEBUG -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -D_FILE_OFFSET_BITS=64 -DBB_VER='"1.33.1"' -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -D_FILE_OFFSET_BITS=64  -Os -g0 -D_FORTIFY_SOURCE=1 -Wall -Wshadow -Wwrite-strings -Wundef -Wstrict-prototypes -Wunused -Wunused-parameter -Wunused-function -Wunused-value -Wmissing-prototypes -Wmissing-declarations -Wno-format-security -Wdeclaration-after-statement -Wold-style-definition -finline-limit=0 -fno-builtin-strlen -fomit-frame-pointer -ffunction-sections -fdata-sections -fno-guess-branch-probability -funsigned-char -static-libgcc -falign-functions=1 -falign-jumps=1 -falign-labels=1 -falign-loops=1 -fno-unwind-tables -fno-asynchronous-unwind-tables -fno-builtin-printf -Os     -DKBUILD_BASENAME='"hexedit"'  -DKBUILD_MODNAME='"hexedit"' -c -o miscutils/hexedit.o miscutils/hexedit.c

deps_miscutils/hexedit.o := \
  miscutils/hexedit.c \
    $(wildcard include/config/hexedit.h) \
    $(wildcard include/config/variable/arch/pagesize.h) \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/stdc-predef.h \
  include/libbb.h \
    $(wildcard include/config/feature/shadowpasswds.h) \
    $(wildcard include/config/use/bb/shadow.h) \
    $(wildcard include/config/selinux.h) \
    $(wildcard include/config/feature/utmp.h) \
    $(wildcard include/config/locale/support.h) \
    $(wildcard include/config/use/bb/pwd/grp.h) \
    $(wildcard include/config/lfs.h) \
    $(wildcard include/config/feature/buffers/go/on/stack.h) \
    $(wildcard include/config/feature/buffers/go/in/bss.h) \
    $(wildcard include/config/feature/verbose.h) \
    $(wildcard include/config/feature/etc/services.h) \
    $(wildcard include/config/feature/ipv6.h) \
    $(wildcard include/config/feature/seamless/xz.h) \
    $(wildcard include/config/feature/seamless/lzma.h) \
    $(wildcard include/config/feature/seamless/bz2.h) \
    $(wildcard include/config/feature/seamless/gz.h) \
    $(wildcard include/config/feature/seamless/z.h) \
    $(wildcard include/config/float/duration.h) \
    $(wildcard include/config/feature/check/names.h) \
    $(wildcard include/config/feature/prefer/applets.h) \
    $(wildcard include/config/long/opts.h) \
    $(wildcard include/config/feature/pidfile.h) \
    $(wildcard include/config/feature/syslog.h) \
    $(wildcard include/config/feature/syslog/info.h) \
    $(wildcard include/config/warn/simple/msg.h) \
    $(wildcard include/config/feature/individual.h) \
    $(wildcard include/config/ash.h) \
    $(wildcard include/config/sh/is/ash.h) \
    $(wildcard include/config/bash/is/ash.h) \
    $(wildcard include/config/hush.h) \
    $(wildcard include/config/sh/is/hush.h) \
    $(wildcard include/config/bash/is/hush.h) \
    $(wildcard include/config/echo.h) \
    $(wildcard include/config/printf.h) \
    $(wildcard include/config/test.h) \
    $(wildcard include/config/test1.h) \
    $(wildcard include/config/test2.h) \
    $(wildcard include/config/kill.h) \
    $(wildcard include/config/killall.h) \
    $(wildcard include/config/killall5.h) \
    $(wildcard include/config/chown.h) \
    $(wildcard include/config/ls.h) \
    $(wildcard include/config/xxx.h) \
    $(wildcard include/config/route.h) \
    $(wildcard include/config/feature/hwib.h) \
    $(wildcard include/config/desktop.h) \
    $(wildcard include/config/feature/crond/d.h) \
    $(wildcard include/config/feature/setpriv/capabilities.h) \
    $(wildcard include/config/run/init.h) \
    $(wildcard include/config/feature/securetty.h) \
    $(wildcard include/config/pam.h) \
    $(wildcard include/config/use/bb/crypt.h) \
    $(wildcard include/config/feature/adduser/to/group.h) \
    $(wildcard include/config/feature/del/user/from/group.h) \
    $(wildcard include/config/ioctl/hex2str/error.h) \
    $(wildcard include/config/feature/editing.h) \
    $(wildcard include/config/feature/editing/history.h) \
    $(wildcard include/config/feature/tab/completion.h) \
    $(wildcard include/config/shell/ash.h) \
    $(wildcard include/config/shell/hush.h) \
    $(wildcard include/config/feature/editing/savehistory.h) \
    $(wildcard include/config/feature/username/completion.h) \
    $(wildcard include/config/feature/editing/vi.h) \
    $(wildcard include/config/feature/editing/save/on/exit.h) \
    $(wildcard include/config/pmap.h) \
    $(wildcard include/config/feature/show/threads.h) \
    $(wildcard include/config/feature/ps/additional/columns.h) \
    $(wildcard include/config/feature/topmem.h) \
    $(wildcard include/config/feature/top/smp/process.h) \
    $(wildcard include/config/pgrep.h) \
    $(wildcard include/config/pkill.h) \
    $(wildcard include/config/pidof.h) \
    $(wildcard include/config/sestatus.h) \
    $(wildcard include/config/unicode/support.h) \
    $(wildcard include/config/feature/mtab/support.h) \
    $(wildcard include/config/feature/clean/up.h) \
    $(wildcard include/config/feature/devfs.h) \
  include/platform.h \
    $(wildcard include/config/werror.h) \
    $(wildcard include/config/big/endian.h) \
    $(wildcard include/config/little/endian.h) \
    $(wildcard include/config/nommu.h) \
  /home/qemu-sgx/devel/optee/toolchains/aarch32/lib/gcc/arm-none-linux-gnueabihf/10.2.1/include-fixed/limits.h \
  /home/qemu-sgx/devel/optee/toolchains/aarch32/lib/gcc/arm-none-linux-gnueabihf/10.2.1/include-fixed/syslimits.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/limits.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/libc-header-start.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/features.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/sys/cdefs.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/wordsize.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/long-double.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/gnu/stubs.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/gnu/stubs-hard.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/posix1_lim.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/local_lim.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/linux/limits.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/posix2_lim.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/xopen_lim.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/uio_lim.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/byteswap.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/byteswap.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/types.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/timesize.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/typesizes.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/time64.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/endian.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/endian.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/endianness.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/uintn-identity.h \
  /home/qemu-sgx/devel/optee/toolchains/aarch32/lib/gcc/arm-none-linux-gnueabihf/10.2.1/include/stdint.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/stdint.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/wchar.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/stdint-intn.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/stdint-uintn.h \
  /home/qemu-sgx/devel/optee/toolchains/aarch32/lib/gcc/arm-none-linux-gnueabihf/10.2.1/include/stdbool.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/unistd.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/posix_opt.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/environments.h \
  /home/qemu-sgx/devel/optee/toolchains/aarch32/lib/gcc/arm-none-linux-gnueabihf/10.2.1/include/stddef.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/confname.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/getopt_posix.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/getopt_core.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/unistd.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/unistd_ext.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/ctype.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/types/locale_t.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/types/__locale_t.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/dirent.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/dirent.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/dirent_ext.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/errno.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/errno.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/linux/errno.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/asm/errno.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/asm-generic/errno.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/asm-generic/errno-base.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/types/error_t.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/fcntl.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/fcntl.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/fcntl-linux.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/types/struct_iovec.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/linux/falloc.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/types/struct_timespec.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/stat.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/fcntl2.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/inttypes.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/netdb.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/netinet/in.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/sys/socket.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/socket.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/sys/types.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/types/clock_t.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/types/clockid_t.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/types/time_t.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/types/timer_t.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/sys/select.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/select.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/types/sigset_t.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/types/__sigset_t.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/types/struct_timeval.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/select2.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/pthreadtypes.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/thread-shared-types.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/pthreadtypes-arch.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/struct_mutex.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/struct_rwlock.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/socket_type.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/sockaddr.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/asm/socket.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/asm-generic/socket.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/asm/sockios.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/asm-generic/sockios.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/types/struct_osockaddr.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/socket2.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/in.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/rpc/netdb.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/types/sigevent_t.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/types/__sigval_t.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/netdb.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/setjmp.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/setjmp.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/setjmp2.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/signal.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/signum.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/signum-generic.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/types/sig_atomic_t.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/types/siginfo_t.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/siginfo-arch.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/siginfo-consts.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/siginfo-consts-arch.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/types/sigval_t.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/sigevent-consts.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/sigaction.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/sigcontext.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/asm/sigcontext.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/types/stack_t.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/sys/ucontext.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/sigstack.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/ss_flags.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/types/struct_sigstack.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/sigthread.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/signal_ext.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/paths.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/stdio.h \
  /home/qemu-sgx/devel/optee/toolchains/aarch32/lib/gcc/arm-none-linux-gnueabihf/10.2.1/include/stdarg.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/types/__fpos_t.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/types/__mbstate_t.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/types/__fpos64_t.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/types/__FILE.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/types/FILE.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/types/struct_FILE.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/types/cookie_io_functions_t.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/stdio_lim.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/sys_errlist.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/stdio2.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/stdlib.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/waitflags.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/waitstatus.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/floatn.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/floatn-common.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/alloca.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/stdlib-float.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/stdlib.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/string.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/strings.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/strings_fortified.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/string_fortified.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/libgen.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/poll.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/sys/poll.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/poll.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/poll2.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/sys/ioctl.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/ioctls.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/asm/ioctls.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/asm-generic/ioctls.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/linux/ioctl.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/asm/ioctl.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/asm-generic/ioctl.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/ioctl-types.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/sys/ttydefaults.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/sys/mman.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/mman.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/mman-map-flags-generic.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/mman-linux.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/mman-shared.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/sys/resource.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/resource.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/types/struct_rusage.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/sys/stat.h \
  /home/qemu-sgx/devel/optee/toolchains/aarch32/lib/gcc/arm-none-linux-gnueabihf/10.2.1/include-fixed/bits/statx.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/statx-generic.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/types/struct_statx_timestamp.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/types/struct_statx.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/sys/time.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/sys/sysmacros.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/sysmacros.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/sys/wait.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/termios.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/termios.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/termios-struct.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/termios-c_cc.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/termios-c_iflag.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/termios-c_oflag.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/termios-baud.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/termios-c_cflag.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/termios-c_lflag.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/termios-tcflow.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/termios-misc.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/time.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/time.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/timex.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/types/struct_tm.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/types/struct_itimerspec.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/sys/param.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/param.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/linux/param.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/asm/param.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/asm-generic/param.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/pwd.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/grp.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/shadow.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/mntent.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/sys/statfs.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/statfs.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/utmp.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/utmp.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/utmpx.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/bits/utmpx.h \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/arpa/inet.h \
  include/xatonum.h \

miscutils/hexedit.o: $(deps_miscutils/hexedit.o)

$(deps_miscutils/hexedit.o):
