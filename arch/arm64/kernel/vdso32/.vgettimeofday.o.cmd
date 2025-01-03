cmd_arch/arm64/kernel/vdso32/vgettimeofday.o := clang --target=arm-linux-gnueabi -Wp,-MD,arch/arm64/kernel/vdso32/.vgettimeofday.o.d -DBUILD_VDSO -D__KERNEL__ -nostdinc -isystem /home/herokelc/Kernel/pronton-toolchains-a33/clang/host/linux-x86/clang-r416183b/lib64/clang/12.0.5/include -I./arch/arm64/include -I./arch/arm64/include/generated  -I./include  -I./include/variant1 -I./arch/arm64/include/uapi -I./arch/arm64/include/generated/uapi -I./include/uapi -I./include/generated/uapi -include ./include/linux/kconfig.h -fno-PIE -g -fno-dwarf2-cfi-asm -mabi=aapcs-linux -mfloat-abi=soft -mlittle-endian -fPIC -fno-builtin -fno-stack-protector -DDISABLE_BRANCH_PROFILING -march=armv8-a -D__LINUX_ARM_ARCH__=8 -DENABLE_COMPAT_VDSO=1 -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -std=gnu89 -O2 -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -Werror=strict-prototypes -Werror=date-time -Werror=incompatible-pointer-types -D__uint128_t='void*' -Wno-shift-count-overflow -Wno-int-to-pointer-cast -mthumb -fomit-frame-pointer -DCONFIG_AS_DMB_ISHLD=1 -include /home/herokelc/Kernel/lib/vdso/gettimeofday.c -c -o arch/arm64/kernel/vdso32/vgettimeofday.o arch/arm64/kernel/vdso32/vgettimeofday.c

source_arch/arm64/kernel/vdso32/vgettimeofday.o := arch/arm64/kernel/vdso32/vgettimeofday.c

deps_arch/arm64/kernel/vdso32/vgettimeofday.o := \
  include/linux/kconfig.h \
    $(wildcard include/config/cc/version/text.h) \
    $(wildcard include/config/cpu/big/endian.h) \
    $(wildcard include/config/booger.h) \
    $(wildcard include/config/foo.h) \
  /home/herokelc/Kernel/lib/vdso/gettimeofday.c \
    $(wildcard include/config/time/ns.h) \
  include/vdso/datapage.h \
    $(wildcard include/config/arch/has/vdso/data.h) \
  include/linux/compiler.h \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/stack/validation.h) \
  include/linux/compiler_types.h \
    $(wildcard include/config/have/arch/compiler/h.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/cc/has/asm/inline.h) \
  include/linux/compiler_attributes.h \
  include/linux/compiler-clang.h \
    $(wildcard include/config/arch/use/builtin/bswap.h) \
  arch/arm64/include/asm/compiler.h \
  arch/arm64/include/asm/rwonce.h \
    $(wildcard include/config/lto.h) \
    $(wildcard include/config/as/has/ldapr.h) \
  arch/arm64/include/asm/alternative-macros.h \
  arch/arm64/include/asm/cpucaps.h \
  include/linux/stringify.h \
  include/asm-generic/rwonce.h \
  include/linux/kasan-checks.h \
    $(wildcard include/config/kasan/generic.h) \
    $(wildcard include/config/kasan/sw/tags.h) \
  include/linux/types.h \
    $(wildcard include/config/have/uid16.h) \
    $(wildcard include/config/uid16.h) \
    $(wildcard include/config/arch/dma/addr/t/64bit.h) \
    $(wildcard include/config/phys/addr/t/64bit.h) \
    $(wildcard include/config/64bit.h) \
  include/uapi/linux/types.h \
  arch/arm64/include/generated/uapi/asm/types.h \
  include/uapi/asm-generic/types.h \
  include/asm-generic/int-ll64.h \
  include/uapi/asm-generic/int-ll64.h \
  arch/arm64/include/uapi/asm/bitsperlong.h \
  include/asm-generic/bitsperlong.h \
  include/uapi/asm-generic/bitsperlong.h \
  include/uapi/linux/posix_types.h \
  include/linux/stddef.h \
  include/uapi/linux/stddef.h \
  arch/arm64/include/uapi/asm/posix_types.h \
  include/uapi/asm-generic/posix_types.h \
  include/linux/kcsan-checks.h \
    $(wildcard include/config/kcsan.h) \
    $(wildcard include/config/kcsan/ignore/atomics.h) \
  include/uapi/linux/time.h \
  include/uapi/linux/time_types.h \
  include/uapi/asm-generic/errno-base.h \
  include/vdso/bits.h \
  include/vdso/const.h \
  include/uapi/linux/const.h \
  include/vdso/clocksource.h \
    $(wildcard include/config/generic/gettimeofday.h) \
  include/vdso/limits.h \
  arch/arm64/include/asm/vdso/clocksource.h \
  include/vdso/ktime.h \
  include/vdso/jiffies.h \
  arch/arm64/include/uapi/asm/param.h \
  include/asm-generic/param.h \
    $(wildcard include/config/hz.h) \
  include/uapi/asm-generic/param.h \
  include/vdso/time64.h \
  include/vdso/math64.h \
  include/vdso/processor.h \
  arch/arm64/include/asm/vdso/processor.h \
  include/vdso/time.h \
  include/vdso/time32.h \
  arch/arm64/include/asm/vdso/compat_gettimeofday.h \
  arch/arm64/include/asm/barrier.h \
    $(wildcard include/config/arm64/pseudo/nmi.h) \
  include/asm-generic/barrier.h \
    $(wildcard include/config/smp.h) \
  arch/arm64/include/asm/unistd.h \
    $(wildcard include/config/compat.h) \
  arch/arm64/include/uapi/asm/unistd.h \
  include/uapi/asm-generic/unistd.h \
    $(wildcard include/config/mmu.h) \
  arch/arm64/include/generated/uapi/asm/errno.h \
  include/uapi/asm-generic/errno.h \
  arch/arm64/include/asm/vdso/compat_barrier.h \
    $(wildcard include/config/as/dmb/ishld.h) \
  include/vdso/helpers.h \

arch/arm64/kernel/vdso32/vgettimeofday.o: $(deps_arch/arm64/kernel/vdso32/vgettimeofday.o)

$(deps_arch/arm64/kernel/vdso32/vgettimeofday.o):
