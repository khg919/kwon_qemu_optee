cmd_libbb/perror_nomsg_and_die.o := /home/qemu-sgx/devel/optee/out-br/host/bin/arm-linux-gnueabihf-gcc -Wp,-MD,libbb/.perror_nomsg_and_die.o.d   -std=gnu99 -Iinclude -Ilibbb  -include include/autoconf.h -D_GNU_SOURCE -DNDEBUG -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -D_FILE_OFFSET_BITS=64 -DBB_VER='"1.33.1"' -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -D_FILE_OFFSET_BITS=64  -Os -g0 -D_FORTIFY_SOURCE=1 -Wall -Wshadow -Wwrite-strings -Wundef -Wstrict-prototypes -Wunused -Wunused-parameter -Wunused-function -Wunused-value -Wmissing-prototypes -Wmissing-declarations -Wno-format-security -Wdeclaration-after-statement -Wold-style-definition -finline-limit=0 -fno-builtin-strlen -fomit-frame-pointer -ffunction-sections -fdata-sections -fno-guess-branch-probability -funsigned-char -static-libgcc -falign-functions=1 -falign-jumps=1 -falign-labels=1 -falign-loops=1 -fno-unwind-tables -fno-asynchronous-unwind-tables -fno-builtin-printf -Os     -DKBUILD_BASENAME='"perror_nomsg_and_die"'  -DKBUILD_MODNAME='"perror_nomsg_and_die"' -c -o libbb/perror_nomsg_and_die.o libbb/perror_nomsg_and_die.c

deps_libbb/perror_nomsg_and_die.o := \
  libbb/perror_nomsg_and_die.c \
  ../../host/arm-buildroot-linux-gnueabihf/sysroot/usr/include/stdc-predef.h \
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

libbb/perror_nomsg_and_die.o: $(deps_libbb/perror_nomsg_and_die.o)

$(deps_libbb/perror_nomsg_and_die.o):
