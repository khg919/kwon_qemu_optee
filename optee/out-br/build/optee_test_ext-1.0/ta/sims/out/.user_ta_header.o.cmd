old-cmd-out/user_ta_header.o := /home/qemu-sgx/devel/optee/build/../toolchains/aarch32/bin/arm-linux-gnueabihf-gcc -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -D_FILE_OFFSET_BITS=64 -Os -g0 -D_FORTIFY_SOURCE=1 -std=gnu99 -fdiagnostics-show-option -Wall -Wcast-align -Werror-implicit-function-declaration -Wextra -Wfloat-equal -Wformat-nonliteral -Wformat-security -Wformat=2 -Winit-self -Wmissing-declarations -Wmissing-format-attribute -Wmissing-include-dirs -Wmissing-noreturn -Wmissing-prototypes -Wnested-externs -Wpointer-arith -Wshadow -Wstrict-prototypes -Wswitch-default -Wwrite-strings -Wno-missing-field-initializers -Wno-format-zero-length -Wredundant-decls -Wold-style-definition -Wstrict-aliasing=2 -Wundef -mcpu=cortex-a15 -O0 -g3 -fpic -mthumb -fno-short-enums -fno-common -mno-unaligned-access -mfloat-abi=hard -funsafe-math-optimizations -funwind-tables -MD -MF out/.user_ta_header.o.d -MT out/user_ta_header.o -nostdinc -isystem /home/qemu-sgx/devel/optee/toolchains/aarch32/bin/../lib/gcc/arm-none-linux-gnueabihf/10.2.1/include -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -D_FILE_OFFSET_BITS=64 -I./include -I./../sims_keepalive/include -DARM32=1 -D__ILP32__=1 -DMBEDTLS_SELF_TEST -DTRACE_LEVEL=1 -I. -I/home/qemu-sgx/devel/optee/optee_os/out/arm/export-ta_arm32/include -DCFG_TEE_TA_LOG_LEVEL='1' -DCFG_SYSTEM_PTA=1 -DCFG_UNWIND=1 -DCFG_TA_BGET_TEST=1 -DCFG_ARM32_ta_arm32=1 -DCFG_TA_MBEDTLS=1 -DCFG_TA_MBEDTLS_SELF_TEST=1 -DCFG_TA_MBEDTLS_MPI=1 -DCFG_TA_FLOAT_SUPPORT=1 -D__FILE_ID__=user_ta_header_c -c /home/qemu-sgx/devel/optee/optee_os/out/arm/export-ta_arm32/src/user_ta_header.c -o out/user_ta_header.o
