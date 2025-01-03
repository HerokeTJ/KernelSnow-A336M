cmd_arch/arm64/crypto/poly1305-core.o := clang -Wp,-MMD,arch/arm64/crypto/.poly1305-core.o.d -nostdinc -isystem /home/herokelc/Kernel/pronton-toolchains-a33/clang/host/linux-x86/clang-r416183b/lib64/clang/12.0.5/include -I./arch/arm64/include -I./arch/arm64/include/generated  -I./include  -I./include/variant1 -I./arch/arm64/include/uapi -I./arch/arm64/include/generated/uapi -I./include/uapi -I./include/generated/uapi -include ./include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -DKASAN_SHADOW_SCALE_SHIFT= -Qunused-arguments -fmacro-prefix-map=./= -D__ASSEMBLY__ -fno-PIE --target=aarch64-linux-gnu --prefix=aarch64-linux-gnu- --gcc-toolchain=/ -fintegrated-as -Werror=unknown-warning-option -fno-asynchronous-unwind-tables -fno-unwind-tables -DKASAN_SHADOW_SCALE_SHIFT= -g -Dpoly1305_init=poly1305_init_arm64    -c -o arch/arm64/crypto/poly1305-core.o arch/arm64/crypto/poly1305-core.S

source_arch/arm64/crypto/poly1305-core.o := arch/arm64/crypto/poly1305-core.S

deps_arch/arm64/crypto/poly1305-core.o := \
  include/linux/kconfig.h \
    $(wildcard include/config/cc/version/text.h) \
    $(wildcard include/config/cpu/big/endian.h) \
    $(wildcard include/config/booger.h) \
    $(wildcard include/config/foo.h) \

arch/arm64/crypto/poly1305-core.o: $(deps_arch/arm64/crypto/poly1305-core.o)

$(deps_arch/arm64/crypto/poly1305-core.o):
