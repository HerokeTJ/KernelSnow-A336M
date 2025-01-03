cmd_arch/arm64/kvm/hyp/nvhe/hyp.lds := clang -E -Wp,-MMD,arch/arm64/kvm/hyp/nvhe/.hyp.lds.d -nostdinc -isystem /home/herokelc/Kernel/pronton-toolchains-a33/clang/host/linux-x86/clang-r416183b/lib64/clang/12.0.5/include -I./arch/arm64/include -I./arch/arm64/include/generated  -I./include  -I./include/variant1 -I./arch/arm64/include/uapi -I./arch/arm64/include/generated/uapi -I./include/uapi -I./include/generated/uapi -include ./include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -DKASAN_SHADOW_SCALE_SHIFT= -Qunused-arguments -fmacro-prefix-map=./=   -P -Uarm64 -D__ASSEMBLY__ -DLINKER_SCRIPT -o arch/arm64/kvm/hyp/nvhe/hyp.lds arch/arm64/kvm/hyp/nvhe/hyp.lds.S

source_arch/arm64/kvm/hyp/nvhe/hyp.lds := arch/arm64/kvm/hyp/nvhe/hyp.lds.S

deps_arch/arm64/kvm/hyp/nvhe/hyp.lds := \
  include/linux/kconfig.h \
    $(wildcard include/config/cc/version/text.h) \
    $(wildcard include/config/cpu/big/endian.h) \
    $(wildcard include/config/booger.h) \
    $(wildcard include/config/foo.h) \
  arch/arm64/include/asm/hyp_image.h \
  include/asm-generic/vmlinux.lds.h \
    $(wildcard include/config/ld/dead/code/data/elimination.h) \
    $(wildcard include/config/lto/clang.h) \
    $(wildcard include/config/hotplug/cpu.h) \
    $(wildcard include/config/memory/hotplug.h) \
    $(wildcard include/config/ftrace/mcount/record.h) \
    $(wildcard include/config/function/tracer.h) \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/kprobes.h) \
    $(wildcard include/config/function/error/injection.h) \
    $(wildcard include/config/event/tracing.h) \
    $(wildcard include/config/tracing.h) \
    $(wildcard include/config/ftrace/syscalls.h) \
    $(wildcard include/config/bpf/events.h) \
    $(wildcard include/config/serial/earlycon.h) \
    $(wildcard include/config/security.h) \
    $(wildcard include/config/timer/of.h) \
    $(wildcard include/config/irqchip.h) \
    $(wildcard include/config/common/clk.h) \
    $(wildcard include/config/of/reserved/mem.h) \
    $(wildcard include/config/smp.h) \
    $(wildcard include/config/cpu/idle.h) \
    $(wildcard include/config/acpi.h) \
    $(wildcard include/config/thermal.h) \
    $(wildcard include/config/dtpm.h) \
    $(wildcard include/config/uh.h) \
    $(wildcard include/config/cfi/clang.h) \
    $(wildcard include/config/debug/info/btf.h) \
    $(wildcard include/config/constructors.h) \
    $(wildcard include/config/generic/bug.h) \
    $(wildcard include/config/unwinder/orc.h) \
    $(wildcard include/config/sec/debug/memtab.h) \
    $(wildcard include/config/pm/trace.h) \
    $(wildcard include/config/sec/kunit.h) \
    $(wildcard include/config/blk/dev/initrd.h) \
    $(wildcard include/config/amd/mem/encrypt.h) \
    $(wildcard include/config/gcov/kernel.h) \
    $(wildcard include/config/kasan/generic.h) \
    $(wildcard include/config/kcsan.h) \
  arch/arm64/include/asm/cache.h \
    $(wildcard include/config/kasan/sw/tags.h) \
    $(wildcard include/config/kasan/hw/tags.h) \
  arch/arm64/include/asm/cputype.h \
  arch/arm64/include/asm/mte-def.h \
  arch/arm64/include/asm/memory.h \
    $(wildcard include/config/arm64/va/bits.h) \
    $(wildcard include/config/kasan/shadow/offset.h) \
    $(wildcard include/config/kasan.h) \
    $(wildcard include/config/vmap/stack.h) \
    $(wildcard include/config/arm64/4k/pages.h) \
    $(wildcard include/config/debug/virtual.h) \
    $(wildcard include/config/sparsemem/vmemmap.h) \
    $(wildcard include/config/efi.h) \
    $(wildcard include/config/arm/gic/v3/its.h) \
  include/linux/const.h \
  include/vdso/const.h \
  include/uapi/linux/const.h \
  include/linux/sizes.h \
  arch/arm64/include/asm/page-def.h \
    $(wildcard include/config/arm64/page/shift.h) \
  include/asm-generic/memory_model.h \
    $(wildcard include/config/flatmem.h) \
    $(wildcard include/config/discontigmem.h) \
    $(wildcard include/config/sparsemem.h) \
  include/linux/pfn.h \

arch/arm64/kvm/hyp/nvhe/hyp.lds: $(deps_arch/arm64/kvm/hyp/nvhe/hyp.lds)

$(deps_arch/arm64/kvm/hyp/nvhe/hyp.lds):
