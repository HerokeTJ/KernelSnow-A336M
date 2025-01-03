cmd_arch/arm64/kernel/vdso32/vdso.lds := clang -E -Wp,-MMD,arch/arm64/kernel/vdso32/.vdso.lds.d -nostdinc -isystem /home/herokelc/Kernel/pronton-toolchains-a33/clang/host/linux-x86/clang-r416183b/lib64/clang/12.0.5/include -I./arch/arm64/include -I./arch/arm64/include/generated  -I./include  -I./include/variant1 -I./arch/arm64/include/uapi -I./arch/arm64/include/generated/uapi -I./include/uapi -I./include/generated/uapi -include ./include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -DKASAN_SHADOW_SCALE_SHIFT= -Qunused-arguments -fmacro-prefix-map=./=  -P -C -Uarm64 -P -Uarm64 -D__ASSEMBLY__ -DLINKER_SCRIPT -o arch/arm64/kernel/vdso32/vdso.lds arch/arm64/kernel/vdso32/vdso.lds.S

source_arch/arm64/kernel/vdso32/vdso.lds := arch/arm64/kernel/vdso32/vdso.lds.S

deps_arch/arm64/kernel/vdso32/vdso.lds := \
    $(wildcard include/config/time/ns.h) \
  include/linux/kconfig.h \
    $(wildcard include/config/cc/version/text.h) \
    $(wildcard include/config/cpu/big/endian.h) \
    $(wildcard include/config/booger.h) \
    $(wildcard include/config/foo.h) \
  include/linux/const.h \
  include/vdso/const.h \
  include/uapi/linux/const.h \
  arch/arm64/include/asm/page.h \
  arch/arm64/include/asm/page-def.h \
    $(wildcard include/config/arm64/page/shift.h) \
  include/asm-generic/getorder.h \
  arch/arm64/include/asm/vdso.h \
    $(wildcard include/config/compat/vdso.h) \

arch/arm64/kernel/vdso32/vdso.lds: $(deps_arch/arm64/kernel/vdso32/vdso.lds)

$(deps_arch/arm64/kernel/vdso32/vdso.lds):
