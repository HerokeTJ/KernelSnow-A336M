cmd_drivers/gpu/arm/bv_r32p1/../exynos/backend/dummy/gpexbe_dmabuf_dummy.o := clang -Wp,-MMD,drivers/gpu/arm/bv_r32p1/../exynos/backend/dummy/.gpexbe_dmabuf_dummy.o.d -nostdinc -isystem /home/herokelc/Kernel/pronton-toolchains-a33/clang/host/linux-x86/clang-r416183b/lib64/clang/12.0.5/include -I./arch/arm64/include -I./arch/arm64/include/generated  -I./include  -I./include/variant1 -I./arch/arm64/include/uapi -I./arch/arm64/include/generated/uapi -I./include/uapi -I./include/generated/uapi -include ./include/linux/kconfig.h -include ./include/linux/compiler_types.h -D__KERNEL__ -mlittle-endian -DKASAN_SHADOW_SCALE_SHIFT= -Qunused-arguments -fmacro-prefix-map=./= -Wall -Wundef -Werror=strict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -fshort-wchar -fno-PIE -Werror=implicit-function-declaration -Werror=implicit-int -Werror=return-type -Wno-format-security -Werror -std=gnu89 --target=aarch64-linux-gnu --prefix=aarch64-linux-gnu- --gcc-toolchain=/ -fintegrated-as -Werror=unknown-warning-option -mgeneral-regs-only -DCONFIG_CC_HAS_K_CONSTRAINT=1 -Wno-psabi -fno-asynchronous-unwind-tables -fno-unwind-tables -mbranch-protection=pac-ret+leaf+bti -Wa,-march=armv8.5-a -DARM64_ASM_ARCH='"armv8.5-a"' -ffixed-x18 -DKASAN_SHADOW_SCALE_SHIFT= -fno-delete-null-pointer-checks -Wno-frame-address -Wno-address-of-packed-member -O2 -Wframe-larger-than=2048 -fstack-protector-strong -Werror -Wno-format-invalid-specifier -Wno-gnu -mno-global-merge -Wno-unused-const-variable -fno-omit-frame-pointer -fno-optimize-sibling-calls -ftrivial-auto-var-init=zero -enable-trivial-auto-var-init-zero-knowing-it-will-be-removed-from-clang -g -gdwarf-4 -flto=thin -fsplit-lto-unit -fvisibility=default -Wdeclaration-after-statement -Wvla -Wno-pointer-sign -Wno-array-bounds -fno-strict-overflow -fno-stack-check -Werror=date-time -Werror=incompatible-pointer-types -Wno-initializer-overrides -Wno-format -Wno-sign-compare -Wno-format-zero-length -Wno-pointer-to-enum-cast -Wno-tautological-constant-out-of-range-compare -DMALI_CUSTOMER_RELEASE=1 -DMALI_USE_CSF=0 -DMALI_KERNEL_TEST_API=1 -DMALI_UNIT_TEST=0 -DMALI_COVERAGE=0 -DMALI_RELEASE_NAME='"r32p1-01bet2"' -DMALI_JIT_PRESSURE_LIMIT_BASE=1 -DMALI_INCREMENTAL_RENDERING=0 -DMALI_KBASE_BUILD -DMALI_PLATFORM_DIR=exynos -DMALI_KBASE_PLATFORM_PATH=../.././drivers/gpu/arm/bv_r32p1/../"exynos" -I./include/linux -I./drivers/staging/android -I./drivers/gpu/arm/bv_r32p1 -I./drivers/gpu/arm/bv_r32p1/../exynos -I./drivers/gpu/arm/bv_r32p1/../../../base -I./drivers/gpu/arm/bv_r32p1/../../../../include -I./drivers/gpu/arm/exynos/include -I./drivers/gpu/arm/exynos/include -I./drivers/gpu/arm/exynos/include -I./drivers/gpu/arm/exynos/include/tests -I./include/uapi/gpu/arm/exynos -DMALI_CUSTOMER_RELEASE=1 -DMALI_USE_CSF=0 -DMALI_KERNEL_TEST_API=1 -DMALI_UNIT_TEST=0 -DMALI_COVERAGE=0 -DMALI_RELEASE_NAME='"r32p1-01bet2"' -DMALI_JIT_PRESSURE_LIMIT_BASE=1 -DMALI_INCREMENTAL_RENDERING=0 -DMALI_KBASE_BUILD -DMALI_PLATFORM_DIR=exynos -DMALI_KBASE_PLATFORM_PATH=../.././drivers/gpu/arm/bv_r32p1/../"exynos" -I./include/linux -I./drivers/staging/android -I./drivers/gpu/arm/bv_r32p1 -I./drivers/gpu/arm/bv_r32p1/../exynos -I./drivers/gpu/arm/bv_r32p1/../../../base -I./drivers/gpu/arm/bv_r32p1/../../../../include -I./drivers/gpu/arm/exynos/include -I./drivers/gpu/arm/exynos/include -I./drivers/gpu/arm/exynos/include -I./drivers/gpu/arm/exynos/include/tests -I./include/uapi/gpu/arm/exynos  -fsanitize=array-bounds -fsanitize=local-bounds -fsanitize-undefined-trap-on-error  -DMODULE -fsanitize=shadow-call-stack -fsanitize=cfi -fsanitize-cfi-cross-dso -fno-sanitize-cfi-canonical-jump-tables -fno-sanitize-blacklist  -DKBUILD_BASENAME='"gpexbe_dmabuf_dummy"' -DKBUILD_MODNAME='"mali_kbase"' -D__KBUILD_MODNAME=kmod_mali_kbase -c -o drivers/gpu/arm/bv_r32p1/../exynos/backend/dummy/gpexbe_dmabuf_dummy.o drivers/gpu/arm/bv_r32p1/../exynos/backend/dummy/gpexbe_dmabuf_dummy.c

source_drivers/gpu/arm/bv_r32p1/../exynos/backend/dummy/gpexbe_dmabuf_dummy.o := drivers/gpu/arm/bv_r32p1/../exynos/backend/dummy/gpexbe_dmabuf_dummy.c

deps_drivers/gpu/arm/bv_r32p1/../exynos/backend/dummy/gpexbe_dmabuf_dummy.o := \
  include/linux/kconfig.h \
    $(wildcard include/config/cc/version/text.h) \
    $(wildcard include/config/cpu/big/endian.h) \
    $(wildcard include/config/booger.h) \
    $(wildcard include/config/foo.h) \
  include/linux/compiler_types.h \
    $(wildcard include/config/have/arch/compiler/h.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/cc/has/asm/inline.h) \
  include/linux/compiler_attributes.h \
  include/linux/compiler-clang.h \
    $(wildcard include/config/arch/use/builtin/bswap.h) \
  arch/arm64/include/asm/compiler.h \
  drivers/gpu/arm/exynos/include/gpexbe_dmabuf.h \
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

drivers/gpu/arm/bv_r32p1/../exynos/backend/dummy/gpexbe_dmabuf_dummy.o: $(deps_drivers/gpu/arm/bv_r32p1/../exynos/backend/dummy/gpexbe_dmabuf_dummy.o)

$(deps_drivers/gpu/arm/bv_r32p1/../exynos/backend/dummy/gpexbe_dmabuf_dummy.o):
