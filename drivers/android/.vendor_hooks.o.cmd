cmd_drivers/android/vendor_hooks.o := clang -Wp,-MMD,drivers/android/.vendor_hooks.o.d -nostdinc -isystem /home/herokelc/Kernel/pronton-toolchains-a33/clang/host/linux-x86/clang-r416183b/lib64/clang/12.0.5/include -I./arch/arm64/include -I./arch/arm64/include/generated  -I./include  -I./include/variant1 -I./arch/arm64/include/uapi -I./arch/arm64/include/generated/uapi -I./include/uapi -I./include/generated/uapi -include ./include/linux/kconfig.h -include ./include/linux/compiler_types.h -D__KERNEL__ -mlittle-endian -DKASAN_SHADOW_SCALE_SHIFT= -Qunused-arguments -fmacro-prefix-map=./= -Wall -Wundef -Werror=strict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -fshort-wchar -fno-PIE -Werror=implicit-function-declaration -Werror=implicit-int -Werror=return-type -Wno-format-security -Werror -std=gnu89 --target=aarch64-linux-gnu --prefix=aarch64-linux-gnu- --gcc-toolchain=/ -fintegrated-as -Werror=unknown-warning-option -mgeneral-regs-only -DCONFIG_CC_HAS_K_CONSTRAINT=1 -Wno-psabi -fno-asynchronous-unwind-tables -fno-unwind-tables -mbranch-protection=pac-ret+leaf+bti -Wa,-march=armv8.5-a -DARM64_ASM_ARCH='"armv8.5-a"' -ffixed-x18 -DKASAN_SHADOW_SCALE_SHIFT= -fno-delete-null-pointer-checks -Wno-frame-address -Wno-address-of-packed-member -O2 -Wframe-larger-than=2048 -fstack-protector-strong -Werror -Wno-format-invalid-specifier -Wno-gnu -mno-global-merge -Wno-unused-const-variable -fno-omit-frame-pointer -fno-optimize-sibling-calls -ftrivial-auto-var-init=zero -enable-trivial-auto-var-init-zero-knowing-it-will-be-removed-from-clang -g -gdwarf-4 -flto=thin -fsplit-lto-unit -fvisibility=default -Wdeclaration-after-statement -Wvla -Wno-pointer-sign -Wno-array-bounds -fno-strict-overflow -fno-stack-check -Werror=date-time -Werror=incompatible-pointer-types -Wno-initializer-overrides -Wno-format -Wno-sign-compare -Wno-format-zero-length -Wno-pointer-to-enum-cast -Wno-tautological-constant-out-of-range-compare -Idrivers/android  -fsanitize=array-bounds -fsanitize=local-bounds -fsanitize-undefined-trap-on-error    -DKBUILD_MODFILE='"drivers/android/vendor_hooks"' -DKBUILD_BASENAME='"vendor_hooks"' -DKBUILD_MODNAME='"vendor_hooks"' -D__KBUILD_MODNAME=kmod_vendor_hooks -c -o drivers/android/vendor_hooks.o drivers/android/vendor_hooks.c

source_drivers/android/vendor_hooks.o := drivers/android/vendor_hooks.c

deps_drivers/android/vendor_hooks.o := \
    $(wildcard include/config/arm64.h) \
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
  include/linux/dma-buf.h \
    $(wildcard include/config/dmabuf/sysfs/stats.h) \
  include/linux/file.h \
  include/linux/compiler.h \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/stack/validation.h) \
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
  include/linux/errno.h \
  include/uapi/linux/errno.h \
  arch/arm64/include/generated/uapi/asm/errno.h \
  include/uapi/asm-generic/errno.h \
  include/uapi/asm-generic/errno-base.h \
  include/linux/err.h \
  include/linux/scatterlist.h \
    $(wildcard include/config/need/sg/dma/length.h) \
    $(wildcard include/config/debug/sg.h) \
    $(wildcard include/config/sgl/alloc.h) \
    $(wildcard include/config/arch/no/sg/chain.h) \
    $(wildcard include/config/sg/pool.h) \
  include/linux/string.h \
    $(wildcard include/config/binary/printf.h) \
    $(wildcard include/config/fortify/source.h) \
  include/uapi/linux/string.h \
  arch/arm64/include/asm/string.h \
    $(wildcard include/config/arch/has/uaccess/flushcache.h) \
  include/linux/bug.h \
    $(wildcard include/config/generic/bug.h) \
    $(wildcard include/config/bug/on/data/corruption.h) \
  arch/arm64/include/asm/bug.h \
  arch/arm64/include/asm/asm-bug.h \
    $(wildcard include/config/debug/bugverbose.h) \
  arch/arm64/include/asm/brk-imm.h \
  include/asm-generic/bug.h \
    $(wildcard include/config/bug.h) \
    $(wildcard include/config/generic/bug/relative/pointers.h) \
    $(wildcard include/config/smp.h) \
  include/linux/instrumentation.h \
    $(wildcard include/config/debug/entry.h) \
  include/linux/kernel.h \
    $(wildcard include/config/preempt/voluntary.h) \
    $(wildcard include/config/debug/atomic/sleep.h) \
    $(wildcard include/config/preempt/rt.h) \
    $(wildcard include/config/mmu.h) \
    $(wildcard include/config/prove/locking.h) \
    $(wildcard include/config/panic/timeout.h) \
    $(wildcard include/config/tracing.h) \
    $(wildcard include/config/ftrace/mcount/record.h) \
  include/linux/limits.h \
  include/uapi/linux/limits.h \
  include/vdso/limits.h \
  include/linux/linkage.h \
    $(wildcard include/config/arch/use/sym/annotations.h) \
  include/linux/export.h \
    $(wildcard include/config/modversions.h) \
    $(wildcard include/config/module/rel/crcs.h) \
    $(wildcard include/config/have/arch/prel32/relocations.h) \
    $(wildcard include/config/cfi/clang.h) \
    $(wildcard include/config/modules.h) \
    $(wildcard include/config/trim/unused/ksyms.h) \
    $(wildcard include/config/sec/kunit.h) \
    $(wildcard include/config/kunit.h) \
    $(wildcard include/config/unused/symbols.h) \
  arch/arm64/include/asm/linkage.h \
    $(wildcard include/config/arm64/bti/kernel.h) \
  include/linux/bitops.h \
  include/linux/bits.h \
  include/linux/const.h \
  include/vdso/const.h \
  include/uapi/linux/const.h \
  include/vdso/bits.h \
  include/linux/build_bug.h \
  arch/arm64/include/asm/bitops.h \
  include/asm-generic/bitops/builtin-__ffs.h \
  include/asm-generic/bitops/builtin-ffs.h \
  include/asm-generic/bitops/builtin-__fls.h \
  include/asm-generic/bitops/builtin-fls.h \
  include/asm-generic/bitops/ffz.h \
  include/asm-generic/bitops/fls64.h \
  include/asm-generic/bitops/find.h \
    $(wildcard include/config/generic/find/first/bit.h) \
  include/asm-generic/bitops/sched.h \
  include/asm-generic/bitops/hweight.h \
  include/asm-generic/bitops/arch_hweight.h \
  include/asm-generic/bitops/const_hweight.h \
  include/asm-generic/bitops/atomic.h \
  include/linux/atomic.h \
  arch/arm64/include/asm/atomic.h \
  arch/arm64/include/asm/barrier.h \
    $(wildcard include/config/arm64/pseudo/nmi.h) \
  include/asm-generic/barrier.h \
  arch/arm64/include/asm/cmpxchg.h \
  arch/arm64/include/asm/lse.h \
    $(wildcard include/config/arm64/lse/atomics.h) \
  arch/arm64/include/asm/atomic_ll_sc.h \
    $(wildcard include/config/cc/has/k/constraint.h) \
  include/linux/jump_label.h \
    $(wildcard include/config/jump/label.h) \
    $(wildcard include/config/have/arch/jump/label/relative.h) \
  arch/arm64/include/asm/jump_label.h \
  arch/arm64/include/asm/insn.h \
  arch/arm64/include/asm/alternative.h \
  include/linux/init.h \
    $(wildcard include/config/strict/kernel/rwx.h) \
    $(wildcard include/config/strict/module/rwx.h) \
    $(wildcard include/config/lto/clang.h) \
  arch/arm64/include/asm/atomic_lse.h \
  include/linux/atomic-arch-fallback.h \
    $(wildcard include/config/generic/atomic64.h) \
  include/asm-generic/atomic-instrumented.h \
  include/linux/instrumented.h \
  include/asm-generic/atomic-long.h \
  include/asm-generic/bitops/lock.h \
  include/asm-generic/bitops/non-atomic.h \
  include/asm-generic/bitops/le.h \
  arch/arm64/include/uapi/asm/byteorder.h \
  include/linux/byteorder/little_endian.h \
  include/uapi/linux/byteorder/little_endian.h \
  include/linux/swab.h \
  include/uapi/linux/swab.h \
  arch/arm64/include/generated/uapi/asm/swab.h \
  include/uapi/asm-generic/swab.h \
  include/linux/byteorder/generic.h \
  include/asm-generic/bitops/ext2-atomic-setbit.h \
  include/linux/kstrtox.h \
  include/linux/log2.h \
    $(wildcard include/config/arch/has/ilog2/u32.h) \
    $(wildcard include/config/arch/has/ilog2/u64.h) \
  include/linux/minmax.h \
  include/linux/typecheck.h \
  include/linux/printk.h \
    $(wildcard include/config/sec/debug/auto/comment.h) \
    $(wildcard include/config/message/loglevel/default.h) \
    $(wildcard include/config/console/loglevel/default.h) \
    $(wildcard include/config/console/loglevel/quiet.h) \
    $(wildcard include/config/early/printk.h) \
    $(wildcard include/config/printk/nmi.h) \
    $(wildcard include/config/printk.h) \
    $(wildcard include/config/dynamic/debug.h) \
    $(wildcard include/config/dynamic/debug/core.h) \
  include/linux/kern_levels.h \
  include/linux/ratelimit_types.h \
  include/uapi/linux/param.h \
  arch/arm64/include/uapi/asm/param.h \
  include/asm-generic/param.h \
    $(wildcard include/config/hz.h) \
  include/uapi/asm-generic/param.h \
  include/linux/spinlock_types.h \
    $(wildcard include/config/debug/spinlock.h) \
    $(wildcard include/config/debug/lock/alloc.h) \
  arch/arm64/include/asm/spinlock_types.h \
  include/asm-generic/qspinlock_types.h \
    $(wildcard include/config/nr/cpus.h) \
    $(wildcard include/config/sec/debug/qspin/owner.h) \
  include/asm-generic/qrwlock_types.h \
  include/linux/lockdep_types.h \
    $(wildcard include/config/prove/raw/lock/nesting.h) \
    $(wildcard include/config/preempt/lock.h) \
    $(wildcard include/config/lockdep.h) \
    $(wildcard include/config/lock/stat.h) \
  include/linux/rwlock_types.h \
  arch/arm64/include/generated/asm/div64.h \
  include/asm-generic/div64.h \
  include/uapi/linux/kernel.h \
  include/uapi/linux/sysinfo.h \
  include/linux/mm.h \
    $(wildcard include/config/need/multiple/nodes.h) \
    $(wildcard include/config/sysctl.h) \
    $(wildcard include/config/have/arch/mmap/rnd/bits.h) \
    $(wildcard include/config/have/arch/mmap/rnd/compat/bits.h) \
    $(wildcard include/config/mem/soft/dirty.h) \
    $(wildcard include/config/arch/uses/high/vma/flags.h) \
    $(wildcard include/config/arch/has/pkeys.h) \
    $(wildcard include/config/ppc.h) \
    $(wildcard include/config/x86.h) \
    $(wildcard include/config/parisc.h) \
    $(wildcard include/config/ia64.h) \
    $(wildcard include/config/sparc64.h) \
    $(wildcard include/config/arm64/mte.h) \
    $(wildcard include/config/have/arch/userfaultfd/minor.h) \
    $(wildcard include/config/stack/growsup.h) \
    $(wildcard include/config/speculative/page/fault.h) \
    $(wildcard include/config/numa.h) \
    $(wildcard include/config/shmem.h) \
    $(wildcard include/config/transparent/hugepage.h) \
    $(wildcard include/config/hugetlb/page.h) \
    $(wildcard include/config/zone/device.h) \
    $(wildcard include/config/dev/pagemap/ops.h) \
    $(wildcard include/config/device/private.h) \
    $(wildcard include/config/pci/p2pdma.h) \
    $(wildcard include/config/sparsemem.h) \
    $(wildcard include/config/sparsemem/vmemmap.h) \
    $(wildcard include/config/numa/balancing.h) \
    $(wildcard include/config/kasan/hw/tags.h) \
    $(wildcard include/config/memcg.h) \
    $(wildcard include/config/highmem.h) \
    $(wildcard include/config/arch/has/pte/special.h) \
    $(wildcard include/config/arch/has/pte/devmap.h) \
    $(wildcard include/config/debug/vm/rb.h) \
    $(wildcard include/config/page/poisoning.h) \
    $(wildcard include/config/debug/pagealloc.h) \
    $(wildcard include/config/arch/has/set/direct/map.h) \
    $(wildcard include/config/hibernation.h) \
    $(wildcard include/config/memory/hotplug.h) \
    $(wildcard include/config/hugetlbfs.h) \
    $(wildcard include/config/kzerod.h) \
    $(wildcard include/config/mapping/dirty/helpers.h) \
    $(wildcard include/config/rbin.h) \
  include/linux/mmdebug.h \
    $(wildcard include/config/debug/vm.h) \
    $(wildcard include/config/debug/virtual.h) \
    $(wildcard include/config/debug/vm/pgflags.h) \
  include/linux/gfp.h \
    $(wildcard include/config/cma.h) \
    $(wildcard include/config/zone/dma.h) \
    $(wildcard include/config/zone/dma32.h) \
    $(wildcard include/config/pm/sleep.h) \
    $(wildcard include/config/contig/alloc.h) \
    $(wildcard include/config/hpa.h) \
  include/linux/mmzone.h \
    $(wildcard include/config/force/max/zoneorder.h) \
    $(wildcard include/config/memory/isolation.h) \
    $(wildcard include/config/shadow/call/stack.h) \
    $(wildcard include/config/compaction.h) \
    $(wildcard include/config/discontigmem.h) \
    $(wildcard include/config/flat/node/mem/map.h) \
    $(wildcard include/config/page/extension.h) \
    $(wildcard include/config/deferred/struct/page/init.h) \
    $(wildcard include/config/have/memoryless/nodes.h) \
    $(wildcard include/config/flatmem.h) \
    $(wildcard include/config/sparsemem/extreme.h) \
    $(wildcard include/config/memory/hotremove.h) \
    $(wildcard include/config/have/arch/pfn/valid.h) \
    $(wildcard include/config/holes/in/zone.h) \
  include/linux/spinlock.h \
    $(wildcard include/config/preemption.h) \
  include/linux/preempt.h \
    $(wildcard include/config/preempt/count.h) \
    $(wildcard include/config/debug/preempt.h) \
    $(wildcard include/config/trace/preempt/toggle.h) \
    $(wildcard include/config/preempt/notifiers.h) \
  include/linux/list.h \
    $(wildcard include/config/debug/list.h) \
  include/linux/poison.h \
    $(wildcard include/config/illegal/pointer/value.h) \
  arch/arm64/include/asm/preempt.h \
  include/linux/thread_info.h \
    $(wildcard include/config/thread/info/in/task.h) \
    $(wildcard include/config/have/arch/within/stack/frames.h) \
    $(wildcard include/config/hardened/usercopy.h) \
  include/linux/restart_block.h \
  include/linux/time64.h \
  include/linux/math64.h \
    $(wildcard include/config/arch/supports/int128.h) \
  include/vdso/math64.h \
  include/vdso/time64.h \
  include/uapi/linux/time.h \
  include/uapi/linux/time_types.h \
  arch/arm64/include/asm/current.h \
  arch/arm64/include/asm/thread_info.h \
    $(wildcard include/config/arm64/sw/ttbr0/pan.h) \
  arch/arm64/include/asm/memory.h \
    $(wildcard include/config/arm64/va/bits.h) \
    $(wildcard include/config/kasan/shadow/offset.h) \
    $(wildcard include/config/kasan.h) \
    $(wildcard include/config/vmap/stack.h) \
    $(wildcard include/config/arm64/4k/pages.h) \
    $(wildcard include/config/efi.h) \
    $(wildcard include/config/arm/gic/v3/its.h) \
  include/linux/sizes.h \
  arch/arm64/include/asm/page-def.h \
    $(wildcard include/config/arm64/page/shift.h) \
  include/asm-generic/memory_model.h \
  include/linux/pfn.h \
  arch/arm64/include/asm/stack_pointer.h \
  include/linux/irqflags.h \
    $(wildcard include/config/trace/irqflags.h) \
    $(wildcard include/config/irqsoff/tracer.h) \
    $(wildcard include/config/preempt/tracer.h) \
    $(wildcard include/config/trace/irqflags/support.h) \
  arch/arm64/include/asm/irqflags.h \
  arch/arm64/include/asm/ptrace.h \
    $(wildcard include/config/compat.h) \
  arch/arm64/include/asm/cpufeature.h \
    $(wildcard include/config/arm64/sve.h) \
    $(wildcard include/config/arm64/cnp.h) \
    $(wildcard include/config/arm64/ptr/auth.h) \
    $(wildcard include/config/arm64/debug/priority/masking.h) \
    $(wildcard include/config/arm64/bti.h) \
    $(wildcard include/config/arm64/tlb/range.h) \
    $(wildcard include/config/arm64/pa/bits.h) \
    $(wildcard include/config/arm64/hw/afdbm.h) \
    $(wildcard include/config/arm64/amu/extn.h) \
  arch/arm64/include/asm/cputype.h \
  arch/arm64/include/asm/sysreg.h \
    $(wildcard include/config/broken/gas/inst.h) \
    $(wildcard include/config/arm64/pa/bits/52.h) \
    $(wildcard include/config/arm64/16k/pages.h) \
    $(wildcard include/config/arm64/64k/pages.h) \
  include/linux/kasan-tags.h \
  arch/arm64/include/asm/hwcap.h \
  arch/arm64/include/uapi/asm/hwcap.h \
  arch/arm64/include/uapi/asm/ptrace.h \
  arch/arm64/include/uapi/asm/sve_context.h \
  arch/arm64/include/asm/percpu.h \
  include/asm-generic/percpu.h \
    $(wildcard include/config/have/setup/per/cpu/area.h) \
  include/linux/threads.h \
    $(wildcard include/config/base/small.h) \
  include/linux/percpu-defs.h \
    $(wildcard include/config/debug/force/weak/per/cpu.h) \
    $(wildcard include/config/amd/mem/encrypt.h) \
  include/linux/bottom_half.h \
  include/linux/lockdep.h \
    $(wildcard include/config/debug/locking/api/selftests.h) \
  include/linux/smp.h \
    $(wildcard include/config/up/late/init.h) \
  include/linux/cpumask.h \
    $(wildcard include/config/cpumask/offstack.h) \
    $(wildcard include/config/hotplug/cpu.h) \
    $(wildcard include/config/debug/per/cpu/maps.h) \
  include/linux/bitmap.h \
  include/linux/smp_types.h \
  include/linux/llist.h \
    $(wildcard include/config/arch/have/nmi/safe/cmpxchg.h) \
  arch/arm64/include/asm/smp.h \
    $(wildcard include/config/arm64/acpi/parking/protocol.h) \
  arch/arm64/include/generated/asm/mmiowb.h \
  include/asm-generic/mmiowb.h \
    $(wildcard include/config/mmiowb.h) \
  arch/arm64/include/asm/spinlock.h \
  arch/arm64/include/generated/asm/qrwlock.h \
  include/asm-generic/qrwlock.h \
  arch/arm64/include/asm/processor.h \
    $(wildcard include/config/kuser/helpers.h) \
    $(wildcard include/config/arm64/force/52bit.h) \
    $(wildcard include/config/have/hw/breakpoint.h) \
    $(wildcard include/config/arm64/tagged/addr/abi.h) \
    $(wildcard include/config/gcc/plugin/stackleak.h) \
  include/linux/cache.h \
    $(wildcard include/config/arch/has/cache/line/size.h) \
  arch/arm64/include/asm/cache.h \
  arch/arm64/include/asm/mte-def.h \
  include/linux/kasan-enabled.h \
  include/linux/static_key.h \
  include/linux/android_vendor.h \
    $(wildcard include/config/android/vendor/oem/data.h) \
  include/vdso/processor.h \
  arch/arm64/include/asm/vdso/processor.h \
  arch/arm64/include/asm/hw_breakpoint.h \
  arch/arm64/include/asm/virt.h \
    $(wildcard include/config/kvm.h) \
  arch/arm64/include/asm/sections.h \
  include/asm-generic/sections.h \
  arch/arm64/include/asm/kasan.h \
  arch/arm64/include/asm/mte-kasan.h \
  arch/arm64/include/asm/pgtable-types.h \
    $(wildcard include/config/pgtable/levels.h) \
  include/asm-generic/pgtable-nopud.h \
  include/asm-generic/pgtable-nop4d.h \
  arch/arm64/include/asm/pgtable-hwdef.h \
    $(wildcard include/config/arm64/cont/pte/shift.h) \
    $(wildcard include/config/arm64/cont/pmd/shift.h) \
    $(wildcard include/config/arm64/va/bits/52.h) \
  arch/arm64/include/asm/pointer_auth.h \
  include/uapi/linux/prctl.h \
  include/linux/random.h \
    $(wildcard include/config/arch/random.h) \
  include/linux/once.h \
  include/uapi/linux/random.h \
  include/uapi/linux/ioctl.h \
  arch/arm64/include/generated/uapi/asm/ioctl.h \
  include/asm-generic/ioctl.h \
  include/uapi/asm-generic/ioctl.h \
  include/linux/irqnr.h \
  include/uapi/linux/irqnr.h \
  include/linux/prandom.h \
  include/linux/percpu.h \
    $(wildcard include/config/need/per/cpu/embed/first/chunk.h) \
    $(wildcard include/config/need/per/cpu/page/first/chunk.h) \
  include/linux/siphash.h \
    $(wildcard include/config/have/efficient/unaligned/access.h) \
  arch/arm64/include/asm/archrandom.h \
  arch/arm64/include/asm/spectre.h \
  arch/arm64/include/asm/fpsimd.h \
  arch/arm64/include/uapi/asm/sigcontext.h \
  arch/arm64/include/generated/asm/qspinlock.h \
  include/asm-generic/qspinlock.h \
  include/linux/rwlock.h \
    $(wildcard include/config/preempt.h) \
  include/linux/spinlock_api_smp.h \
    $(wildcard include/config/inline/spin/lock.h) \
    $(wildcard include/config/inline/spin/lock/bh.h) \
    $(wildcard include/config/inline/spin/lock/irq.h) \
    $(wildcard include/config/inline/spin/lock/irqsave.h) \
    $(wildcard include/config/inline/spin/trylock.h) \
    $(wildcard include/config/inline/spin/trylock/bh.h) \
    $(wildcard include/config/uninline/spin/unlock.h) \
    $(wildcard include/config/inline/spin/unlock/bh.h) \
    $(wildcard include/config/inline/spin/unlock/irq.h) \
    $(wildcard include/config/inline/spin/unlock/irqrestore.h) \
    $(wildcard include/config/generic/lockbreak.h) \
  include/linux/rwlock_api_smp.h \
    $(wildcard include/config/inline/read/lock.h) \
    $(wildcard include/config/inline/write/lock.h) \
    $(wildcard include/config/inline/read/lock/bh.h) \
    $(wildcard include/config/inline/write/lock/bh.h) \
    $(wildcard include/config/inline/read/lock/irq.h) \
    $(wildcard include/config/inline/write/lock/irq.h) \
    $(wildcard include/config/inline/read/lock/irqsave.h) \
    $(wildcard include/config/inline/write/lock/irqsave.h) \
    $(wildcard include/config/inline/read/trylock.h) \
    $(wildcard include/config/inline/write/trylock.h) \
    $(wildcard include/config/inline/read/unlock.h) \
    $(wildcard include/config/inline/write/unlock.h) \
    $(wildcard include/config/inline/read/unlock/bh.h) \
    $(wildcard include/config/inline/write/unlock/bh.h) \
    $(wildcard include/config/inline/read/unlock/irq.h) \
    $(wildcard include/config/inline/write/unlock/irq.h) \
    $(wildcard include/config/inline/read/unlock/irqrestore.h) \
    $(wildcard include/config/inline/write/unlock/irqrestore.h) \
  include/linux/wait.h \
  include/uapi/linux/wait.h \
  include/linux/numa.h \
    $(wildcard include/config/nodes/shift.h) \
    $(wildcard include/config/numa/keep/meminfo.h) \
  include/linux/seqlock.h \
  include/linux/mutex.h \
    $(wildcard include/config/mutex/spin/on/owner.h) \
    $(wildcard include/config/debug/mutexes.h) \
  include/linux/osq_lock.h \
  include/linux/debug_locks.h \
  include/linux/ww_mutex.h \
    $(wildcard include/config/debug/ww/mutex/slowpath.h) \
  include/linux/nodemask.h \
  include/linux/pageblock-flags.h \
    $(wildcard include/config/hugetlb/page/size/variable.h) \
  include/linux/page-flags-layout.h \
  include/generated/bounds.h \
  arch/arm64/include/asm/sparsemem.h \
  include/linux/mm_types.h \
    $(wildcard include/config/have/aligned/struct/page.h) \
    $(wildcard include/config/userfaultfd.h) \
    $(wildcard include/config/swap.h) \
    $(wildcard include/config/have/arch/compat/mmap/bases.h) \
    $(wildcard include/config/membarrier.h) \
    $(wildcard include/config/aio.h) \
    $(wildcard include/config/mmu/notifier.h) \
    $(wildcard include/config/arch/want/batched/unmap/tlb/flush.h) \
    $(wildcard include/config/iommu/support.h) \
  include/linux/mm_types_task.h \
    $(wildcard include/config/split/ptlock/cpus.h) \
    $(wildcard include/config/arch/enable/split/pmd/ptlock.h) \
  arch/arm64/include/asm/page.h \
  include/linux/personality.h \
  include/uapi/linux/personality.h \
  include/asm-generic/getorder.h \
  include/linux/auxvec.h \
  include/uapi/linux/auxvec.h \
  arch/arm64/include/uapi/asm/auxvec.h \
  include/linux/rbtree.h \
    $(wildcard include/config/skb/tracer.h) \
  include/linux/rcupdate.h \
    $(wildcard include/config/preempt/rcu.h) \
    $(wildcard include/config/tiny/rcu.h) \
    $(wildcard include/config/tasks/rcu/generic.h) \
    $(wildcard include/config/rcu/stall/common.h) \
    $(wildcard include/config/no/hz/full.h) \
    $(wildcard include/config/rcu/nocb/cpu.h) \
    $(wildcard include/config/tasks/rcu.h) \
    $(wildcard include/config/tasks/trace/rcu.h) \
    $(wildcard include/config/tasks/rude/rcu.h) \
    $(wildcard include/config/tree/rcu.h) \
    $(wildcard include/config/debug/objects/rcu/head.h) \
    $(wildcard include/config/prove/rcu.h) \
    $(wildcard include/config/rcu/boost.h) \
    $(wildcard include/config/arch/weak/release/acquire.h) \
  include/linux/rcutree.h \
  include/linux/rwsem.h \
    $(wildcard include/config/rwsem/spin/on/owner.h) \
    $(wildcard include/config/debug/rwsems.h) \
  include/linux/completion.h \
  include/linux/swait.h \
  include/linux/uprobes.h \
    $(wildcard include/config/uprobes.h) \
  arch/arm64/include/asm/uprobes.h \
  arch/arm64/include/asm/debug-monitors.h \
  arch/arm64/include/asm/esr.h \
  arch/arm64/include/asm/probes.h \
    $(wildcard include/config/kprobes.h) \
  include/linux/workqueue.h \
    $(wildcard include/config/debug/objects/work.h) \
    $(wildcard include/config/freezer.h) \
    $(wildcard include/config/sysfs.h) \
    $(wildcard include/config/wq/watchdog.h) \
  include/linux/timer.h \
    $(wildcard include/config/debug/objects/timers.h) \
    $(wildcard include/config/no/hz/common.h) \
  include/linux/ktime.h \
  include/linux/time.h \
    $(wildcard include/config/arch/uses/gettimeoffset.h) \
    $(wildcard include/config/posix/timers.h) \
  include/linux/time32.h \
  include/linux/timex.h \
  include/uapi/linux/timex.h \
  arch/arm64/include/asm/timex.h \
  arch/arm64/include/asm/arch_timer.h \
    $(wildcard include/config/arm/arch/timer/ool/workaround.h) \
  include/clocksource/arm_arch_timer.h \
    $(wildcard include/config/arm/arch/timer.h) \
  include/linux/timecounter.h \
  include/asm-generic/timex.h \
  include/vdso/time32.h \
  include/vdso/time.h \
  include/linux/jiffies.h \
  include/vdso/jiffies.h \
  include/generated/timeconst.h \
  include/vdso/ktime.h \
  include/linux/timekeeping.h \
  include/linux/timekeeping32.h \
  include/linux/debugobjects.h \
    $(wildcard include/config/sec/debug/objects/additional/info.h) \
    $(wildcard include/config/debug/objects.h) \
    $(wildcard include/config/debug/objects/free.h) \
  include/linux/android_kabi.h \
    $(wildcard include/config/android/kabi/reserve.h) \
  arch/arm64/include/asm/mmu.h \
  include/linux/refcount.h \
  include/linux/page-flags.h \
    $(wildcard include/config/arch/uses/pg/uncached.h) \
    $(wildcard include/config/memory/failure.h) \
    $(wildcard include/config/page/idle/flag.h) \
    $(wildcard include/config/thp/swap.h) \
    $(wildcard include/config/ksm.h) \
  include/linux/memory_hotplug.h \
    $(wildcard include/config/arch/has/add/pages.h) \
    $(wildcard include/config/have/arch/nodedata/extension.h) \
    $(wildcard include/config/have/bootmem/info/node.h) \
  include/linux/notifier.h \
    $(wildcard include/config/tree/srcu.h) \
  include/linux/srcu.h \
    $(wildcard include/config/tiny/srcu.h) \
    $(wildcard include/config/srcu.h) \
  include/linux/rcu_segcblist.h \
  include/linux/srcutree.h \
  include/linux/rcu_node_tree.h \
    $(wildcard include/config/rcu/fanout.h) \
    $(wildcard include/config/rcu/fanout/leaf.h) \
  include/linux/topology.h \
    $(wildcard include/config/use/percpu/numa/node/id.h) \
    $(wildcard include/config/sched/smt.h) \
  include/linux/arch_topology.h \
    $(wildcard include/config/generic/arch/topology.h) \
  arch/arm64/include/asm/topology.h \
  include/asm-generic/topology.h \
  include/linux/mmap_lock.h \
  include/linux/range.h \
  include/linux/percpu-refcount.h \
  include/linux/bit_spinlock.h \
  include/linux/shrinker.h \
  include/linux/resource.h \
  include/uapi/linux/resource.h \
  arch/arm64/include/generated/uapi/asm/resource.h \
  include/asm-generic/resource.h \
  include/uapi/asm-generic/resource.h \
  include/linux/page_ext.h \
    $(wildcard include/config/page/pinner.h) \
  include/linux/stacktrace.h \
    $(wildcard include/config/stacktrace.h) \
    $(wildcard include/config/arch/stackwalk.h) \
    $(wildcard include/config/have/reliable/stacktrace.h) \
  include/linux/stackdepot.h \
    $(wildcard include/config/stackdepot.h) \
  include/linux/page_ref.h \
    $(wildcard include/config/debug/page/ref.h) \
  include/linux/tracepoint-defs.h \
    $(wildcard include/config/tracepoints.h) \
  include/linux/memremap.h \
  include/linux/ioport.h \
    $(wildcard include/config/io/strict/devmem.h) \
  include/linux/overflow.h \
  include/linux/sched.h \
    $(wildcard include/config/virt/cpu/accounting/native.h) \
    $(wildcard include/config/sched/info.h) \
    $(wildcard include/config/schedstats.h) \
    $(wildcard include/config/fair/group/sched.h) \
    $(wildcard include/config/rt/group/sched.h) \
    $(wildcard include/config/rt/mutexes.h) \
    $(wildcard include/config/uclamp/task.h) \
    $(wildcard include/config/uclamp/buckets/count.h) \
    $(wildcard include/config/cgroup/sched.h) \
    $(wildcard include/config/blk/dev/io/trace.h) \
    $(wildcard include/config/psi.h) \
    $(wildcard include/config/compat/brk.h) \
    $(wildcard include/config/cgroups.h) \
    $(wildcard include/config/blk/cgroup.h) \
    $(wildcard include/config/stackprotector.h) \
    $(wildcard include/config/arch/has/scaled/cputime.h) \
    $(wildcard include/config/cpu/freq/times.h) \
    $(wildcard include/config/virt/cpu/accounting/gen.h) \
    $(wildcard include/config/posix/cputimers.h) \
    $(wildcard include/config/posix/cpu/timers/task/work.h) \
    $(wildcard include/config/keys.h) \
    $(wildcard include/config/sysvipc.h) \
    $(wildcard include/config/detect/hung/task.h) \
    $(wildcard include/config/io/uring.h) \
    $(wildcard include/config/audit.h) \
    $(wildcard include/config/auditsyscall.h) \
    $(wildcard include/config/ubsan.h) \
    $(wildcard include/config/ubsan/trap.h) \
    $(wildcard include/config/block.h) \
    $(wildcard include/config/task/xacct.h) \
    $(wildcard include/config/cpusets.h) \
    $(wildcard include/config/x86/cpu/resctrl.h) \
    $(wildcard include/config/futex.h) \
    $(wildcard include/config/perf/events.h) \
    $(wildcard include/config/rseq.h) \
    $(wildcard include/config/task/delay/acct.h) \
    $(wildcard include/config/fault/injection.h) \
    $(wildcard include/config/latencytop.h) \
    $(wildcard include/config/function/graph/tracer.h) \
    $(wildcard include/config/kcov.h) \
    $(wildcard include/config/bcache.h) \
    $(wildcard include/config/livepatch.h) \
    $(wildcard include/config/security.h) \
    $(wildcard include/config/x86/mce.h) \
    $(wildcard include/config/rt/softint/optimization.h) \
    $(wildcard include/config/arch/task/struct/on/stack.h) \
    $(wildcard include/config/debug/rseq.h) \
  include/uapi/linux/sched.h \
  include/linux/pid.h \
  include/linux/rculist.h \
    $(wildcard include/config/prove/rcu/list.h) \
  include/linux/sem.h \
  include/uapi/linux/sem.h \
  include/linux/ipc.h \
  include/linux/uidgid.h \
    $(wildcard include/config/multiuser.h) \
    $(wildcard include/config/user/ns.h) \
  include/linux/highuid.h \
  include/linux/rhashtable-types.h \
  include/uapi/linux/ipc.h \
  arch/arm64/include/generated/uapi/asm/ipcbuf.h \
  include/uapi/asm-generic/ipcbuf.h \
  arch/arm64/include/generated/uapi/asm/sembuf.h \
  include/uapi/asm-generic/sembuf.h \
  include/linux/shm.h \
  include/uapi/linux/shm.h \
  include/uapi/asm-generic/hugetlb_encode.h \
  arch/arm64/include/generated/uapi/asm/shmbuf.h \
  include/uapi/asm-generic/shmbuf.h \
  arch/arm64/include/asm/shmparam.h \
  include/asm-generic/shmparam.h \
  include/linux/kcov.h \
  include/uapi/linux/kcov.h \
  include/linux/plist.h \
    $(wildcard include/config/debug/plist.h) \
  include/linux/hrtimer.h \
    $(wildcard include/config/high/res/timers.h) \
    $(wildcard include/config/time/low/res.h) \
    $(wildcard include/config/timerfd.h) \
  include/linux/hrtimer_defs.h \
  include/linux/timerqueue.h \
  include/linux/seccomp.h \
    $(wildcard include/config/seccomp.h) \
    $(wildcard include/config/have/arch/seccomp/filter.h) \
    $(wildcard include/config/seccomp/filter.h) \
    $(wildcard include/config/checkpoint/restore.h) \
  include/uapi/linux/seccomp.h \
  arch/arm64/include/asm/seccomp.h \
  arch/arm64/include/asm/unistd.h \
  arch/arm64/include/uapi/asm/unistd.h \
  include/uapi/asm-generic/unistd.h \
  include/asm-generic/seccomp.h \
  include/uapi/linux/unistd.h \
  include/linux/latencytop.h \
  include/linux/sched/prio.h \
  include/linux/sched/types.h \
  include/linux/signal_types.h \
    $(wildcard include/config/old/sigaction.h) \
  include/uapi/linux/signal.h \
  arch/arm64/include/asm/signal.h \
  arch/arm64/include/uapi/asm/signal.h \
  include/asm-generic/signal.h \
  include/uapi/asm-generic/signal.h \
  include/uapi/asm-generic/signal-defs.h \
  arch/arm64/include/generated/uapi/asm/siginfo.h \
  include/uapi/asm-generic/siginfo.h \
  include/linux/task_io_accounting.h \
    $(wildcard include/config/task/io/accounting.h) \
  include/linux/posix-timers.h \
  include/linux/alarmtimer.h \
    $(wildcard include/config/rtc/class.h) \
  include/linux/task_work.h \
  include/uapi/linux/rseq.h \
  include/linux/kcsan.h \
  include/linux/pgtable.h \
    $(wildcard include/config/highpte.h) \
    $(wildcard include/config/have/arch/transparent/hugepage/pud.h) \
    $(wildcard include/config/have/arch/soft/dirty.h) \
    $(wildcard include/config/arch/enable/thp/migration.h) \
    $(wildcard include/config/have/arch/huge/vmap.h) \
    $(wildcard include/config/x86/espfix64.h) \
  arch/arm64/include/asm/pgtable.h \
  arch/arm64/include/asm/proc-fns.h \
  arch/arm64/include/asm/mte.h \
  include/linux/bitfield.h \
  arch/arm64/include/asm/pgtable-prot.h \
    $(wildcard include/config/rkp.h) \
  arch/arm64/include/asm/tlbflush.h \
    $(wildcard include/config/arm64/workaround/dsb/after/tlbi.h) \
    $(wildcard include/config/arm64/workaround/repeat/tlbi.h) \
  arch/arm64/include/asm/fixmap.h \
    $(wildcard include/config/acpi/apei/ghes.h) \
    $(wildcard include/config/arm/sde/interface.h) \
    $(wildcard include/config/unmap/kernel/at/el0.h) \
  arch/arm64/include/asm/boot.h \
  include/asm-generic/fixmap.h \
  include/asm-generic/pgtable_uffd.h \
    $(wildcard include/config/have/arch/userfaultfd/wp.h) \
  include/linux/kasan.h \
    $(wildcard include/config/kasan/stack.h) \
    $(wildcard include/config/kasan/vmalloc.h) \
    $(wildcard include/config/kasan/inline.h) \
  include/linux/page_pinner.h \
  include/linux/huge_mm.h \
  include/linux/sched/coredump.h \
    $(wildcard include/config/core/dump/default/elf/headers.h) \
  include/linux/fs.h \
    $(wildcard include/config/read/only/thp/for/fs.h) \
    $(wildcard include/config/fs/posix/acl.h) \
    $(wildcard include/config/cgroup/writeback.h) \
    $(wildcard include/config/ima.h) \
    $(wildcard include/config/file/locking.h) \
    $(wildcard include/config/fsnotify.h) \
    $(wildcard include/config/fs/encryption.h) \
    $(wildcard include/config/fs/verity.h) \
    $(wildcard include/config/epoll.h) \
    $(wildcard include/config/unicode.h) \
    $(wildcard include/config/quota.h) \
    $(wildcard include/config/fs/dax.h) \
    $(wildcard include/config/mandatory/file/locking.h) \
    $(wildcard include/config/migration.h) \
  include/linux/wait_bit.h \
  include/linux/kdev_t.h \
  include/uapi/linux/kdev_t.h \
  include/linux/dcache.h \
  include/linux/rculist_bl.h \
  include/linux/list_bl.h \
  include/linux/lockref.h \
    $(wildcard include/config/arch/use/cmpxchg/lockref.h) \
  include/linux/stringhash.h \
    $(wildcard include/config/dcache/word/access.h) \
  include/linux/hash.h \
    $(wildcard include/config/have/arch/hash.h) \
  include/linux/path.h \
  include/linux/stat.h \
  arch/arm64/include/asm/stat.h \
  arch/arm64/include/generated/uapi/asm/stat.h \
  include/uapi/asm-generic/stat.h \
  arch/arm64/include/asm/compat.h \
  include/asm-generic/compat.h \
    $(wildcard include/config/compat/for/u64/alignment.h) \
  include/linux/sched/task_stack.h \
    $(wildcard include/config/debug/stack/usage.h) \
  include/uapi/linux/magic.h \
  include/uapi/linux/stat.h \
  include/linux/list_lru.h \
    $(wildcard include/config/memcg/kmem.h) \
  include/linux/radix-tree.h \
  include/linux/xarray.h \
    $(wildcard include/config/xarray/multi.h) \
  include/linux/local_lock.h \
  include/linux/local_lock_internal.h \
  include/linux/capability.h \
  include/uapi/linux/capability.h \
  include/linux/semaphore.h \
  include/linux/fcntl.h \
    $(wildcard include/config/arch/32bit/off/t.h) \
  include/uapi/linux/fcntl.h \
  arch/arm64/include/uapi/asm/fcntl.h \
  include/uapi/asm-generic/fcntl.h \
  include/uapi/linux/openat2.h \
  include/linux/migrate_mode.h \
  include/linux/percpu-rwsem.h \
  include/linux/rcuwait.h \
  include/linux/sched/signal.h \
    $(wildcard include/config/sched/autogroup.h) \
    $(wildcard include/config/bsd/process/acct.h) \
    $(wildcard include/config/taskstats.h) \
  include/linux/signal.h \
    $(wildcard include/config/proc/fs.h) \
  include/linux/sched/jobctl.h \
  include/linux/sched/task.h \
    $(wildcard include/config/have/exit/thread.h) \
    $(wildcard include/config/arch/wants/dynamic/task/struct.h) \
    $(wildcard include/config/have/arch/thread/struct/whitelist.h) \
  include/linux/uaccess.h \
    $(wildcard include/config/set/fs.h) \
  include/linux/fault-inject-usercopy.h \
    $(wildcard include/config/fault/injection/usercopy.h) \
  arch/arm64/include/asm/uaccess.h \
    $(wildcard include/config/arm64/uao.h) \
    $(wildcard include/config/arm64/pan.h) \
  arch/arm64/include/asm/kernel-pgtable.h \
    $(wildcard include/config/randomize/base.h) \
  arch/arm64/include/asm/extable.h \
    $(wildcard include/config/bpf/jit.h) \
  include/linux/cred.h \
    $(wildcard include/config/kdp.h) \
    $(wildcard include/config/debug/credentials.h) \
    $(wildcard include/config/kdp/cred.h) \
  include/linux/key.h \
    $(wildcard include/config/key/notifications.h) \
    $(wildcard include/config/net.h) \
  include/linux/sysctl.h \
  include/uapi/linux/sysctl.h \
  include/linux/assoc_array.h \
    $(wildcard include/config/associative/array.h) \
  include/linux/sched/user.h \
    $(wildcard include/config/fanotify.h) \
    $(wildcard include/config/posix/mqueue.h) \
    $(wildcard include/config/bpf/syscall.h) \
    $(wildcard include/config/watch/queue.h) \
  include/linux/ratelimit.h \
  include/linux/kdp.h \
    $(wildcard include/config/kdp/test.h) \
    $(wildcard include/config/kdp/ns.h) \
  include/linux/uh.h \
  include/linux/rcu_sync.h \
  include/linux/delayed_call.h \
  include/linux/uuid.h \
  include/uapi/linux/uuid.h \
  include/linux/errseq.h \
  include/linux/ioprio.h \
  include/linux/sched/rt.h \
  include/linux/iocontext.h \
  include/linux/fs_types.h \
  include/uapi/linux/fs.h \
  include/linux/quota.h \
    $(wildcard include/config/quota/netlink/interface.h) \
  include/linux/percpu_counter.h \
  include/uapi/linux/dqblk_xfs.h \
  include/linux/dqblk_v1.h \
  include/linux/dqblk_v2.h \
  include/linux/dqblk_qtree.h \
  include/linux/projid.h \
  include/uapi/linux/quota.h \
  include/linux/nfs_fs_i.h \
  include/linux/vmstat.h \
    $(wildcard include/config/vm/event/counters.h) \
    $(wildcard include/config/debug/tlbflush.h) \
    $(wildcard include/config/debug/vm/vmacache.h) \
  include/linux/vm_event_item.h \
    $(wildcard include/config/memory/balloon.h) \
    $(wildcard include/config/balloon/compaction.h) \
  arch/arm64/include/asm/io.h \
  include/linux/log_mmiorw.h \
    $(wildcard include/config/trace/mmio/access.h) \
  arch/arm64/include/generated/asm/early_ioremap.h \
  include/asm-generic/early_ioremap.h \
    $(wildcard include/config/generic/early/ioremap.h) \
  include/asm-generic/io.h \
    $(wildcard include/config/generic/iomap.h) \
    $(wildcard include/config/generic/ioremap.h) \
    $(wildcard include/config/has/ioport/map.h) \
    $(wildcard include/config/virt/to/bus.h) \
  include/asm-generic/pci_iomap.h \
    $(wildcard include/config/pci.h) \
    $(wildcard include/config/no/generic/pci/ioport/map.h) \
    $(wildcard include/config/generic/pci/iomap.h) \
  include/linux/logic_pio.h \
    $(wildcard include/config/indirect/pio.h) \
  include/linux/fwnode.h \
  include/linux/vmalloc.h \
  arch/arm64/include/asm/vmalloc.h \
  include/linux/dma-mapping.h \
    $(wildcard include/config/dma/api/debug.h) \
    $(wildcard include/config/has/dma.h) \
    $(wildcard include/config/need/dma/map/state.h) \
  include/linux/device.h \
    $(wildcard include/config/debug/devres.h) \
    $(wildcard include/config/energy/model.h) \
    $(wildcard include/config/generic/msi/irq/domain.h) \
    $(wildcard include/config/pinctrl.h) \
    $(wildcard include/config/generic/msi/irq.h) \
    $(wildcard include/config/dma/ops.h) \
    $(wildcard include/config/dma/declare/coherent.h) \
    $(wildcard include/config/dma/cma.h) \
    $(wildcard include/config/arch/has/sync/dma/for/device.h) \
    $(wildcard include/config/arch/has/sync/dma/for/cpu.h) \
    $(wildcard include/config/arch/has/sync/dma/for/cpu/all.h) \
    $(wildcard include/config/dma/ops/bypass.h) \
    $(wildcard include/config/of.h) \
    $(wildcard include/config/devtmpfs.h) \
    $(wildcard include/config/sysfs/deprecated.h) \
  include/linux/dev_printk.h \
  include/linux/energy_model.h \
  include/linux/kobject.h \
    $(wildcard include/config/uevent/helper.h) \
    $(wildcard include/config/debug/kobject/release.h) \
  include/linux/sysfs.h \
  include/linux/kernfs.h \
    $(wildcard include/config/kernfs.h) \
  include/linux/idr.h \
  include/linux/kobject_ns.h \
  include/linux/kref.h \
  include/linux/sched/cpufreq.h \
    $(wildcard include/config/cpu/freq.h) \
  include/linux/sched/topology.h \
    $(wildcard include/config/sched/debug.h) \
    $(wildcard include/config/sched/mc.h) \
  include/linux/sched/idle.h \
  include/linux/sched/sd_flags.h \
  include/linux/klist.h \
  include/linux/pm.h \
    $(wildcard include/config/vt/console/sleep.h) \
    $(wildcard include/config/pm.h) \
    $(wildcard include/config/pm/clk.h) \
    $(wildcard include/config/pm/generic/domains.h) \
  include/linux/device/bus.h \
    $(wildcard include/config/acpi.h) \
  include/linux/device/class.h \
  include/linux/device/driver.h \
  arch/arm64/include/asm/device.h \
  include/linux/pm_wakeup.h \
  include/linux/dma-direction.h \
  include/linux/mem_encrypt.h \
    $(wildcard include/config/arch/has/mem/encrypt.h) \
  include/linux/dma-fence.h \
    $(wildcard include/config/dma/fence/trace.h) \
  include/linux/rmap.h \
    $(wildcard include/config/page/boost.h) \
  include/linux/slab.h \
    $(wildcard include/config/debug/slab.h) \
    $(wildcard include/config/failslab.h) \
    $(wildcard include/config/have/hardened/usercopy/allocator.h) \
    $(wildcard include/config/slab.h) \
    $(wildcard include/config/slub.h) \
    $(wildcard include/config/slob.h) \
  include/linux/memcontrol.h \
    $(wildcard include/config/memcg/heimdall.h) \
    $(wildcard include/config/memcg/swap.h) \
  include/linux/cgroup.h \
    $(wildcard include/config/cgroup/cpuacct.h) \
    $(wildcard include/config/sock/cgroup/data.h) \
    $(wildcard include/config/cgroup/net/prio.h) \
    $(wildcard include/config/cgroup/net/classid.h) \
    $(wildcard include/config/cgroup/data.h) \
    $(wildcard include/config/cgroup/bpf.h) \
  include/uapi/linux/cgroupstats.h \
  include/uapi/linux/taskstats.h \
  include/linux/seq_file.h \
  include/linux/ns_common.h \
  include/linux/nsproxy.h \
  include/linux/user_namespace.h \
    $(wildcard include/config/inotify/user.h) \
    $(wildcard include/config/persistent/keyrings.h) \
  include/linux/kernel_stat.h \
  include/linux/interrupt.h \
    $(wildcard include/config/irq/forced/threading.h) \
    $(wildcard include/config/generic/irq/probe.h) \
    $(wildcard include/config/irq/timings.h) \
  include/linux/irqreturn.h \
  include/linux/hardirq.h \
  include/linux/context_tracking_state.h \
    $(wildcard include/config/context/tracking.h) \
  include/linux/ftrace_irq.h \
    $(wildcard include/config/hwlat/tracer.h) \
  include/linux/vtime.h \
    $(wildcard include/config/virt/cpu/accounting.h) \
    $(wildcard include/config/irq/time/accounting.h) \
  arch/arm64/include/asm/hardirq.h \
  arch/arm64/include/asm/irq.h \
  include/asm-generic/irq.h \
  arch/arm64/include/asm/kvm_arm.h \
  include/linux/irq_cpustat.h \
  include/linux/cgroup-defs.h \
  include/linux/u64_stats_sync.h \
  arch/arm64/include/generated/asm/local64.h \
  include/asm-generic/local64.h \
  arch/arm64/include/generated/asm/local.h \
  include/asm-generic/local.h \
  include/linux/bpf-cgroup.h \
  include/linux/bpf.h \
    $(wildcard include/config/bpf/jit/always/on.h) \
    $(wildcard include/config/bpf/stream/parser.h) \
    $(wildcard include/config/inet.h) \
  include/uapi/linux/bpf.h \
    $(wildcard include/config/efficient/unaligned/access.h) \
    $(wildcard include/config/ip/route/classid.h) \
    $(wildcard include/config/bpf/kprobe/override.h) \
    $(wildcard include/config/function/error/injection.h) \
    $(wildcard include/config/xfrm.h) \
    $(wildcard include/config/bpf/lirc/mode2.h) \
  include/uapi/linux/bpf_common.h \
  include/linux/rbtree_latch.h \
  include/linux/module.h \
    $(wildcard include/config/modules/tree/lookup.h) \
    $(wildcard include/config/kallsyms.h) \
    $(wildcard include/config/bpf/events.h) \
    $(wildcard include/config/event/tracing.h) \
    $(wildcard include/config/have/static/call/inline.h) \
    $(wildcard include/config/module/unload.h) \
    $(wildcard include/config/constructors.h) \
    $(wildcard include/config/retpoline.h) \
    $(wildcard include/config/module/sig.h) \
  include/linux/kmod.h \
  include/linux/umh.h \
  include/linux/elf.h \
    $(wildcard include/config/arch/use/gnu/property.h) \
    $(wildcard include/config/arch/have/elf/prot.h) \
  arch/arm64/include/asm/elf.h \
    $(wildcard include/config/sec/debug/coredump.h) \
    $(wildcard include/config/compat/vdso.h) \
  arch/arm64/include/generated/asm/user.h \
  include/asm-generic/user.h \
  include/uapi/linux/elf.h \
  include/uapi/linux/elf-em.h \
  include/linux/moduleparam.h \
    $(wildcard include/config/alpha.h) \
    $(wildcard include/config/ppc64.h) \
  include/linux/error-injection.h \
  include/asm-generic/error-injection.h \
  include/linux/static_call_types.h \
    $(wildcard include/config/have/static/call.h) \
  include/linux/cfi.h \
    $(wildcard include/config/cfi/clang/shadow.h) \
  arch/arm64/include/asm/module.h \
    $(wildcard include/config/arm64/module/plts.h) \
    $(wildcard include/config/dynamic/ftrace.h) \
    $(wildcard include/config/arm64/erratum/843419.h) \
  include/asm-generic/module.h \
    $(wildcard include/config/have/mod/arch/specific.h) \
    $(wildcard include/config/modules/use/elf/rel.h) \
    $(wildcard include/config/modules/use/elf/rela.h) \
  include/linux/kallsyms.h \
    $(wildcard include/config/kallsyms/all.h) \
  include/linux/bpf_types.h \
    $(wildcard include/config/bpf/lsm.h) \
    $(wildcard include/config/xdp/sockets.h) \
  include/linux/psi_types.h \
  include/linux/kthread.h \
  include/linux/cgroup_subsys.h \
    $(wildcard include/config/cgroup/device.h) \
    $(wildcard include/config/cgroup/freezer.h) \
    $(wildcard include/config/cgroup/perf.h) \
    $(wildcard include/config/cgroup/hugetlb.h) \
    $(wildcard include/config/cgroup/pids.h) \
    $(wildcard include/config/cgroup/rdma.h) \
    $(wildcard include/config/cgroup/debug.h) \
  include/linux/page_counter.h \
  include/linux/vmpressure.h \
  include/linux/eventfd.h \
    $(wildcard include/config/eventfd.h) \
  include/linux/writeback.h \
  include/linux/flex_proportions.h \
  include/linux/backing-dev-defs.h \
    $(wildcard include/config/debug/fs.h) \
  include/linux/blk_types.h \
    $(wildcard include/config/blk/cgroup/iocost.h) \
    $(wildcard include/config/blk/inline/encryption.h) \
    $(wildcard include/config/dm/default/key.h) \
    $(wildcard include/config/blk/dev/integrity.h) \
  include/linux/bvec.h \
  include/linux/blk-cgroup.h \
  include/linux/blkdev.h \
    $(wildcard include/config/blk/rq/alloc/time.h) \
    $(wildcard include/config/blk/wbt.h) \
    $(wildcard include/config/blk/dev/zoned.h) \
    $(wildcard include/config/blk/dev/bsg.h) \
    $(wildcard include/config/blk/dev/throttling.h) \
    $(wildcard include/config/blk/debug/fs.h) \
  include/linux/sched/clock.h \
    $(wildcard include/config/have/unstable/sched/clock.h) \
  include/uapi/linux/major.h \
  include/linux/genhd.h \
    $(wildcard include/config/fail/make/request.h) \
    $(wildcard include/config/cdrom.h) \
  include/linux/pagemap.h \
    $(wildcard include/config/sdp.h) \
  include/linux/highmem.h \
    $(wildcard include/config/x86/32.h) \
    $(wildcard include/config/debug/highmem.h) \
  arch/arm64/include/asm/cacheflush.h \
  include/linux/kgdb.h \
    $(wildcard include/config/have/arch/kgdb.h) \
    $(wildcard include/config/kgdb.h) \
    $(wildcard include/config/serial/kgdb/nmi.h) \
    $(wildcard include/config/kgdb/honour/blocklist.h) \
  include/linux/kprobes.h \
    $(wildcard include/config/kretprobes.h) \
    $(wildcard include/config/kprobes/sanity/test.h) \
    $(wildcard include/config/optprobes.h) \
    $(wildcard include/config/kprobes/on/ftrace.h) \
  include/linux/ftrace.h \
    $(wildcard include/config/function/tracer.h) \
    $(wildcard include/config/dynamic/ftrace/with/regs.h) \
    $(wildcard include/config/dynamic/ftrace/with/direct/calls.h) \
    $(wildcard include/config/have/dynamic/ftrace/with/direct/calls.h) \
    $(wildcard include/config/stack/tracer.h) \
    $(wildcard include/config/frame/pointer.h) \
    $(wildcard include/config/function/profiler.h) \
    $(wildcard include/config/ftrace/syscalls.h) \
  include/linux/trace_clock.h \
  arch/arm64/include/generated/asm/trace_clock.h \
  include/asm-generic/trace_clock.h \
  include/linux/ptrace.h \
  include/linux/pid_namespace.h \
    $(wildcard include/config/pid/ns.h) \
  include/uapi/linux/ptrace.h \
  arch/arm64/include/asm/ftrace.h \
  include/linux/compat.h \
    $(wildcard include/config/arch/has/syscall/wrapper.h) \
    $(wildcard include/config/x86/x32/abi.h) \
    $(wildcard include/config/compat/old/sigaction.h) \
    $(wildcard include/config/odd/rt/sigaction.h) \
  include/linux/socket.h \
  arch/arm64/include/generated/uapi/asm/socket.h \
  include/uapi/asm-generic/socket.h \
  arch/arm64/include/generated/uapi/asm/sockios.h \
  include/uapi/asm-generic/sockios.h \
  include/uapi/linux/sockios.h \
  include/linux/uio.h \
    $(wildcard include/config/arch/has/copy/mc.h) \
  include/uapi/linux/uio.h \
  include/uapi/linux/socket.h \
  include/uapi/linux/if.h \
  include/uapi/linux/libc-compat.h \
  include/uapi/linux/hdlc/ioctl.h \
  include/uapi/linux/aio_abi.h \
  arch/arm64/include/asm/syscall_wrapper.h \
  arch/arm64/include/asm/kprobes.h \
  include/asm-generic/kprobes.h \
  arch/arm64/include/asm/kgdb.h \
  include/asm-generic/cacheflush.h \
  arch/arm64/include/generated/asm/kmap_types.h \
  include/asm-generic/kmap_types.h \
  include/linux/hugetlb_inline.h \
  include/linux/sched/debug.h \
  include/linux/mempool.h \
  include/linux/bio.h \
  include/linux/bsg.h \
  include/uapi/linux/bsg.h \
  include/uapi/linux/blkzoned.h \
  include/linux/elevator.h \
  include/linux/hashtable.h \
  include/linux/blk-mq.h \
    $(wildcard include/config/fail/io/timeout.h) \
  include/linux/sbitmap.h \
  include/trace/hooks/mm.h \
  include/trace/hooks/save_incpath.h \
  include/linux/oom.h \
  include/uapi/linux/oom.h \
  include/linux/tracepoint.h \
    $(wildcard include/config/have/syscall/tracepoints.h) \
    $(wildcard include/config/tracepoint.h) \
  include/linux/static_call.h \
  include/linux/cpu.h \
    $(wildcard include/config/pm/sleep/smp.h) \
    $(wildcard include/config/pm/sleep/smp/nonzero/cpu.h) \
    $(wildcard include/config/arch/has/cpu/finalize/init.h) \
    $(wildcard include/config/hotplug/smt.h) \
  include/linux/node.h \
    $(wildcard include/config/hmem/reporting.h) \
    $(wildcard include/config/memory/hotplug/sparse.h) \
  include/linux/cpuhotplug.h \
  include/trace/hooks/vendor_hooks.h \
    $(wildcard include/config/android/vendor/hooks.h) \
  include/../mm/slab.h \
    $(wildcard include/config/slub/debug.h) \
    $(wildcard include/config/slub/debug/on.h) \
    $(wildcard include/config/slab/freelist/hardened.h) \
    $(wildcard include/config/slab/freelist/random.h) \
  include/linux/slub_def.h \
    $(wildcard include/config/slub/cpu/partial.h) \
    $(wildcard include/config/slub/stats.h) \
  include/linux/kfence.h \
    $(wildcard include/config/kfence.h) \
    $(wildcard include/config/kfence/num/objects.h) \
    $(wildcard include/config/kfence/static/keys.h) \
  include/linux/reciprocal_div.h \
  include/linux/fault-inject.h \
    $(wildcard include/config/fault/injection/debug/fs.h) \
  include/linux/kmemleak.h \
    $(wildcard include/config/debug/kmemleak.h) \
  include/linux/sched/mm.h \
    $(wildcard include/config/arch/has/membarrier/callbacks.h) \
  include/linux/sync_core.h \
    $(wildcard include/config/arch/has/sync/core/before/usermode.h) \
  include/trace/define_trace.h \
  include/trace/hooks/restore_incpath.h \
  include/trace/hooks/sched.h \
  include/linux/cpufreq.h \
    $(wildcard include/config/cpu/freq/stat.h) \
    $(wildcard include/config/cpu/thermal.h) \
    $(wildcard include/config/pm/opp.h) \
  include/linux/clk.h \
    $(wildcard include/config/common/clk.h) \
    $(wildcard include/config/have/clk/prepare.h) \
    $(wildcard include/config/have/clk.h) \
  include/linux/pm_qos.h \
    $(wildcard include/config/cpu/idle.h) \
  include/trace/trace_events.h \
  include/linux/trace_events.h \
    $(wildcard include/config/kprobe/events.h) \
    $(wildcard include/config/uprobe/events.h) \
  include/linux/ring_buffer.h \
    $(wildcard include/config/ring/buffer/allow/swap.h) \
    $(wildcard include/config/ring/buffer.h) \
  include/linux/poll.h \
  include/uapi/linux/poll.h \
  arch/arm64/include/generated/uapi/asm/poll.h \
  include/uapi/asm-generic/poll.h \
  include/uapi/linux/eventpoll.h \
  include/linux/trace_seq.h \
  include/linux/seq_buf.h \
  include/linux/perf_event.h \
    $(wildcard include/config/cpu/sup/intel.h) \
  include/uapi/linux/perf_event.h \
  include/uapi/linux/bpf_perf_event.h \
  arch/arm64/include/uapi/asm/bpf_perf_event.h \
  arch/arm64/include/asm/perf_event.h \
  include/linux/irq_work.h \
    $(wildcard include/config/irq/work.h) \
  arch/arm64/include/asm/irq_work.h \
  include/linux/jump_label_ratelimit.h \
  include/linux/perf_regs.h \
    $(wildcard include/config/have/perf/regs.h) \
  arch/arm64/include/uapi/asm/perf_regs.h \
  include/linux/security.h \
    $(wildcard include/config/security/network.h) \
    $(wildcard include/config/security/infiniband.h) \
    $(wildcard include/config/security/network/xfrm.h) \
    $(wildcard include/config/security/path.h) \
    $(wildcard include/config/securityfs.h) \
  include/linux/kernel_read_file.h \
  include/trace/perf.h \
  include/trace/bpf_probe.h \
  include/trace/hooks/cpu.h \
  include/trace/hooks/fpsimd.h \
  include/trace/hooks/binder.h \
    $(wildcard include/config/android/binder/ipc.h) \
  include/../drivers/android/binder_alloc.h \
    $(wildcard include/config/android/binder/ipc/selftest.h) \
  include/linux/rtmutex.h \
    $(wildcard include/config/debug/rt/mutexes.h) \
  include/uapi/linux/android/binder.h \
  include/../drivers/android/binder_internal.h \
    $(wildcard include/config/android/binder/devices.h) \
    $(wildcard include/config/android/binderfs.h) \
  include/linux/miscdevice.h \
  include/uapi/linux/android/binderfs.h \
  drivers/android/binder_alloc.h \
  include/trace/hooks/rwsem.h \
  include/trace/hooks/futex.h \
  include/linux/futex.h \
  include/uapi/linux/futex.h \
  include/trace/hooks/dtask.h \
  include/trace/hooks/cpuidle.h \
  include/linux/cpuidle.h \
    $(wildcard include/config/suspend.h) \
    $(wildcard include/config/arch/needs/cpu/idle/coupled.h) \
    $(wildcard include/config/arch/has/cpu/relax.h) \
  include/trace/hooks/topology.h \
  include/trace/hooks/gic.h \
  include/trace/hooks/wqlockup.h \
  include/trace/hooks/debug.h \
  include/trace/hooks/printk.h \
  include/trace/hooks/gic_v3.h \
  include/linux/irq.h \
    $(wildcard include/config/generic/irq/effective/aff/mask.h) \
    $(wildcard include/config/generic/irq/ipi.h) \
    $(wildcard include/config/irq/domain/hierarchy.h) \
    $(wildcard include/config/generic/irq/migration.h) \
    $(wildcard include/config/generic/pending/irq.h) \
    $(wildcard include/config/hardirqs/sw/resend.h) \
    $(wildcard include/config/generic/irq/legacy/alloc/hwirq.h) \
    $(wildcard include/config/generic/irq/legacy.h) \
    $(wildcard include/config/generic/irq/multi/handler.h) \
  include/linux/irqhandler.h \
  include/linux/io.h \
  arch/arm64/include/generated/asm/irq_regs.h \
  include/asm-generic/irq_regs.h \
  include/linux/irqdesc.h \
    $(wildcard include/config/generic/irq/debugfs.h) \
    $(wildcard include/config/sparse/irq.h) \
    $(wildcard include/config/handle/domain/irq.h) \
    $(wildcard include/config/irq/domain.h) \
  arch/arm64/include/generated/asm/hw_irq.h \
  include/asm-generic/hw_irq.h \
  include/trace/hooks/epoch.h \
  include/trace/hooks/cpufreq.h \
  include/trace/hooks/fs.h \
  include/trace/hooks/i2c.h \
  include/trace/hooks/preemptirq.h \
  include/trace/hooks/ftrace_dump.h \
  include/trace/hooks/pm_domain.h \
  include/linux/pm_domain.h \
    $(wildcard include/config/pm/generic/domains/sleep.h) \
    $(wildcard include/config/pm/generic/domains/of.h) \
  include/linux/of.h \
    $(wildcard include/config/of/dynamic.h) \
    $(wildcard include/config/sparc.h) \
    $(wildcard include/config/of/promtree.h) \
    $(wildcard include/config/of/kobj.h) \
    $(wildcard include/config/of/numa.h) \
    $(wildcard include/config/of/overlay.h) \
  include/linux/mod_devicetable.h \
  include/linux/property.h \
  include/trace/hooks/bug.h \
  include/trace/hooks/timer.h \
  include/trace/hooks/softlockup.h \
  include/trace/hooks/power.h \
  include/trace/hooks/fault.h \
  include/trace/hooks/iommu.h \
  include/linux/iova.h \
    $(wildcard include/config/iommu/iova.h) \
  include/trace/hooks/thermal.h \
  include/linux/thermal.h \
    $(wildcard include/config/thermal/emulation.h) \
    $(wildcard include/config/thermal/of.h) \
    $(wildcard include/config/thermal.h) \
  include/uapi/linux/thermal.h \
  include/trace/hooks/ufshcd.h \
    $(wildcard include/config/scsi/ufshcd.h) \
  include/../drivers/scsi/ufs/ufshcd.h \
    $(wildcard include/config/scsi/ufs/crypto.h) \
    $(wildcard include/config/scsi/ufs/hpb.h) \
    $(wildcard include/config/scsi/ufs/dwc.h) \
  include/linux/delay.h \
  arch/arm64/include/generated/asm/delay.h \
  include/asm-generic/delay.h \
  include/linux/pm_runtime.h \
  include/linux/regulator/consumer.h \
    $(wildcard include/config/regulator.h) \
  include/linux/suspend.h \
    $(wildcard include/config/vt.h) \
    $(wildcard include/config/hibernation/snapshot/dev.h) \
    $(wildcard include/config/pm/sleep/debug.h) \
    $(wildcard include/config/pm/autosleep.h) \
  include/linux/swap.h \
    $(wildcard include/config/frontswap.h) \
    $(wildcard include/config/memcg/force/use/vm/swappiness.h) \
    $(wildcard include/config/zram.h) \
  include/linux/freezer.h \
  include/linux/mmu_context.h \
  arch/arm64/include/asm/mmu_context.h \
    $(wildcard include/config/pid/in/contextidr.h) \
  include/linux/sched/hotplug.h \
  include/asm-generic/mm_hooks.h \
  include/linux/devfreq.h \
    $(wildcard include/config/pm/devfreq.h) \
    $(wildcard include/config/devfreq/gov/simple/ondemand.h) \
    $(wildcard include/config/devfreq/gov/passive.h) \
  include/linux/pm_opp.h \
  include/linux/keyslot-manager.h \
  include/linux/blk-crypto.h \
  include/../drivers/scsi/ufs/unipro.h \
  include/scsi/scsi.h \
  include/scsi/scsi_common.h \
  include/scsi/scsi_proto.h \
  include/scsi/scsi_cmnd.h \
    $(wildcard include/config/scsi/dma.h) \
  include/linux/t10-pi.h \
  include/scsi/scsi_device.h \
  include/scsi/scsi_request.h \
  include/scsi/scsi_host.h \
  include/scsi/scsi_tcq.h \
  include/scsi/scsi_dbg.h \
    $(wildcard include/config/scsi/constants.h) \
  include/scsi/scsi_eh.h \
  include/../drivers/scsi/ufs/ufs.h \
  include/uapi/scsi/scsi_bsg_ufs.h \
  include/../drivers/scsi/ufs/ufs_quirks.h \
  include/../drivers/scsi/ufs/ufshci.h \
    $(wildcard include/config/result/code/mask.h) \
  include/trace/hooks/block.h \
  include/../block/blk-mq-tag.h \
  include/../block/blk-mq.h \
  include/../block/blk-stat.h \
  include/trace/hooks/cgroup.h \
  include/trace/hooks/sys.h \
  include/trace/hooks/traps.h \
  include/trace/hooks/avc.h \
  include/trace/hooks/creds.h \
  include/trace/hooks/module.h \
  include/trace/hooks/memory.h \
  include/trace/hooks/typec.h \
    $(wildcard include/config/typec/tcpci.h) \
  include/linux/usb/pd.h \
  include/linux/usb/typec.h \
  include/linux/usb/tcpm.h \
  include/../drivers/usb/typec/tcpm/tcpci.h \
  include/trace/hooks/gpiolib.h \
  include/../drivers/gpio/gpiolib.h \
    $(wildcard include/config/gpio/cdev.h) \
  include/linux/gpio/driver.h \
    $(wildcard include/config/gpio/generic.h) \
    $(wildcard include/config/gpiolib/irqchip.h) \
    $(wildcard include/config/of/gpio.h) \
    $(wildcard include/config/gpiolib.h) \
  include/linux/irqchip/chained_irq.h \
  include/linux/irqdomain.h \
  include/linux/pinctrl/pinctrl.h \
    $(wildcard include/config/generic/pinconf.h) \
  include/linux/pinctrl/pinctrl-state.h \
  include/linux/pinctrl/devinfo.h \
  include/linux/pinctrl/consumer.h \
  include/linux/pinctrl/pinconf-generic.h \
  include/linux/pinctrl/machine.h \
  include/linux/gpio/consumer.h \
    $(wildcard include/config/gpio/sysfs.h) \
  include/linux/cdev.h \
  include/trace/hooks/signal.h \
  include/trace/hooks/logbuf.h \
  include/../kernel/printk/printk_ringbuffer.h \
    $(wildcard include/config/printk/process.h) \
  include/trace/hooks/vmscan.h \
  include/trace/hooks/psi.h \
  include/trace/hooks/hung_task.h \
  include/trace/hooks/mmc_core.h \
    $(wildcard include/config/mmc/sdhci.h) \
  include/../drivers/mmc/host/sdhci.h \
    $(wildcard include/config/leds/class.h) \
    $(wildcard include/config/mmc/sdhci/external/dma.h) \
    $(wildcard include/config/mmc/sdhci/io/accessors.h) \
  include/linux/leds.h \
    $(wildcard include/config/leds/triggers.h) \
    $(wildcard include/config/leds/brightness/hw/changed.h) \
    $(wildcard include/config/leds/trigger/disk.h) \
    $(wildcard include/config/leds/trigger/mtd.h) \
    $(wildcard include/config/leds/trigger/camera.h) \
    $(wildcard include/config/new/leds.h) \
    $(wildcard include/config/leds/trigger/cpu.h) \
    $(wildcard include/config/leds/trigger/audio.h) \
  include/dt-bindings/leds/common.h \
  include/linux/mmc/host.h \
    $(wildcard include/config/mmc/crypto.h) \
    $(wildcard include/config/fail/mmc/request.h) \
  include/linux/mmc/core.h \
  include/linux/mmc/card.h \
  include/linux/mmc/pm.h \
  include/trace/hooks/v4l2core.h \
  include/media/v4l2-subdev.h \
    $(wildcard include/config/video/adv/debug.h) \
    $(wildcard include/config/media/controller.h) \
    $(wildcard include/config/video/v4l2/subdev/api.h) \
  include/uapi/linux/v4l2-subdev.h \
  include/uapi/linux/v4l2-common.h \
  include/uapi/linux/v4l2-mediabus.h \
  include/uapi/linux/media-bus-format.h \
  include/linux/videodev2.h \
  include/uapi/linux/videodev2.h \
  include/uapi/linux/v4l2-controls.h \
  include/media/media-entity.h \
  include/uapi/linux/media.h \
  include/media/v4l2-async.h \
  include/media/v4l2-common.h \
    $(wildcard include/config/video/v4l2/i2c.h) \
    $(wildcard include/config/spi.h) \
  include/media/v4l2-dev.h \
  include/linux/i2c.h \
    $(wildcard include/config/i2c.h) \
    $(wildcard include/config/i2c/slave.h) \
    $(wildcard include/config/i2c/boardinfo.h) \
    $(wildcard include/config/i2c/mux.h) \
  include/linux/acpi.h \
    $(wildcard include/config/acpi/debugger.h) \
    $(wildcard include/config/acpi/processor/cstate.h) \
    $(wildcard include/config/acpi/hotplug/cpu.h) \
    $(wildcard include/config/acpi/hotplug/ioapic.h) \
    $(wildcard include/config/x86/io/apic.h) \
    $(wildcard include/config/acpi/wmi.h) \
    $(wildcard include/config/acpi/numa.h) \
    $(wildcard include/config/acpi/hotplug/memory.h) \
    $(wildcard include/config/acpi/container.h) \
    $(wildcard include/config/acpi/gtdt.h) \
    $(wildcard include/config/acpi/table/upgrade.h) \
    $(wildcard include/config/acpi/watchdog.h) \
    $(wildcard include/config/acpi/spcr/table.h) \
    $(wildcard include/config/acpi/generic/gsi.h) \
    $(wildcard include/config/acpi/lpit.h) \
    $(wildcard include/config/acpi/pptt.h) \
  include/linux/resource_ext.h \
  include/acpi/acpi.h \
  include/acpi/platform/acenv.h \
  include/acpi/platform/acgcc.h \
  include/acpi/platform/aclinux.h \
    $(wildcard include/config/acpi/reduced/hardware/only.h) \
    $(wildcard include/config/acpi/debug.h) \
  include/linux/ctype.h \
  include/acpi/acnames.h \
  include/acpi/actypes.h \
  include/acpi/acexcep.h \
  include/acpi/actbl.h \
  include/acpi/actbl1.h \
  include/acpi/actbl2.h \
  include/acpi/actbl3.h \
  include/acpi/acrestyp.h \
  include/acpi/platform/acenvex.h \
  include/acpi/platform/aclinuxex.h \
  include/acpi/platform/acgccex.h \
  include/acpi/acoutput.h \
  include/acpi/acpiosxf.h \
  include/acpi/acpixf.h \
  include/acpi/acconfig.h \
  include/acpi/acbuffer.h \
  include/acpi/acpi_numa.h \
    $(wildcard include/config/acpi/hmat.h) \
  include/uapi/linux/i2c.h \
  include/linux/spi/spi.h \
    $(wildcard include/config/spi/slave.h) \
  include/linux/ptp_clock_kernel.h \
    $(wildcard include/config/ptp/1588/clock.h) \
  include/linux/pps_kernel.h \
    $(wildcard include/config/ntp/pps.h) \
  include/uapi/linux/pps.h \
  include/uapi/linux/ptp_clock.h \
  include/media/v4l2-fh.h \
  include/media/v4l2-mediabus.h \
  include/trace/hooks/v4l2mc.h \
  include/trace/hooks/scmi.h \
  include/trace/hooks/cpuidle_psci.h \
  include/trace/hooks/fips140.h \
  include/crypto/aes.h \
  include/linux/crypto.h \
    $(wildcard include/config/crypto/stats.h) \
  include/trace/hooks/remoteproc.h \
  include/linux/remoteproc.h \
  include/linux/virtio.h \
  include/trace/hooks/shmem_fs.h \
  include/trace/hooks/net.h \
  include/linux/netdevice.h \
    $(wildcard include/config/dcb.h) \
    $(wildcard include/config/hyperv/net.h) \
    $(wildcard include/config/wlan.h) \
    $(wildcard include/config/ax25.h) \
    $(wildcard include/config/mac80211/mesh.h) \
    $(wildcard include/config/net/ipip.h) \
    $(wildcard include/config/net/ipgre.h) \
    $(wildcard include/config/ipv6/sit.h) \
    $(wildcard include/config/ipv6/tunnel.h) \
    $(wildcard include/config/rps.h) \
    $(wildcard include/config/netpoll.h) \
    $(wildcard include/config/xps.h) \
    $(wildcard include/config/bql.h) \
    $(wildcard include/config/rfs/accel.h) \
    $(wildcard include/config/fcoe.h) \
    $(wildcard include/config/xfrm/offload.h) \
    $(wildcard include/config/net/poll/controller.h) \
    $(wildcard include/config/libfcoe.h) \
    $(wildcard include/config/wireless/ext.h) \
    $(wildcard include/config/net/l3/master/dev.h) \
    $(wildcard include/config/ipv6.h) \
    $(wildcard include/config/tls/device.h) \
    $(wildcard include/config/vlan/8021q.h) \
    $(wildcard include/config/net/dsa.h) \
    $(wildcard include/config/tipc.h) \
    $(wildcard include/config/irda.h) \
    $(wildcard include/config/atalk.h) \
    $(wildcard include/config/mpls/routing.h) \
    $(wildcard include/config/net/cls/act.h) \
    $(wildcard include/config/netfilter/ingress.h) \
    $(wildcard include/config/net/sched.h) \
    $(wildcard include/config/garp.h) \
    $(wildcard include/config/mrp.h) \
    $(wildcard include/config/macsec.h) \
    $(wildcard include/config/net/flow/limit.h) \
    $(wildcard include/config/ethtool/netlink.h) \
  include/linux/prefetch.h \
  include/linux/dynamic_queue_limits.h \
  include/linux/ethtool.h \
  include/uapi/linux/ethtool.h \
  include/linux/if_ether.h \
  include/linux/skbuff.h \
    $(wildcard include/config/nf/conntrack.h) \
    $(wildcard include/config/bridge/netfilter.h) \
    $(wildcard include/config/net/tc/skb/ext.h) \
    $(wildcard include/config/skb/extensions.h) \
    $(wildcard include/config/ipv6/ndisc/nodetype.h) \
    $(wildcard include/config/net/switchdev.h) \
    $(wildcard include/config/net/redirect.h) \
    $(wildcard include/config/net/rx/busy/poll.h) \
    $(wildcard include/config/network/secmark.h) \
    $(wildcard include/config/debug/net.h) \
    $(wildcard include/config/network/phy/timestamping.h) \
    $(wildcard include/config/mptcp.h) \
    $(wildcard include/config/netfilter/xt/target/trace.h) \
    $(wildcard include/config/nf/tables.h) \
    $(wildcard include/config/ip/vs.h) \
  include/linux/net.h \
  include/linux/sockptr.h \
  include/uapi/linux/net.h \
  include/linux/textsearch.h \
  include/net/checksum.h \
  arch/arm64/include/asm/checksum.h \
  include/linux/in6.h \
  include/uapi/linux/in6.h \
  include/asm-generic/checksum.h \
  include/linux/netdev_features.h \
  include/net/flow_dissector.h \
  include/uapi/linux/if_ether.h \
  include/linux/splice.h \
  include/linux/pipe_fs_i.h \
  include/uapi/linux/if_packet.h \
  include/net/flow.h \
  include/linux/netfilter/nf_conntrack_common.h \
  include/uapi/linux/netfilter/nf_conntrack_common.h \
  include/net/net_namespace.h \
    $(wildcard include/config/ieee802154/6lowpan.h) \
    $(wildcard include/config/ip/sctp.h) \
    $(wildcard include/config/ip/dccp.h) \
    $(wildcard include/config/netfilter.h) \
    $(wildcard include/config/nf/defrag/ipv6.h) \
    $(wildcard include/config/netfilter/netlink/acct.h) \
    $(wildcard include/config/nf/ct/netlink/timeout.h) \
    $(wildcard include/config/wext/core.h) \
    $(wildcard include/config/mpls.h) \
    $(wildcard include/config/can.h) \
    $(wildcard include/config/crypto/user.h) \
    $(wildcard include/config/net/ns.h) \
  include/net/netns/core.h \
  include/net/netns/mib.h \
    $(wildcard include/config/xfrm/statistics.h) \
    $(wildcard include/config/tls.h) \
  include/net/snmp.h \
  include/uapi/linux/snmp.h \
  include/net/netns/unix.h \
  include/net/netns/packet.h \
  include/net/netns/ipv4.h \
    $(wildcard include/config/ip/multiple/tables.h) \
    $(wildcard include/config/ip/mroute.h) \
    $(wildcard include/config/ip/mroute/multiple/tables.h) \
    $(wildcard include/config/ip/route/multipath.h) \
  include/net/inet_frag.h \
  include/net/netns/ipv6.h \
    $(wildcard include/config/ipv6/multiple/tables.h) \
    $(wildcard include/config/ipv6/subtrees.h) \
    $(wildcard include/config/ipv6/mroute.h) \
    $(wildcard include/config/ipv6/mroute/multiple/tables.h) \
  include/net/dst_ops.h \
  include/uapi/linux/icmpv6.h \
  include/net/netns/nexthop.h \
  include/net/netns/ieee802154_6lowpan.h \
  include/net/netns/sctp.h \
  include/net/netns/dccp.h \
  include/net/netns/netfilter.h \
    $(wildcard include/config/netfilter/family/arp.h) \
    $(wildcard include/config/netfilter/family/bridge.h) \
    $(wildcard include/config/nf/defrag/ipv4.h) \
  include/linux/netfilter_defs.h \
  include/uapi/linux/netfilter.h \
  include/linux/in.h \
  include/uapi/linux/in.h \
  include/net/netns/x_tables.h \
    $(wildcard include/config/bridge/nf/ebtables.h) \
  include/net/netns/conntrack.h \
    $(wildcard include/config/nf/ct/proto/dccp.h) \
    $(wildcard include/config/nf/ct/proto/sctp.h) \
    $(wildcard include/config/nf/ct/proto/gre.h) \
    $(wildcard include/config/nf/conntrack/events.h) \
    $(wildcard include/config/nf/conntrack/labels.h) \
  include/linux/list_nulls.h \
  include/linux/netfilter/nf_conntrack_tcp.h \
  include/uapi/linux/netfilter/nf_conntrack_tcp.h \
  include/linux/netfilter/nf_conntrack_dccp.h \
  include/uapi/linux/netfilter/nf_conntrack_tuple_common.h \
  include/linux/netfilter/nf_conntrack_sctp.h \
  include/uapi/linux/netfilter/nf_conntrack_sctp.h \
  include/net/netns/nftables.h \
  include/net/netns/xfrm.h \
  include/uapi/linux/xfrm.h \
  include/net/netns/mpls.h \
  include/net/netns/can.h \
  include/net/netns/xdp.h \
  include/net/netns/bpf.h \
  include/linux/bpf-netns.h \
  include/linux/seq_file_net.h \
  include/net/netprio_cgroup.h \
  include/net/xdp.h \
  include/uapi/linux/neighbour.h \
  include/linux/netlink.h \
  include/net/scm.h \
  include/uapi/linux/netlink.h \
    $(wildcard include/config/samsung/freecess.h) \
  include/uapi/linux/netdevice.h \
  include/linux/if_link.h \
  include/uapi/linux/if_link.h \
  include/uapi/linux/if_bonding.h \
  include/uapi/linux/pkt_cls.h \
  include/uapi/linux/pkt_sched.h \
  include/trace/hooks/syscall_check.h \
  include/trace/hooks/usb.h \
  include/linux/usb.h \
    $(wildcard include/config/usb/mon.h) \
    $(wildcard include/config/usb/host/certification.h) \
    $(wildcard include/config/usb/led/trig.h) \
  include/linux/usb/ch9.h \
  include/uapi/linux/usb/ch9.h \
  include/trace/hooks/ipv6.h \
  include/trace/hooks/sound.h \
  include/trace/hooks/snd_compr.h \
  include/trace/hooks/ipv4.h \
  include/trace/hooks/pci.h \
  include/trace/hooks/dmabuf.h \
  include/trace/hooks/wakeupbypass.h \
  include/trace/hooks/mz.h \
  include/linux/irqchip/arm-gic-v3.h \
  arch/arm64/include/asm/arch_gicv3.h \
  include/linux/irqchip/arm-gic-common.h \
  include/linux/swap_slots.h \

drivers/android/vendor_hooks.o: $(deps_drivers/android/vendor_hooks.o)

$(deps_drivers/android/vendor_hooks.o):

ksymdeps_drivers/android/vendor_hooks.o := \
    $(wildcard include/ksym/gki/struct/gic/chip/data.h) \
    $(wildcard include/ksym/gki/struct/swap/slots/cache.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/account/irq.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/after/dequeue/task.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/after/enqueue/task.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/alloc/si.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/alloc/swap/slot/cache.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/arm64/serror/panic.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/bad/mode.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/binder/transaction.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/build/perf/domains.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/can/migrate/task.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/cgroup/force/kthread/migration.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/check/preempt/tick.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/check/preempt/wakeup.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/cpu/cgroup/attach.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/cpu/cgroup/can/attach.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/cpu/cgroup/online.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/cpu/overutilized.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/cpufreq/transition.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/cpuset/fork.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/dequeue/entity.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/dequeue/task.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/dequeue/task/fair.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/dequeue/task/idle.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/die/kernel/fault.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/dma/buf/stats/teardown.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/do/mem/abort.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/do/ptrauth/fault.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/do/sched/yield.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/do/sea.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/do/sp/pc/abort.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/do/undefinstr.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/drain/slots/cache/cpu.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/enqueue/entity.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/enqueue/task.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/enqueue/task/fair.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/find/busiest/group.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/find/busiest/queue.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/find/energy/efficient/cpu.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/find/lowest/rq.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/find/new/ilb.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/finish/prio/fork.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/flush/task.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/force/compatible/post.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/force/compatible/pre.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/free/swap/slot.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/get/swap/page.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/gic/v3/set/affinity.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/handle/pte/fault/end.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/iommu/setup/dma/ops.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/irqs/disable.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/irqs/enable.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/media/device/setup/link.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/migrate/queued/task.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/new/task/stats.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/pci/d3/sleep.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/pick/next/entity.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/place/entity.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/post/init/entity/util/avg.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/preempt/disable.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/preempt/enable.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/prepare/prio/fork.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/refrigerator.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/replace/next/task/fair.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/report/bug.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/resume/cpus.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/rtmutex/prepare/setprio.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/sched/balance/rt.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/sched/cpu/dying.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/sched/cpu/starting.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/sched/exec.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/sched/fork.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/sched/fork/init.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/sched/newidle/balance.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/sched/nohz/balancer/kick.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/sched/rebalance/domains.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/sched/setaffinity.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/schedule.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/schedule/bug.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/select/fallback/rq.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/select/task/rq/fair.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/select/task/rq/rt.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/set/balance/anon/file/reclaim.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/set/cpus/allowed/comm.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/set/gfp/zone/flags.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/set/iowait.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/set/readahead/gfp/mask.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/set/skip/swapcache/flags.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/set/task/cpu.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/set/user/nice.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/setscheduler.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/show/max/freq.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/tcp/recvmsg.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/tcp/recvmsg/stat.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/tcp/sendmsg/locked.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/tick/entry.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/try/to/wake/up.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/try/to/wake/up/success.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/ttwu/cond.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/typec/tcpci/chk/contaminant.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/typec/tcpci/get/vbus.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/uclamp/eff/get.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/udp/recvmsg.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/udp/sendmsg.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/ufs/complete/init.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/ufs/reprogram/all/keys.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/update/cpu/capacity.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/update/cpus/allowed.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/update/misfit/status.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/util/est/update.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/v4l2subdev/set/fmt.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/v4l2subdev/set/frame/interval.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/v4l2subdev/set/selection.h) \
    $(wildcard include/ksym/sck/tp/func/android/rvh/wake/up/new/task.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/cgroup/throttle/swaprate.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/account/swap/pages.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/account/task/time.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/add/page/to/lrulist.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/add/to/avail/list.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/aes/decrypt.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/aes/encrypt.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/aes/expandkey.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/alloc/pages/failure/bypass.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/alloc/pages/reclaim/bypass.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/alloc/pages/slowpath/begin.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/alloc/pages/slowpath/end.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/alloc/si.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/alloc/swap/slot/cache.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/allow/domain/state.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/alter/futex/plist/add.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/alter/mutex/list/add.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/alter/rwsem/list/add.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/arch/set/freq/scale.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/binder/alloc/new/buf/locked.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/binder/del/ref.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/binder/free/proc.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/binder/has/work/ilocked.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/binder/looper/state/registered.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/binder/new/ref.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/binder/preset.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/binder/print/transaction/info.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/binder/priority/skip.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/binder/proc/transaction.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/binder/proc/transaction/end.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/binder/read/done.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/binder/reply.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/binder/restore/priority.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/binder/set/priority.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/binder/thread/read.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/binder/thread/release.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/binder/trans.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/binder/transaction/init.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/binder/wait/for/work.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/binder/wakeup/ilocked.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/blk/alloc/rqs.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/blk/rq/ctx/init.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/build/sched/domains.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/cgroup/attach.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/cgroup/set/task.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/check/bpf/syscall.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/check/file/open.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/check/mmap/file.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/check/page/look/around/ref.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/check/uninterruptible/tasks.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/check/uninterruptible/tasks/dn.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/cleanup/old/buffers/bypass.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/clear/mask/adjust.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/clear/reserved/fmt/fields.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/cma/alloc/finish.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/cma/alloc/start.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/cma/drain/all/pages/bypass.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/commit/creds.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/compact/finished.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/count/pswpin.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/count/pswpout.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/count/swpout/vm/event.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/cow/user/page.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/cpu/idle/enter.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/cpu/idle/exit.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/cpu/up.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/cpufreq/acct/update/power.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/cpufreq/fast/switch.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/cpufreq/resolve/freq.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/cpufreq/target.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/cpuidle/psci/enter.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/cpuidle/psci/exit.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/del/from/avail/list.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/del/page/from/lrulist.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/disable/thermal/cooling/stats.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/dm/bufio/shrink/scan/bypass.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/do/futex.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/do/page/trylock.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/do/send/sig/info.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/do/traversal/lruvec.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/do/wake/up/sync.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/drain/all/pages/bypass.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/drain/slots/cache/cpu.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/dump/throttled/rt/tasks.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/dup/task/struct.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/em/cpu/energy.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/enable/thermal/genl/check.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/ep/create/wakeup/source.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/exclude/reserved/zone.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/exit/creds.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/exit/mm.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/filemap/fault/cache/page.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/filemap/fault/get/page.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/fill/ext/fmtdesc.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/finish/update/load/avg/se.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/free/pages.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/free/swap/slot.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/free/task.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/free/unref/page/bypass.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/freq/qos/add/request.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/freq/qos/remove/request.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/freq/qos/update/request.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/freq/table/limits.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/ftrace/dump/buffer.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/ftrace/format/check.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/ftrace/oops/enter.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/ftrace/oops/exit.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/ftrace/size/check.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/futex/sleep/start.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/futex/wait/end.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/futex/wait/start.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/futex/wake/this.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/futex/wake/traverse/plist.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/futex/wake/up/q/finish.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/get/from/fragment/pool.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/get/swap/page.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/gic/resume.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/gpio/block/read.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/handle/failed/page/trylock.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/handle/pte/fault/end.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/handle/tlb/conf.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/inactive/is/low.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/include/reserved/zone.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/init/swap/info/struct.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/iommu/alloc/iova.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/iommu/free/iova.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/iommu/iovad/alloc/iova.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/iommu/iovad/free/iova.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/iommu/setup/dma/ops.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/ipi/stop.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/ipv6/gen/linklocal/addr.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/irqtime/account/process/tick.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/is/fpsimd/save.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/jiffies/update.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/kfree/skb.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/killed/process.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/kmalloc/slab.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/kvmalloc/node/use/vmalloc.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/logbuf.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/logbuf/pr/cont.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/look/around.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/look/around/migrate/page.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/madvise/cold/or/pageout.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/madvise/cold/or/pageout/abort.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/map/util/freq.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/mark/page/accessed.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/media/device/setup/link.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/mem/cgroup/alloc.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/mem/cgroup/css/offline.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/mem/cgroup/css/online.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/mem/cgroup/free.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/mem/cgroup/id/remove.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/meminfo/proc/show.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/migrate/page/states.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/mm/dirty/limits.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/mmap/region.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/mmc/attach/sd.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/mmc/blk/mq/rw/recovery.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/mmc/blk/reset.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/mmc/gpio/cd/irqt.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/mmput.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/mutex/can/spin/on/owner.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/mutex/opt/spin/finish.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/mutex/opt/spin/start.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/mutex/unlock/slowpath.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/mutex/unlock/slowpath/end.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/mutex/wait/finish.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/mutex/wait/start.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/mz/exit.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/of/i2c/get/board/info.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/oom/check/panic.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/override/creds.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/page/isolated/for/reclaim.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/page/referenced/check/bypass.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/page/referenced/one/end.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/page/should/be/protected.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/page/trylock/clear.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/page/trylock/get/result.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/page/trylock/set.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/pagecache/get/page.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/pageset/update.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/pcplist/add/cma/pages/bypass.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/percpu/rwsem/wq/add.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/prepare/update/load/avg/se.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/printk/hotplug.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/process/killed.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/psi/event.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/psi/group.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/ptype/head.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/ra/tuning/max/page.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/record/mutex/lock/starttime.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/record/pcpu/rwsem/starttime.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/record/rtmutex/lock/starttime.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/record/rwsem/lock/starttime.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/remove/vmalloc/stack.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/revert/creds.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/rmqueue.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/rmqueue/bulk/bypass.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/rproc/recovery.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/rtmutex/wait/finish.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/rtmutex/wait/start.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/rwsem/can/spin/on/owner.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/rwsem/init.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/rwsem/mark/wake/readers.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/rwsem/opt/spin/finish.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/rwsem/opt/spin/start.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/rwsem/read/wait/finish.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/rwsem/read/wait/start.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/rwsem/set/owner.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/rwsem/set/reader/owned.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/rwsem/up/read/end.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/rwsem/up/write/end.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/rwsem/wake.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/rwsem/wake/finish.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/rwsem/write/finished.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/rwsem/write/wait/finish.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/rwsem/write/wait/start.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/save/track/hash.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/save/vmalloc/stack.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/sched/pelt/multiplier.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/sched/setaffinity/early.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/sched/show/task.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/sched/stat/runtime/rt.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/scheduler/tick.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/scmi/timeout/sync.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/sd/update/bus/speed/mode.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/sdhci/get/cd.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/selinux/avc/insert.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/selinux/avc/lookup.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/selinux/avc/node/delete.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/selinux/avc/node/replace.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/set/memory/nx.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/set/memory/ro.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/set/memory/rw.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/set/memory/x.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/set/module/permit/after/init.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/set/module/permit/before/init.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/set/shmem/page/flag.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/set/wake/flags.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/setscheduler/uclamp.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/sha256.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/shmem/alloc/page.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/should/alloc/pages/retry.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/should/end/madvise.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/show/mapcount/pages.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/show/max/freq.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/show/mem.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/show/resume/epoch/val.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/show/stack/hash.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/show/suspend/epoch/val.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/shrink/node/memcgs.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/shrink/slab/bypass.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/si/swapinfo.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/skip/swapcache.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/snapshot/refaults.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/snd/compr/use/pause/in/drain.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/snd/soc/card/get/comp/chain.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/sound/usb/support/cpu/suspend.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/subpage/dma/contig/alloc.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/swap/avail/heads/init.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/swap/slot/cache/active.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/swapin/add/anon/rmap.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/sync/txn/recvd.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/syscall/prctl/finished.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/test/clear/look/around/ref.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/thermal/pm/notify/suspend.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/timer/calc/index.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/timerfd/create.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/try/to/freeze/todo.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/try/to/freeze/todo/unfrozen.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/try/to/unmap/one.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/tune/inactive/ratio.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/tune/mmap/readaround.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/tune/scan/type.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/tune/swappiness.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/typec/store/partner/src/caps.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/typec/tcpci/override/toggling.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/typec/tcpm/adj/current/limit.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/typec/tcpm/get/timer.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/typec/tcpm/log.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/ufs/check/int/errors.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/ufs/clock/scaling.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/ufs/compl/command.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/ufs/fill/prdt.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/ufs/prepare/command.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/ufs/send/command.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/ufs/send/tm/command.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/ufs/send/uic/command.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/ufs/update/sdev.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/ufs/update/sysfs.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/unreserve/highatomic/bypass.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/unuse/swap/page.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/update/page/mapcount.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/update/topology/flags/workfn.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/usb/dev/resume.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/usb/dev/suspend.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/v4l2subdev/set/fmt.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/v4l2subdev/set/frame/interval.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/v4l2subdev/set/selection.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/vmpressure.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/waiting/for/page/migration.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/wakeup/bypass.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/watchdog/timer/softlockup.h) \
    $(wildcard include/ksym/sck/tp/func/android/vh/wq/lockup/pool.h) \
    $(wildcard include/ksym/traceiter/android/rvh/account/irq.h) \
    $(wildcard include/ksym/traceiter/android/rvh/after/dequeue/task.h) \
    $(wildcard include/ksym/traceiter/android/rvh/after/enqueue/task.h) \
    $(wildcard include/ksym/traceiter/android/rvh/alloc/si.h) \
    $(wildcard include/ksym/traceiter/android/rvh/alloc/swap/slot/cache.h) \
    $(wildcard include/ksym/traceiter/android/rvh/arm64/serror/panic.h) \
    $(wildcard include/ksym/traceiter/android/rvh/bad/mode.h) \
    $(wildcard include/ksym/traceiter/android/rvh/binder/transaction.h) \
    $(wildcard include/ksym/traceiter/android/rvh/build/perf/domains.h) \
    $(wildcard include/ksym/traceiter/android/rvh/can/migrate/task.h) \
    $(wildcard include/ksym/traceiter/android/rvh/cgroup/force/kthread/migration.h) \
    $(wildcard include/ksym/traceiter/android/rvh/check/preempt/tick.h) \
    $(wildcard include/ksym/traceiter/android/rvh/check/preempt/wakeup.h) \
    $(wildcard include/ksym/traceiter/android/rvh/cpu/cgroup/attach.h) \
    $(wildcard include/ksym/traceiter/android/rvh/cpu/cgroup/can/attach.h) \
    $(wildcard include/ksym/traceiter/android/rvh/cpu/cgroup/online.h) \
    $(wildcard include/ksym/traceiter/android/rvh/cpu/overutilized.h) \
    $(wildcard include/ksym/traceiter/android/rvh/cpufreq/transition.h) \
    $(wildcard include/ksym/traceiter/android/rvh/cpuset/fork.h) \
    $(wildcard include/ksym/traceiter/android/rvh/dequeue/entity.h) \
    $(wildcard include/ksym/traceiter/android/rvh/dequeue/task.h) \
    $(wildcard include/ksym/traceiter/android/rvh/dequeue/task/fair.h) \
    $(wildcard include/ksym/traceiter/android/rvh/dequeue/task/idle.h) \
    $(wildcard include/ksym/traceiter/android/rvh/die/kernel/fault.h) \
    $(wildcard include/ksym/traceiter/android/rvh/dma/buf/stats/teardown.h) \
    $(wildcard include/ksym/traceiter/android/rvh/do/mem/abort.h) \
    $(wildcard include/ksym/traceiter/android/rvh/do/ptrauth/fault.h) \
    $(wildcard include/ksym/traceiter/android/rvh/do/sched/yield.h) \
    $(wildcard include/ksym/traceiter/android/rvh/do/sea.h) \
    $(wildcard include/ksym/traceiter/android/rvh/do/sp/pc/abort.h) \
    $(wildcard include/ksym/traceiter/android/rvh/do/undefinstr.h) \
    $(wildcard include/ksym/traceiter/android/rvh/drain/slots/cache/cpu.h) \
    $(wildcard include/ksym/traceiter/android/rvh/enqueue/entity.h) \
    $(wildcard include/ksym/traceiter/android/rvh/enqueue/task.h) \
    $(wildcard include/ksym/traceiter/android/rvh/enqueue/task/fair.h) \
    $(wildcard include/ksym/traceiter/android/rvh/find/busiest/group.h) \
    $(wildcard include/ksym/traceiter/android/rvh/find/busiest/queue.h) \
    $(wildcard include/ksym/traceiter/android/rvh/find/energy/efficient/cpu.h) \
    $(wildcard include/ksym/traceiter/android/rvh/find/lowest/rq.h) \
    $(wildcard include/ksym/traceiter/android/rvh/find/new/ilb.h) \
    $(wildcard include/ksym/traceiter/android/rvh/finish/prio/fork.h) \
    $(wildcard include/ksym/traceiter/android/rvh/flush/task.h) \
    $(wildcard include/ksym/traceiter/android/rvh/force/compatible/post.h) \
    $(wildcard include/ksym/traceiter/android/rvh/force/compatible/pre.h) \
    $(wildcard include/ksym/traceiter/android/rvh/free/swap/slot.h) \
    $(wildcard include/ksym/traceiter/android/rvh/get/swap/page.h) \
    $(wildcard include/ksym/traceiter/android/rvh/gic/v3/set/affinity.h) \
    $(wildcard include/ksym/traceiter/android/rvh/handle/pte/fault/end.h) \
    $(wildcard include/ksym/traceiter/android/rvh/iommu/setup/dma/ops.h) \
    $(wildcard include/ksym/traceiter/android/rvh/irqs/disable.h) \
    $(wildcard include/ksym/traceiter/android/rvh/irqs/enable.h) \
    $(wildcard include/ksym/traceiter/android/rvh/media/device/setup/link.h) \
    $(wildcard include/ksym/traceiter/android/rvh/migrate/queued/task.h) \
    $(wildcard include/ksym/traceiter/android/rvh/new/task/stats.h) \
    $(wildcard include/ksym/traceiter/android/rvh/pci/d3/sleep.h) \
    $(wildcard include/ksym/traceiter/android/rvh/pick/next/entity.h) \
    $(wildcard include/ksym/traceiter/android/rvh/place/entity.h) \
    $(wildcard include/ksym/traceiter/android/rvh/post/init/entity/util/avg.h) \
    $(wildcard include/ksym/traceiter/android/rvh/preempt/disable.h) \
    $(wildcard include/ksym/traceiter/android/rvh/preempt/enable.h) \
    $(wildcard include/ksym/traceiter/android/rvh/prepare/prio/fork.h) \
    $(wildcard include/ksym/traceiter/android/rvh/refrigerator.h) \
    $(wildcard include/ksym/traceiter/android/rvh/replace/next/task/fair.h) \
    $(wildcard include/ksym/traceiter/android/rvh/report/bug.h) \
    $(wildcard include/ksym/traceiter/android/rvh/resume/cpus.h) \
    $(wildcard include/ksym/traceiter/android/rvh/rtmutex/prepare/setprio.h) \
    $(wildcard include/ksym/traceiter/android/rvh/sched/balance/rt.h) \
    $(wildcard include/ksym/traceiter/android/rvh/sched/cpu/dying.h) \
    $(wildcard include/ksym/traceiter/android/rvh/sched/cpu/starting.h) \
    $(wildcard include/ksym/traceiter/android/rvh/sched/exec.h) \
    $(wildcard include/ksym/traceiter/android/rvh/sched/fork.h) \
    $(wildcard include/ksym/traceiter/android/rvh/sched/fork/init.h) \
    $(wildcard include/ksym/traceiter/android/rvh/sched/newidle/balance.h) \
    $(wildcard include/ksym/traceiter/android/rvh/sched/nohz/balancer/kick.h) \
    $(wildcard include/ksym/traceiter/android/rvh/sched/rebalance/domains.h) \
    $(wildcard include/ksym/traceiter/android/rvh/sched/setaffinity.h) \
    $(wildcard include/ksym/traceiter/android/rvh/schedule.h) \
    $(wildcard include/ksym/traceiter/android/rvh/schedule/bug.h) \
    $(wildcard include/ksym/traceiter/android/rvh/select/fallback/rq.h) \
    $(wildcard include/ksym/traceiter/android/rvh/select/task/rq/fair.h) \
    $(wildcard include/ksym/traceiter/android/rvh/select/task/rq/rt.h) \
    $(wildcard include/ksym/traceiter/android/rvh/set/balance/anon/file/reclaim.h) \
    $(wildcard include/ksym/traceiter/android/rvh/set/cpus/allowed/comm.h) \
    $(wildcard include/ksym/traceiter/android/rvh/set/gfp/zone/flags.h) \
    $(wildcard include/ksym/traceiter/android/rvh/set/iowait.h) \
    $(wildcard include/ksym/traceiter/android/rvh/set/readahead/gfp/mask.h) \
    $(wildcard include/ksym/traceiter/android/rvh/set/skip/swapcache/flags.h) \
    $(wildcard include/ksym/traceiter/android/rvh/set/task/cpu.h) \
    $(wildcard include/ksym/traceiter/android/rvh/set/user/nice.h) \
    $(wildcard include/ksym/traceiter/android/rvh/setscheduler.h) \
    $(wildcard include/ksym/traceiter/android/rvh/show/max/freq.h) \
    $(wildcard include/ksym/traceiter/android/rvh/tcp/recvmsg.h) \
    $(wildcard include/ksym/traceiter/android/rvh/tcp/recvmsg/stat.h) \
    $(wildcard include/ksym/traceiter/android/rvh/tcp/sendmsg/locked.h) \
    $(wildcard include/ksym/traceiter/android/rvh/tick/entry.h) \
    $(wildcard include/ksym/traceiter/android/rvh/try/to/wake/up.h) \
    $(wildcard include/ksym/traceiter/android/rvh/try/to/wake/up/success.h) \
    $(wildcard include/ksym/traceiter/android/rvh/ttwu/cond.h) \
    $(wildcard include/ksym/traceiter/android/rvh/typec/tcpci/chk/contaminant.h) \
    $(wildcard include/ksym/traceiter/android/rvh/typec/tcpci/get/vbus.h) \
    $(wildcard include/ksym/traceiter/android/rvh/uclamp/eff/get.h) \
    $(wildcard include/ksym/traceiter/android/rvh/udp/recvmsg.h) \
    $(wildcard include/ksym/traceiter/android/rvh/udp/sendmsg.h) \
    $(wildcard include/ksym/traceiter/android/rvh/ufs/complete/init.h) \
    $(wildcard include/ksym/traceiter/android/rvh/ufs/reprogram/all/keys.h) \
    $(wildcard include/ksym/traceiter/android/rvh/update/cpu/capacity.h) \
    $(wildcard include/ksym/traceiter/android/rvh/update/cpus/allowed.h) \
    $(wildcard include/ksym/traceiter/android/rvh/update/misfit/status.h) \
    $(wildcard include/ksym/traceiter/android/rvh/util/est/update.h) \
    $(wildcard include/ksym/traceiter/android/rvh/v4l2subdev/set/fmt.h) \
    $(wildcard include/ksym/traceiter/android/rvh/v4l2subdev/set/frame/interval.h) \
    $(wildcard include/ksym/traceiter/android/rvh/v4l2subdev/set/selection.h) \
    $(wildcard include/ksym/traceiter/android/rvh/wake/up/new/task.h) \
    $(wildcard include/ksym/traceiter/android/vh/cgroup/throttle/swaprate.h) \
    $(wildcard include/ksym/traceiter/android/vh/account/swap/pages.h) \
    $(wildcard include/ksym/traceiter/android/vh/account/task/time.h) \
    $(wildcard include/ksym/traceiter/android/vh/add/page/to/lrulist.h) \
    $(wildcard include/ksym/traceiter/android/vh/add/to/avail/list.h) \
    $(wildcard include/ksym/traceiter/android/vh/aes/decrypt.h) \
    $(wildcard include/ksym/traceiter/android/vh/aes/encrypt.h) \
    $(wildcard include/ksym/traceiter/android/vh/aes/expandkey.h) \
    $(wildcard include/ksym/traceiter/android/vh/alloc/pages/failure/bypass.h) \
    $(wildcard include/ksym/traceiter/android/vh/alloc/pages/reclaim/bypass.h) \
    $(wildcard include/ksym/traceiter/android/vh/alloc/pages/slowpath/begin.h) \
    $(wildcard include/ksym/traceiter/android/vh/alloc/pages/slowpath/end.h) \
    $(wildcard include/ksym/traceiter/android/vh/alloc/si.h) \
    $(wildcard include/ksym/traceiter/android/vh/alloc/swap/slot/cache.h) \
    $(wildcard include/ksym/traceiter/android/vh/allow/domain/state.h) \
    $(wildcard include/ksym/traceiter/android/vh/alter/futex/plist/add.h) \
    $(wildcard include/ksym/traceiter/android/vh/alter/mutex/list/add.h) \
    $(wildcard include/ksym/traceiter/android/vh/alter/rwsem/list/add.h) \
    $(wildcard include/ksym/traceiter/android/vh/arch/set/freq/scale.h) \
    $(wildcard include/ksym/traceiter/android/vh/binder/alloc/new/buf/locked.h) \
    $(wildcard include/ksym/traceiter/android/vh/binder/del/ref.h) \
    $(wildcard include/ksym/traceiter/android/vh/binder/free/proc.h) \
    $(wildcard include/ksym/traceiter/android/vh/binder/has/work/ilocked.h) \
    $(wildcard include/ksym/traceiter/android/vh/binder/looper/state/registered.h) \
    $(wildcard include/ksym/traceiter/android/vh/binder/new/ref.h) \
    $(wildcard include/ksym/traceiter/android/vh/binder/preset.h) \
    $(wildcard include/ksym/traceiter/android/vh/binder/print/transaction/info.h) \
    $(wildcard include/ksym/traceiter/android/vh/binder/priority/skip.h) \
    $(wildcard include/ksym/traceiter/android/vh/binder/proc/transaction.h) \
    $(wildcard include/ksym/traceiter/android/vh/binder/proc/transaction/end.h) \
    $(wildcard include/ksym/traceiter/android/vh/binder/read/done.h) \
    $(wildcard include/ksym/traceiter/android/vh/binder/reply.h) \
    $(wildcard include/ksym/traceiter/android/vh/binder/restore/priority.h) \
    $(wildcard include/ksym/traceiter/android/vh/binder/set/priority.h) \
    $(wildcard include/ksym/traceiter/android/vh/binder/thread/read.h) \
    $(wildcard include/ksym/traceiter/android/vh/binder/thread/release.h) \
    $(wildcard include/ksym/traceiter/android/vh/binder/trans.h) \
    $(wildcard include/ksym/traceiter/android/vh/binder/transaction/init.h) \
    $(wildcard include/ksym/traceiter/android/vh/binder/wait/for/work.h) \
    $(wildcard include/ksym/traceiter/android/vh/binder/wakeup/ilocked.h) \
    $(wildcard include/ksym/traceiter/android/vh/blk/alloc/rqs.h) \
    $(wildcard include/ksym/traceiter/android/vh/blk/rq/ctx/init.h) \
    $(wildcard include/ksym/traceiter/android/vh/build/sched/domains.h) \
    $(wildcard include/ksym/traceiter/android/vh/cgroup/attach.h) \
    $(wildcard include/ksym/traceiter/android/vh/cgroup/set/task.h) \
    $(wildcard include/ksym/traceiter/android/vh/check/bpf/syscall.h) \
    $(wildcard include/ksym/traceiter/android/vh/check/file/open.h) \
    $(wildcard include/ksym/traceiter/android/vh/check/mmap/file.h) \
    $(wildcard include/ksym/traceiter/android/vh/check/page/look/around/ref.h) \
    $(wildcard include/ksym/traceiter/android/vh/check/uninterruptible/tasks.h) \
    $(wildcard include/ksym/traceiter/android/vh/check/uninterruptible/tasks/dn.h) \
    $(wildcard include/ksym/traceiter/android/vh/cleanup/old/buffers/bypass.h) \
    $(wildcard include/ksym/traceiter/android/vh/clear/mask/adjust.h) \
    $(wildcard include/ksym/traceiter/android/vh/clear/reserved/fmt/fields.h) \
    $(wildcard include/ksym/traceiter/android/vh/cma/alloc/finish.h) \
    $(wildcard include/ksym/traceiter/android/vh/cma/alloc/start.h) \
    $(wildcard include/ksym/traceiter/android/vh/cma/drain/all/pages/bypass.h) \
    $(wildcard include/ksym/traceiter/android/vh/commit/creds.h) \
    $(wildcard include/ksym/traceiter/android/vh/compact/finished.h) \
    $(wildcard include/ksym/traceiter/android/vh/count/pswpin.h) \
    $(wildcard include/ksym/traceiter/android/vh/count/pswpout.h) \
    $(wildcard include/ksym/traceiter/android/vh/count/swpout/vm/event.h) \
    $(wildcard include/ksym/traceiter/android/vh/cow/user/page.h) \
    $(wildcard include/ksym/traceiter/android/vh/cpu/idle/enter.h) \
    $(wildcard include/ksym/traceiter/android/vh/cpu/idle/exit.h) \
    $(wildcard include/ksym/traceiter/android/vh/cpu/up.h) \
    $(wildcard include/ksym/traceiter/android/vh/cpufreq/acct/update/power.h) \
    $(wildcard include/ksym/traceiter/android/vh/cpufreq/fast/switch.h) \
    $(wildcard include/ksym/traceiter/android/vh/cpufreq/resolve/freq.h) \
    $(wildcard include/ksym/traceiter/android/vh/cpufreq/target.h) \
    $(wildcard include/ksym/traceiter/android/vh/cpuidle/psci/enter.h) \
    $(wildcard include/ksym/traceiter/android/vh/cpuidle/psci/exit.h) \
    $(wildcard include/ksym/traceiter/android/vh/del/from/avail/list.h) \
    $(wildcard include/ksym/traceiter/android/vh/del/page/from/lrulist.h) \
    $(wildcard include/ksym/traceiter/android/vh/disable/thermal/cooling/stats.h) \
    $(wildcard include/ksym/traceiter/android/vh/dm/bufio/shrink/scan/bypass.h) \
    $(wildcard include/ksym/traceiter/android/vh/do/futex.h) \
    $(wildcard include/ksym/traceiter/android/vh/do/page/trylock.h) \
    $(wildcard include/ksym/traceiter/android/vh/do/send/sig/info.h) \
    $(wildcard include/ksym/traceiter/android/vh/do/traversal/lruvec.h) \
    $(wildcard include/ksym/traceiter/android/vh/do/wake/up/sync.h) \
    $(wildcard include/ksym/traceiter/android/vh/drain/all/pages/bypass.h) \
    $(wildcard include/ksym/traceiter/android/vh/drain/slots/cache/cpu.h) \
    $(wildcard include/ksym/traceiter/android/vh/dump/throttled/rt/tasks.h) \
    $(wildcard include/ksym/traceiter/android/vh/dup/task/struct.h) \
    $(wildcard include/ksym/traceiter/android/vh/em/cpu/energy.h) \
    $(wildcard include/ksym/traceiter/android/vh/enable/thermal/genl/check.h) \
    $(wildcard include/ksym/traceiter/android/vh/ep/create/wakeup/source.h) \
    $(wildcard include/ksym/traceiter/android/vh/exclude/reserved/zone.h) \
    $(wildcard include/ksym/traceiter/android/vh/exit/creds.h) \
    $(wildcard include/ksym/traceiter/android/vh/exit/mm.h) \
    $(wildcard include/ksym/traceiter/android/vh/filemap/fault/cache/page.h) \
    $(wildcard include/ksym/traceiter/android/vh/filemap/fault/get/page.h) \
    $(wildcard include/ksym/traceiter/android/vh/fill/ext/fmtdesc.h) \
    $(wildcard include/ksym/traceiter/android/vh/finish/update/load/avg/se.h) \
    $(wildcard include/ksym/traceiter/android/vh/free/pages.h) \
    $(wildcard include/ksym/traceiter/android/vh/free/swap/slot.h) \
    $(wildcard include/ksym/traceiter/android/vh/free/task.h) \
    $(wildcard include/ksym/traceiter/android/vh/free/unref/page/bypass.h) \
    $(wildcard include/ksym/traceiter/android/vh/freq/qos/add/request.h) \
    $(wildcard include/ksym/traceiter/android/vh/freq/qos/remove/request.h) \
    $(wildcard include/ksym/traceiter/android/vh/freq/qos/update/request.h) \
    $(wildcard include/ksym/traceiter/android/vh/freq/table/limits.h) \
    $(wildcard include/ksym/traceiter/android/vh/ftrace/dump/buffer.h) \
    $(wildcard include/ksym/traceiter/android/vh/ftrace/format/check.h) \
    $(wildcard include/ksym/traceiter/android/vh/ftrace/oops/enter.h) \
    $(wildcard include/ksym/traceiter/android/vh/ftrace/oops/exit.h) \
    $(wildcard include/ksym/traceiter/android/vh/ftrace/size/check.h) \
    $(wildcard include/ksym/traceiter/android/vh/futex/sleep/start.h) \
    $(wildcard include/ksym/traceiter/android/vh/futex/wait/end.h) \
    $(wildcard include/ksym/traceiter/android/vh/futex/wait/start.h) \
    $(wildcard include/ksym/traceiter/android/vh/futex/wake/this.h) \
    $(wildcard include/ksym/traceiter/android/vh/futex/wake/traverse/plist.h) \
    $(wildcard include/ksym/traceiter/android/vh/futex/wake/up/q/finish.h) \
    $(wildcard include/ksym/traceiter/android/vh/get/from/fragment/pool.h) \
    $(wildcard include/ksym/traceiter/android/vh/get/swap/page.h) \
    $(wildcard include/ksym/traceiter/android/vh/gic/resume.h) \
    $(wildcard include/ksym/traceiter/android/vh/gpio/block/read.h) \
    $(wildcard include/ksym/traceiter/android/vh/handle/failed/page/trylock.h) \
    $(wildcard include/ksym/traceiter/android/vh/handle/pte/fault/end.h) \
    $(wildcard include/ksym/traceiter/android/vh/handle/tlb/conf.h) \
    $(wildcard include/ksym/traceiter/android/vh/inactive/is/low.h) \
    $(wildcard include/ksym/traceiter/android/vh/include/reserved/zone.h) \
    $(wildcard include/ksym/traceiter/android/vh/init/swap/info/struct.h) \
    $(wildcard include/ksym/traceiter/android/vh/iommu/alloc/iova.h) \
    $(wildcard include/ksym/traceiter/android/vh/iommu/free/iova.h) \
    $(wildcard include/ksym/traceiter/android/vh/iommu/iovad/alloc/iova.h) \
    $(wildcard include/ksym/traceiter/android/vh/iommu/iovad/free/iova.h) \
    $(wildcard include/ksym/traceiter/android/vh/iommu/setup/dma/ops.h) \
    $(wildcard include/ksym/traceiter/android/vh/ipi/stop.h) \
    $(wildcard include/ksym/traceiter/android/vh/ipv6/gen/linklocal/addr.h) \
    $(wildcard include/ksym/traceiter/android/vh/irqtime/account/process/tick.h) \
    $(wildcard include/ksym/traceiter/android/vh/is/fpsimd/save.h) \
    $(wildcard include/ksym/traceiter/android/vh/jiffies/update.h) \
    $(wildcard include/ksym/traceiter/android/vh/kfree/skb.h) \
    $(wildcard include/ksym/traceiter/android/vh/killed/process.h) \
    $(wildcard include/ksym/traceiter/android/vh/kmalloc/slab.h) \
    $(wildcard include/ksym/traceiter/android/vh/kvmalloc/node/use/vmalloc.h) \
    $(wildcard include/ksym/traceiter/android/vh/logbuf.h) \
    $(wildcard include/ksym/traceiter/android/vh/logbuf/pr/cont.h) \
    $(wildcard include/ksym/traceiter/android/vh/look/around.h) \
    $(wildcard include/ksym/traceiter/android/vh/look/around/migrate/page.h) \
    $(wildcard include/ksym/traceiter/android/vh/madvise/cold/or/pageout.h) \
    $(wildcard include/ksym/traceiter/android/vh/madvise/cold/or/pageout/abort.h) \
    $(wildcard include/ksym/traceiter/android/vh/map/util/freq.h) \
    $(wildcard include/ksym/traceiter/android/vh/mark/page/accessed.h) \
    $(wildcard include/ksym/traceiter/android/vh/media/device/setup/link.h) \
    $(wildcard include/ksym/traceiter/android/vh/mem/cgroup/alloc.h) \
    $(wildcard include/ksym/traceiter/android/vh/mem/cgroup/css/offline.h) \
    $(wildcard include/ksym/traceiter/android/vh/mem/cgroup/css/online.h) \
    $(wildcard include/ksym/traceiter/android/vh/mem/cgroup/free.h) \
    $(wildcard include/ksym/traceiter/android/vh/mem/cgroup/id/remove.h) \
    $(wildcard include/ksym/traceiter/android/vh/meminfo/proc/show.h) \
    $(wildcard include/ksym/traceiter/android/vh/migrate/page/states.h) \
    $(wildcard include/ksym/traceiter/android/vh/mm/dirty/limits.h) \
    $(wildcard include/ksym/traceiter/android/vh/mmap/region.h) \
    $(wildcard include/ksym/traceiter/android/vh/mmc/attach/sd.h) \
    $(wildcard include/ksym/traceiter/android/vh/mmc/blk/mq/rw/recovery.h) \
    $(wildcard include/ksym/traceiter/android/vh/mmc/blk/reset.h) \
    $(wildcard include/ksym/traceiter/android/vh/mmc/gpio/cd/irqt.h) \
    $(wildcard include/ksym/traceiter/android/vh/mmput.h) \
    $(wildcard include/ksym/traceiter/android/vh/mutex/can/spin/on/owner.h) \
    $(wildcard include/ksym/traceiter/android/vh/mutex/opt/spin/finish.h) \
    $(wildcard include/ksym/traceiter/android/vh/mutex/opt/spin/start.h) \
    $(wildcard include/ksym/traceiter/android/vh/mutex/unlock/slowpath.h) \
    $(wildcard include/ksym/traceiter/android/vh/mutex/unlock/slowpath/end.h) \
    $(wildcard include/ksym/traceiter/android/vh/mutex/wait/finish.h) \
    $(wildcard include/ksym/traceiter/android/vh/mutex/wait/start.h) \
    $(wildcard include/ksym/traceiter/android/vh/mz/exit.h) \
    $(wildcard include/ksym/traceiter/android/vh/of/i2c/get/board/info.h) \
    $(wildcard include/ksym/traceiter/android/vh/oom/check/panic.h) \
    $(wildcard include/ksym/traceiter/android/vh/override/creds.h) \
    $(wildcard include/ksym/traceiter/android/vh/page/isolated/for/reclaim.h) \
    $(wildcard include/ksym/traceiter/android/vh/page/referenced/check/bypass.h) \
    $(wildcard include/ksym/traceiter/android/vh/page/referenced/one/end.h) \
    $(wildcard include/ksym/traceiter/android/vh/page/should/be/protected.h) \
    $(wildcard include/ksym/traceiter/android/vh/page/trylock/clear.h) \
    $(wildcard include/ksym/traceiter/android/vh/page/trylock/get/result.h) \
    $(wildcard include/ksym/traceiter/android/vh/page/trylock/set.h) \
    $(wildcard include/ksym/traceiter/android/vh/pagecache/get/page.h) \
    $(wildcard include/ksym/traceiter/android/vh/pageset/update.h) \
    $(wildcard include/ksym/traceiter/android/vh/pcplist/add/cma/pages/bypass.h) \
    $(wildcard include/ksym/traceiter/android/vh/percpu/rwsem/wq/add.h) \
    $(wildcard include/ksym/traceiter/android/vh/prepare/update/load/avg/se.h) \
    $(wildcard include/ksym/traceiter/android/vh/printk/hotplug.h) \
    $(wildcard include/ksym/traceiter/android/vh/process/killed.h) \
    $(wildcard include/ksym/traceiter/android/vh/psi/event.h) \
    $(wildcard include/ksym/traceiter/android/vh/psi/group.h) \
    $(wildcard include/ksym/traceiter/android/vh/ptype/head.h) \
    $(wildcard include/ksym/traceiter/android/vh/ra/tuning/max/page.h) \
    $(wildcard include/ksym/traceiter/android/vh/record/mutex/lock/starttime.h) \
    $(wildcard include/ksym/traceiter/android/vh/record/pcpu/rwsem/starttime.h) \
    $(wildcard include/ksym/traceiter/android/vh/record/rtmutex/lock/starttime.h) \
    $(wildcard include/ksym/traceiter/android/vh/record/rwsem/lock/starttime.h) \
    $(wildcard include/ksym/traceiter/android/vh/remove/vmalloc/stack.h) \
    $(wildcard include/ksym/traceiter/android/vh/revert/creds.h) \
    $(wildcard include/ksym/traceiter/android/vh/rmqueue.h) \
    $(wildcard include/ksym/traceiter/android/vh/rmqueue/bulk/bypass.h) \
    $(wildcard include/ksym/traceiter/android/vh/rproc/recovery.h) \
    $(wildcard include/ksym/traceiter/android/vh/rtmutex/wait/finish.h) \
    $(wildcard include/ksym/traceiter/android/vh/rtmutex/wait/start.h) \
    $(wildcard include/ksym/traceiter/android/vh/rwsem/can/spin/on/owner.h) \
    $(wildcard include/ksym/traceiter/android/vh/rwsem/init.h) \
    $(wildcard include/ksym/traceiter/android/vh/rwsem/mark/wake/readers.h) \
    $(wildcard include/ksym/traceiter/android/vh/rwsem/opt/spin/finish.h) \
    $(wildcard include/ksym/traceiter/android/vh/rwsem/opt/spin/start.h) \
    $(wildcard include/ksym/traceiter/android/vh/rwsem/read/wait/finish.h) \
    $(wildcard include/ksym/traceiter/android/vh/rwsem/read/wait/start.h) \
    $(wildcard include/ksym/traceiter/android/vh/rwsem/set/owner.h) \
    $(wildcard include/ksym/traceiter/android/vh/rwsem/set/reader/owned.h) \
    $(wildcard include/ksym/traceiter/android/vh/rwsem/up/read/end.h) \
    $(wildcard include/ksym/traceiter/android/vh/rwsem/up/write/end.h) \
    $(wildcard include/ksym/traceiter/android/vh/rwsem/wake.h) \
    $(wildcard include/ksym/traceiter/android/vh/rwsem/wake/finish.h) \
    $(wildcard include/ksym/traceiter/android/vh/rwsem/write/finished.h) \
    $(wildcard include/ksym/traceiter/android/vh/rwsem/write/wait/finish.h) \
    $(wildcard include/ksym/traceiter/android/vh/rwsem/write/wait/start.h) \
    $(wildcard include/ksym/traceiter/android/vh/save/track/hash.h) \
    $(wildcard include/ksym/traceiter/android/vh/save/vmalloc/stack.h) \
    $(wildcard include/ksym/traceiter/android/vh/sched/pelt/multiplier.h) \
    $(wildcard include/ksym/traceiter/android/vh/sched/setaffinity/early.h) \
    $(wildcard include/ksym/traceiter/android/vh/sched/show/task.h) \
    $(wildcard include/ksym/traceiter/android/vh/sched/stat/runtime/rt.h) \
    $(wildcard include/ksym/traceiter/android/vh/scheduler/tick.h) \
    $(wildcard include/ksym/traceiter/android/vh/scmi/timeout/sync.h) \
    $(wildcard include/ksym/traceiter/android/vh/sd/update/bus/speed/mode.h) \
    $(wildcard include/ksym/traceiter/android/vh/sdhci/get/cd.h) \
    $(wildcard include/ksym/traceiter/android/vh/selinux/avc/insert.h) \
    $(wildcard include/ksym/traceiter/android/vh/selinux/avc/lookup.h) \
    $(wildcard include/ksym/traceiter/android/vh/selinux/avc/node/delete.h) \
    $(wildcard include/ksym/traceiter/android/vh/selinux/avc/node/replace.h) \
    $(wildcard include/ksym/traceiter/android/vh/set/memory/nx.h) \
    $(wildcard include/ksym/traceiter/android/vh/set/memory/ro.h) \
    $(wildcard include/ksym/traceiter/android/vh/set/memory/rw.h) \
    $(wildcard include/ksym/traceiter/android/vh/set/memory/x.h) \
    $(wildcard include/ksym/traceiter/android/vh/set/module/permit/after/init.h) \
    $(wildcard include/ksym/traceiter/android/vh/set/module/permit/before/init.h) \
    $(wildcard include/ksym/traceiter/android/vh/set/shmem/page/flag.h) \
    $(wildcard include/ksym/traceiter/android/vh/set/wake/flags.h) \
    $(wildcard include/ksym/traceiter/android/vh/setscheduler/uclamp.h) \
    $(wildcard include/ksym/traceiter/android/vh/sha256.h) \
    $(wildcard include/ksym/traceiter/android/vh/shmem/alloc/page.h) \
    $(wildcard include/ksym/traceiter/android/vh/should/alloc/pages/retry.h) \
    $(wildcard include/ksym/traceiter/android/vh/should/end/madvise.h) \
    $(wildcard include/ksym/traceiter/android/vh/show/mapcount/pages.h) \
    $(wildcard include/ksym/traceiter/android/vh/show/max/freq.h) \
    $(wildcard include/ksym/traceiter/android/vh/show/mem.h) \
    $(wildcard include/ksym/traceiter/android/vh/show/resume/epoch/val.h) \
    $(wildcard include/ksym/traceiter/android/vh/show/stack/hash.h) \
    $(wildcard include/ksym/traceiter/android/vh/show/suspend/epoch/val.h) \
    $(wildcard include/ksym/traceiter/android/vh/shrink/node/memcgs.h) \
    $(wildcard include/ksym/traceiter/android/vh/shrink/slab/bypass.h) \
    $(wildcard include/ksym/traceiter/android/vh/si/swapinfo.h) \
    $(wildcard include/ksym/traceiter/android/vh/skip/swapcache.h) \
    $(wildcard include/ksym/traceiter/android/vh/snapshot/refaults.h) \
    $(wildcard include/ksym/traceiter/android/vh/snd/compr/use/pause/in/drain.h) \
    $(wildcard include/ksym/traceiter/android/vh/snd/soc/card/get/comp/chain.h) \
    $(wildcard include/ksym/traceiter/android/vh/sound/usb/support/cpu/suspend.h) \
    $(wildcard include/ksym/traceiter/android/vh/subpage/dma/contig/alloc.h) \
    $(wildcard include/ksym/traceiter/android/vh/swap/avail/heads/init.h) \
    $(wildcard include/ksym/traceiter/android/vh/swap/slot/cache/active.h) \
    $(wildcard include/ksym/traceiter/android/vh/swapin/add/anon/rmap.h) \
    $(wildcard include/ksym/traceiter/android/vh/sync/txn/recvd.h) \
    $(wildcard include/ksym/traceiter/android/vh/syscall/prctl/finished.h) \
    $(wildcard include/ksym/traceiter/android/vh/test/clear/look/around/ref.h) \
    $(wildcard include/ksym/traceiter/android/vh/thermal/pm/notify/suspend.h) \
    $(wildcard include/ksym/traceiter/android/vh/timer/calc/index.h) \
    $(wildcard include/ksym/traceiter/android/vh/timerfd/create.h) \
    $(wildcard include/ksym/traceiter/android/vh/try/to/freeze/todo.h) \
    $(wildcard include/ksym/traceiter/android/vh/try/to/freeze/todo/unfrozen.h) \
    $(wildcard include/ksym/traceiter/android/vh/try/to/unmap/one.h) \
    $(wildcard include/ksym/traceiter/android/vh/tune/inactive/ratio.h) \
    $(wildcard include/ksym/traceiter/android/vh/tune/mmap/readaround.h) \
    $(wildcard include/ksym/traceiter/android/vh/tune/scan/type.h) \
    $(wildcard include/ksym/traceiter/android/vh/tune/swappiness.h) \
    $(wildcard include/ksym/traceiter/android/vh/typec/store/partner/src/caps.h) \
    $(wildcard include/ksym/traceiter/android/vh/typec/tcpci/override/toggling.h) \
    $(wildcard include/ksym/traceiter/android/vh/typec/tcpm/adj/current/limit.h) \
    $(wildcard include/ksym/traceiter/android/vh/typec/tcpm/get/timer.h) \
    $(wildcard include/ksym/traceiter/android/vh/typec/tcpm/log.h) \
    $(wildcard include/ksym/traceiter/android/vh/ufs/check/int/errors.h) \
    $(wildcard include/ksym/traceiter/android/vh/ufs/clock/scaling.h) \
    $(wildcard include/ksym/traceiter/android/vh/ufs/compl/command.h) \
    $(wildcard include/ksym/traceiter/android/vh/ufs/fill/prdt.h) \
    $(wildcard include/ksym/traceiter/android/vh/ufs/prepare/command.h) \
    $(wildcard include/ksym/traceiter/android/vh/ufs/send/command.h) \
    $(wildcard include/ksym/traceiter/android/vh/ufs/send/tm/command.h) \
    $(wildcard include/ksym/traceiter/android/vh/ufs/send/uic/command.h) \
    $(wildcard include/ksym/traceiter/android/vh/ufs/update/sdev.h) \
    $(wildcard include/ksym/traceiter/android/vh/ufs/update/sysfs.h) \
    $(wildcard include/ksym/traceiter/android/vh/unreserve/highatomic/bypass.h) \
    $(wildcard include/ksym/traceiter/android/vh/unuse/swap/page.h) \
    $(wildcard include/ksym/traceiter/android/vh/update/page/mapcount.h) \
    $(wildcard include/ksym/traceiter/android/vh/update/topology/flags/workfn.h) \
    $(wildcard include/ksym/traceiter/android/vh/usb/dev/resume.h) \
    $(wildcard include/ksym/traceiter/android/vh/usb/dev/suspend.h) \
    $(wildcard include/ksym/traceiter/android/vh/v4l2subdev/set/fmt.h) \
    $(wildcard include/ksym/traceiter/android/vh/v4l2subdev/set/frame/interval.h) \
    $(wildcard include/ksym/traceiter/android/vh/v4l2subdev/set/selection.h) \
    $(wildcard include/ksym/traceiter/android/vh/vmpressure.h) \
    $(wildcard include/ksym/traceiter/android/vh/waiting/for/page/migration.h) \
    $(wildcard include/ksym/traceiter/android/vh/wakeup/bypass.h) \
    $(wildcard include/ksym/traceiter/android/vh/watchdog/timer/softlockup.h) \
    $(wildcard include/ksym/traceiter/android/vh/wq/lockup/pool.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/account/irq.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/after/dequeue/task.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/after/enqueue/task.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/alloc/si.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/alloc/swap/slot/cache.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/arm64/serror/panic.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/bad/mode.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/binder/transaction.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/build/perf/domains.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/can/migrate/task.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/cgroup/force/kthread/migration.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/check/preempt/tick.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/check/preempt/wakeup.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/cpu/cgroup/attach.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/cpu/cgroup/can/attach.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/cpu/cgroup/online.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/cpu/overutilized.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/cpufreq/transition.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/cpuset/fork.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/dequeue/entity.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/dequeue/task.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/dequeue/task/fair.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/dequeue/task/idle.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/die/kernel/fault.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/dma/buf/stats/teardown.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/do/mem/abort.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/do/ptrauth/fault.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/do/sched/yield.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/do/sea.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/do/sp/pc/abort.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/do/undefinstr.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/drain/slots/cache/cpu.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/enqueue/entity.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/enqueue/task.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/enqueue/task/fair.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/find/busiest/group.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/find/busiest/queue.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/find/energy/efficient/cpu.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/find/lowest/rq.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/find/new/ilb.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/finish/prio/fork.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/flush/task.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/force/compatible/post.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/force/compatible/pre.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/free/swap/slot.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/get/swap/page.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/gic/v3/set/affinity.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/handle/pte/fault/end.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/iommu/setup/dma/ops.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/irqs/disable.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/irqs/enable.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/media/device/setup/link.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/migrate/queued/task.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/new/task/stats.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/pci/d3/sleep.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/pick/next/entity.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/place/entity.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/post/init/entity/util/avg.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/preempt/disable.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/preempt/enable.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/prepare/prio/fork.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/refrigerator.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/replace/next/task/fair.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/report/bug.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/resume/cpus.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/rtmutex/prepare/setprio.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/sched/balance/rt.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/sched/cpu/dying.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/sched/cpu/starting.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/sched/exec.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/sched/fork.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/sched/fork/init.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/sched/newidle/balance.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/sched/nohz/balancer/kick.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/sched/rebalance/domains.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/sched/setaffinity.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/schedule.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/schedule/bug.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/select/fallback/rq.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/select/task/rq/fair.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/select/task/rq/rt.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/set/balance/anon/file/reclaim.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/set/cpus/allowed/comm.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/set/gfp/zone/flags.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/set/iowait.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/set/readahead/gfp/mask.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/set/skip/swapcache/flags.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/set/task/cpu.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/set/user/nice.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/setscheduler.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/show/max/freq.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/tcp/recvmsg.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/tcp/recvmsg/stat.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/tcp/sendmsg/locked.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/tick/entry.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/try/to/wake/up.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/try/to/wake/up/success.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/ttwu/cond.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/typec/tcpci/chk/contaminant.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/typec/tcpci/get/vbus.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/uclamp/eff/get.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/udp/recvmsg.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/udp/sendmsg.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/ufs/complete/init.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/ufs/reprogram/all/keys.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/update/cpu/capacity.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/update/cpus/allowed.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/update/misfit/status.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/util/est/update.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/v4l2subdev/set/fmt.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/v4l2subdev/set/frame/interval.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/v4l2subdev/set/selection.h) \
    $(wildcard include/ksym/tracepoint/android/rvh/wake/up/new/task.h) \
    $(wildcard include/ksym/tracepoint/android/vh/cgroup/throttle/swaprate.h) \
    $(wildcard include/ksym/tracepoint/android/vh/account/swap/pages.h) \
    $(wildcard include/ksym/tracepoint/android/vh/account/task/time.h) \
    $(wildcard include/ksym/tracepoint/android/vh/add/page/to/lrulist.h) \
    $(wildcard include/ksym/tracepoint/android/vh/add/to/avail/list.h) \
    $(wildcard include/ksym/tracepoint/android/vh/aes/decrypt.h) \
    $(wildcard include/ksym/tracepoint/android/vh/aes/encrypt.h) \
    $(wildcard include/ksym/tracepoint/android/vh/aes/expandkey.h) \
    $(wildcard include/ksym/tracepoint/android/vh/alloc/pages/failure/bypass.h) \
    $(wildcard include/ksym/tracepoint/android/vh/alloc/pages/reclaim/bypass.h) \
    $(wildcard include/ksym/tracepoint/android/vh/alloc/pages/slowpath/begin.h) \
    $(wildcard include/ksym/tracepoint/android/vh/alloc/pages/slowpath/end.h) \
    $(wildcard include/ksym/tracepoint/android/vh/alloc/si.h) \
    $(wildcard include/ksym/tracepoint/android/vh/alloc/swap/slot/cache.h) \
    $(wildcard include/ksym/tracepoint/android/vh/allow/domain/state.h) \
    $(wildcard include/ksym/tracepoint/android/vh/alter/futex/plist/add.h) \
    $(wildcard include/ksym/tracepoint/android/vh/alter/mutex/list/add.h) \
    $(wildcard include/ksym/tracepoint/android/vh/alter/rwsem/list/add.h) \
    $(wildcard include/ksym/tracepoint/android/vh/arch/set/freq/scale.h) \
    $(wildcard include/ksym/tracepoint/android/vh/binder/alloc/new/buf/locked.h) \
    $(wildcard include/ksym/tracepoint/android/vh/binder/del/ref.h) \
    $(wildcard include/ksym/tracepoint/android/vh/binder/free/proc.h) \
    $(wildcard include/ksym/tracepoint/android/vh/binder/has/work/ilocked.h) \
    $(wildcard include/ksym/tracepoint/android/vh/binder/looper/state/registered.h) \
    $(wildcard include/ksym/tracepoint/android/vh/binder/new/ref.h) \
    $(wildcard include/ksym/tracepoint/android/vh/binder/preset.h) \
    $(wildcard include/ksym/tracepoint/android/vh/binder/print/transaction/info.h) \
    $(wildcard include/ksym/tracepoint/android/vh/binder/priority/skip.h) \
    $(wildcard include/ksym/tracepoint/android/vh/binder/proc/transaction.h) \
    $(wildcard include/ksym/tracepoint/android/vh/binder/proc/transaction/end.h) \
    $(wildcard include/ksym/tracepoint/android/vh/binder/read/done.h) \
    $(wildcard include/ksym/tracepoint/android/vh/binder/reply.h) \
    $(wildcard include/ksym/tracepoint/android/vh/binder/restore/priority.h) \
    $(wildcard include/ksym/tracepoint/android/vh/binder/set/priority.h) \
    $(wildcard include/ksym/tracepoint/android/vh/binder/thread/read.h) \
    $(wildcard include/ksym/tracepoint/android/vh/binder/thread/release.h) \
    $(wildcard include/ksym/tracepoint/android/vh/binder/trans.h) \
    $(wildcard include/ksym/tracepoint/android/vh/binder/transaction/init.h) \
    $(wildcard include/ksym/tracepoint/android/vh/binder/wait/for/work.h) \
    $(wildcard include/ksym/tracepoint/android/vh/binder/wakeup/ilocked.h) \
    $(wildcard include/ksym/tracepoint/android/vh/blk/alloc/rqs.h) \
    $(wildcard include/ksym/tracepoint/android/vh/blk/rq/ctx/init.h) \
    $(wildcard include/ksym/tracepoint/android/vh/build/sched/domains.h) \
    $(wildcard include/ksym/tracepoint/android/vh/cgroup/attach.h) \
    $(wildcard include/ksym/tracepoint/android/vh/cgroup/set/task.h) \
    $(wildcard include/ksym/tracepoint/android/vh/check/bpf/syscall.h) \
    $(wildcard include/ksym/tracepoint/android/vh/check/file/open.h) \
    $(wildcard include/ksym/tracepoint/android/vh/check/mmap/file.h) \
    $(wildcard include/ksym/tracepoint/android/vh/check/page/look/around/ref.h) \
    $(wildcard include/ksym/tracepoint/android/vh/check/uninterruptible/tasks.h) \
    $(wildcard include/ksym/tracepoint/android/vh/check/uninterruptible/tasks/dn.h) \
    $(wildcard include/ksym/tracepoint/android/vh/cleanup/old/buffers/bypass.h) \
    $(wildcard include/ksym/tracepoint/android/vh/clear/mask/adjust.h) \
    $(wildcard include/ksym/tracepoint/android/vh/clear/reserved/fmt/fields.h) \
    $(wildcard include/ksym/tracepoint/android/vh/cma/alloc/finish.h) \
    $(wildcard include/ksym/tracepoint/android/vh/cma/alloc/start.h) \
    $(wildcard include/ksym/tracepoint/android/vh/cma/drain/all/pages/bypass.h) \
    $(wildcard include/ksym/tracepoint/android/vh/commit/creds.h) \
    $(wildcard include/ksym/tracepoint/android/vh/compact/finished.h) \
    $(wildcard include/ksym/tracepoint/android/vh/count/pswpin.h) \
    $(wildcard include/ksym/tracepoint/android/vh/count/pswpout.h) \
    $(wildcard include/ksym/tracepoint/android/vh/count/swpout/vm/event.h) \
    $(wildcard include/ksym/tracepoint/android/vh/cow/user/page.h) \
    $(wildcard include/ksym/tracepoint/android/vh/cpu/idle/enter.h) \
    $(wildcard include/ksym/tracepoint/android/vh/cpu/idle/exit.h) \
    $(wildcard include/ksym/tracepoint/android/vh/cpu/up.h) \
    $(wildcard include/ksym/tracepoint/android/vh/cpufreq/acct/update/power.h) \
    $(wildcard include/ksym/tracepoint/android/vh/cpufreq/fast/switch.h) \
    $(wildcard include/ksym/tracepoint/android/vh/cpufreq/resolve/freq.h) \
    $(wildcard include/ksym/tracepoint/android/vh/cpufreq/target.h) \
    $(wildcard include/ksym/tracepoint/android/vh/cpuidle/psci/enter.h) \
    $(wildcard include/ksym/tracepoint/android/vh/cpuidle/psci/exit.h) \
    $(wildcard include/ksym/tracepoint/android/vh/del/from/avail/list.h) \
    $(wildcard include/ksym/tracepoint/android/vh/del/page/from/lrulist.h) \
    $(wildcard include/ksym/tracepoint/android/vh/disable/thermal/cooling/stats.h) \
    $(wildcard include/ksym/tracepoint/android/vh/dm/bufio/shrink/scan/bypass.h) \
    $(wildcard include/ksym/tracepoint/android/vh/do/futex.h) \
    $(wildcard include/ksym/tracepoint/android/vh/do/page/trylock.h) \
    $(wildcard include/ksym/tracepoint/android/vh/do/send/sig/info.h) \
    $(wildcard include/ksym/tracepoint/android/vh/do/traversal/lruvec.h) \
    $(wildcard include/ksym/tracepoint/android/vh/do/wake/up/sync.h) \
    $(wildcard include/ksym/tracepoint/android/vh/drain/all/pages/bypass.h) \
    $(wildcard include/ksym/tracepoint/android/vh/drain/slots/cache/cpu.h) \
    $(wildcard include/ksym/tracepoint/android/vh/dump/throttled/rt/tasks.h) \
    $(wildcard include/ksym/tracepoint/android/vh/dup/task/struct.h) \
    $(wildcard include/ksym/tracepoint/android/vh/em/cpu/energy.h) \
    $(wildcard include/ksym/tracepoint/android/vh/enable/thermal/genl/check.h) \
    $(wildcard include/ksym/tracepoint/android/vh/ep/create/wakeup/source.h) \
    $(wildcard include/ksym/tracepoint/android/vh/exclude/reserved/zone.h) \
    $(wildcard include/ksym/tracepoint/android/vh/exit/creds.h) \
    $(wildcard include/ksym/tracepoint/android/vh/exit/mm.h) \
    $(wildcard include/ksym/tracepoint/android/vh/filemap/fault/cache/page.h) \
    $(wildcard include/ksym/tracepoint/android/vh/filemap/fault/get/page.h) \
    $(wildcard include/ksym/tracepoint/android/vh/fill/ext/fmtdesc.h) \
    $(wildcard include/ksym/tracepoint/android/vh/finish/update/load/avg/se.h) \
    $(wildcard include/ksym/tracepoint/android/vh/free/pages.h) \
    $(wildcard include/ksym/tracepoint/android/vh/free/swap/slot.h) \
    $(wildcard include/ksym/tracepoint/android/vh/free/task.h) \
    $(wildcard include/ksym/tracepoint/android/vh/free/unref/page/bypass.h) \
    $(wildcard include/ksym/tracepoint/android/vh/freq/qos/add/request.h) \
    $(wildcard include/ksym/tracepoint/android/vh/freq/qos/remove/request.h) \
    $(wildcard include/ksym/tracepoint/android/vh/freq/qos/update/request.h) \
    $(wildcard include/ksym/tracepoint/android/vh/freq/table/limits.h) \
    $(wildcard include/ksym/tracepoint/android/vh/ftrace/dump/buffer.h) \
    $(wildcard include/ksym/tracepoint/android/vh/ftrace/format/check.h) \
    $(wildcard include/ksym/tracepoint/android/vh/ftrace/oops/enter.h) \
    $(wildcard include/ksym/tracepoint/android/vh/ftrace/oops/exit.h) \
    $(wildcard include/ksym/tracepoint/android/vh/ftrace/size/check.h) \
    $(wildcard include/ksym/tracepoint/android/vh/futex/sleep/start.h) \
    $(wildcard include/ksym/tracepoint/android/vh/futex/wait/end.h) \
    $(wildcard include/ksym/tracepoint/android/vh/futex/wait/start.h) \
    $(wildcard include/ksym/tracepoint/android/vh/futex/wake/this.h) \
    $(wildcard include/ksym/tracepoint/android/vh/futex/wake/traverse/plist.h) \
    $(wildcard include/ksym/tracepoint/android/vh/futex/wake/up/q/finish.h) \
    $(wildcard include/ksym/tracepoint/android/vh/get/from/fragment/pool.h) \
    $(wildcard include/ksym/tracepoint/android/vh/get/swap/page.h) \
    $(wildcard include/ksym/tracepoint/android/vh/gic/resume.h) \
    $(wildcard include/ksym/tracepoint/android/vh/gpio/block/read.h) \
    $(wildcard include/ksym/tracepoint/android/vh/handle/failed/page/trylock.h) \
    $(wildcard include/ksym/tracepoint/android/vh/handle/pte/fault/end.h) \
    $(wildcard include/ksym/tracepoint/android/vh/handle/tlb/conf.h) \
    $(wildcard include/ksym/tracepoint/android/vh/inactive/is/low.h) \
    $(wildcard include/ksym/tracepoint/android/vh/include/reserved/zone.h) \
    $(wildcard include/ksym/tracepoint/android/vh/init/swap/info/struct.h) \
    $(wildcard include/ksym/tracepoint/android/vh/iommu/alloc/iova.h) \
    $(wildcard include/ksym/tracepoint/android/vh/iommu/free/iova.h) \
    $(wildcard include/ksym/tracepoint/android/vh/iommu/iovad/alloc/iova.h) \
    $(wildcard include/ksym/tracepoint/android/vh/iommu/iovad/free/iova.h) \
    $(wildcard include/ksym/tracepoint/android/vh/iommu/setup/dma/ops.h) \
    $(wildcard include/ksym/tracepoint/android/vh/ipi/stop.h) \
    $(wildcard include/ksym/tracepoint/android/vh/ipv6/gen/linklocal/addr.h) \
    $(wildcard include/ksym/tracepoint/android/vh/irqtime/account/process/tick.h) \
    $(wildcard include/ksym/tracepoint/android/vh/is/fpsimd/save.h) \
    $(wildcard include/ksym/tracepoint/android/vh/jiffies/update.h) \
    $(wildcard include/ksym/tracepoint/android/vh/kfree/skb.h) \
    $(wildcard include/ksym/tracepoint/android/vh/killed/process.h) \
    $(wildcard include/ksym/tracepoint/android/vh/kmalloc/slab.h) \
    $(wildcard include/ksym/tracepoint/android/vh/kvmalloc/node/use/vmalloc.h) \
    $(wildcard include/ksym/tracepoint/android/vh/logbuf.h) \
    $(wildcard include/ksym/tracepoint/android/vh/logbuf/pr/cont.h) \
    $(wildcard include/ksym/tracepoint/android/vh/look/around.h) \
    $(wildcard include/ksym/tracepoint/android/vh/look/around/migrate/page.h) \
    $(wildcard include/ksym/tracepoint/android/vh/madvise/cold/or/pageout.h) \
    $(wildcard include/ksym/tracepoint/android/vh/madvise/cold/or/pageout/abort.h) \
    $(wildcard include/ksym/tracepoint/android/vh/map/util/freq.h) \
    $(wildcard include/ksym/tracepoint/android/vh/mark/page/accessed.h) \
    $(wildcard include/ksym/tracepoint/android/vh/media/device/setup/link.h) \
    $(wildcard include/ksym/tracepoint/android/vh/mem/cgroup/alloc.h) \
    $(wildcard include/ksym/tracepoint/android/vh/mem/cgroup/css/offline.h) \
    $(wildcard include/ksym/tracepoint/android/vh/mem/cgroup/css/online.h) \
    $(wildcard include/ksym/tracepoint/android/vh/mem/cgroup/free.h) \
    $(wildcard include/ksym/tracepoint/android/vh/mem/cgroup/id/remove.h) \
    $(wildcard include/ksym/tracepoint/android/vh/meminfo/proc/show.h) \
    $(wildcard include/ksym/tracepoint/android/vh/migrate/page/states.h) \
    $(wildcard include/ksym/tracepoint/android/vh/mm/dirty/limits.h) \
    $(wildcard include/ksym/tracepoint/android/vh/mmap/region.h) \
    $(wildcard include/ksym/tracepoint/android/vh/mmc/attach/sd.h) \
    $(wildcard include/ksym/tracepoint/android/vh/mmc/blk/mq/rw/recovery.h) \
    $(wildcard include/ksym/tracepoint/android/vh/mmc/blk/reset.h) \
    $(wildcard include/ksym/tracepoint/android/vh/mmc/gpio/cd/irqt.h) \
    $(wildcard include/ksym/tracepoint/android/vh/mmput.h) \
    $(wildcard include/ksym/tracepoint/android/vh/mutex/can/spin/on/owner.h) \
    $(wildcard include/ksym/tracepoint/android/vh/mutex/opt/spin/finish.h) \
    $(wildcard include/ksym/tracepoint/android/vh/mutex/opt/spin/start.h) \
    $(wildcard include/ksym/tracepoint/android/vh/mutex/unlock/slowpath.h) \
    $(wildcard include/ksym/tracepoint/android/vh/mutex/unlock/slowpath/end.h) \
    $(wildcard include/ksym/tracepoint/android/vh/mutex/wait/finish.h) \
    $(wildcard include/ksym/tracepoint/android/vh/mutex/wait/start.h) \
    $(wildcard include/ksym/tracepoint/android/vh/mz/exit.h) \
    $(wildcard include/ksym/tracepoint/android/vh/of/i2c/get/board/info.h) \
    $(wildcard include/ksym/tracepoint/android/vh/oom/check/panic.h) \
    $(wildcard include/ksym/tracepoint/android/vh/override/creds.h) \
    $(wildcard include/ksym/tracepoint/android/vh/page/isolated/for/reclaim.h) \
    $(wildcard include/ksym/tracepoint/android/vh/page/referenced/check/bypass.h) \
    $(wildcard include/ksym/tracepoint/android/vh/page/referenced/one/end.h) \
    $(wildcard include/ksym/tracepoint/android/vh/page/should/be/protected.h) \
    $(wildcard include/ksym/tracepoint/android/vh/page/trylock/clear.h) \
    $(wildcard include/ksym/tracepoint/android/vh/page/trylock/get/result.h) \
    $(wildcard include/ksym/tracepoint/android/vh/page/trylock/set.h) \
    $(wildcard include/ksym/tracepoint/android/vh/pagecache/get/page.h) \
    $(wildcard include/ksym/tracepoint/android/vh/pageset/update.h) \
    $(wildcard include/ksym/tracepoint/android/vh/pcplist/add/cma/pages/bypass.h) \
    $(wildcard include/ksym/tracepoint/android/vh/percpu/rwsem/wq/add.h) \
    $(wildcard include/ksym/tracepoint/android/vh/prepare/update/load/avg/se.h) \
    $(wildcard include/ksym/tracepoint/android/vh/printk/hotplug.h) \
    $(wildcard include/ksym/tracepoint/android/vh/process/killed.h) \
    $(wildcard include/ksym/tracepoint/android/vh/psi/event.h) \
    $(wildcard include/ksym/tracepoint/android/vh/psi/group.h) \
    $(wildcard include/ksym/tracepoint/android/vh/ptype/head.h) \
    $(wildcard include/ksym/tracepoint/android/vh/ra/tuning/max/page.h) \
    $(wildcard include/ksym/tracepoint/android/vh/record/mutex/lock/starttime.h) \
    $(wildcard include/ksym/tracepoint/android/vh/record/pcpu/rwsem/starttime.h) \
    $(wildcard include/ksym/tracepoint/android/vh/record/rtmutex/lock/starttime.h) \
    $(wildcard include/ksym/tracepoint/android/vh/record/rwsem/lock/starttime.h) \
    $(wildcard include/ksym/tracepoint/android/vh/remove/vmalloc/stack.h) \
    $(wildcard include/ksym/tracepoint/android/vh/revert/creds.h) \
    $(wildcard include/ksym/tracepoint/android/vh/rmqueue.h) \
    $(wildcard include/ksym/tracepoint/android/vh/rmqueue/bulk/bypass.h) \
    $(wildcard include/ksym/tracepoint/android/vh/rproc/recovery.h) \
    $(wildcard include/ksym/tracepoint/android/vh/rtmutex/wait/finish.h) \
    $(wildcard include/ksym/tracepoint/android/vh/rtmutex/wait/start.h) \
    $(wildcard include/ksym/tracepoint/android/vh/rwsem/can/spin/on/owner.h) \
    $(wildcard include/ksym/tracepoint/android/vh/rwsem/init.h) \
    $(wildcard include/ksym/tracepoint/android/vh/rwsem/mark/wake/readers.h) \
    $(wildcard include/ksym/tracepoint/android/vh/rwsem/opt/spin/finish.h) \
    $(wildcard include/ksym/tracepoint/android/vh/rwsem/opt/spin/start.h) \
    $(wildcard include/ksym/tracepoint/android/vh/rwsem/read/wait/finish.h) \
    $(wildcard include/ksym/tracepoint/android/vh/rwsem/read/wait/start.h) \
    $(wildcard include/ksym/tracepoint/android/vh/rwsem/set/owner.h) \
    $(wildcard include/ksym/tracepoint/android/vh/rwsem/set/reader/owned.h) \
    $(wildcard include/ksym/tracepoint/android/vh/rwsem/up/read/end.h) \
    $(wildcard include/ksym/tracepoint/android/vh/rwsem/up/write/end.h) \
    $(wildcard include/ksym/tracepoint/android/vh/rwsem/wake.h) \
    $(wildcard include/ksym/tracepoint/android/vh/rwsem/wake/finish.h) \
    $(wildcard include/ksym/tracepoint/android/vh/rwsem/write/finished.h) \
    $(wildcard include/ksym/tracepoint/android/vh/rwsem/write/wait/finish.h) \
    $(wildcard include/ksym/tracepoint/android/vh/rwsem/write/wait/start.h) \
    $(wildcard include/ksym/tracepoint/android/vh/save/track/hash.h) \
    $(wildcard include/ksym/tracepoint/android/vh/save/vmalloc/stack.h) \
    $(wildcard include/ksym/tracepoint/android/vh/sched/pelt/multiplier.h) \
    $(wildcard include/ksym/tracepoint/android/vh/sched/setaffinity/early.h) \
    $(wildcard include/ksym/tracepoint/android/vh/sched/show/task.h) \
    $(wildcard include/ksym/tracepoint/android/vh/sched/stat/runtime/rt.h) \
    $(wildcard include/ksym/tracepoint/android/vh/scheduler/tick.h) \
    $(wildcard include/ksym/tracepoint/android/vh/scmi/timeout/sync.h) \
    $(wildcard include/ksym/tracepoint/android/vh/sd/update/bus/speed/mode.h) \
    $(wildcard include/ksym/tracepoint/android/vh/sdhci/get/cd.h) \
    $(wildcard include/ksym/tracepoint/android/vh/selinux/avc/insert.h) \
    $(wildcard include/ksym/tracepoint/android/vh/selinux/avc/lookup.h) \
    $(wildcard include/ksym/tracepoint/android/vh/selinux/avc/node/delete.h) \
    $(wildcard include/ksym/tracepoint/android/vh/selinux/avc/node/replace.h) \
    $(wildcard include/ksym/tracepoint/android/vh/set/memory/nx.h) \
    $(wildcard include/ksym/tracepoint/android/vh/set/memory/ro.h) \
    $(wildcard include/ksym/tracepoint/android/vh/set/memory/rw.h) \
    $(wildcard include/ksym/tracepoint/android/vh/set/memory/x.h) \
    $(wildcard include/ksym/tracepoint/android/vh/set/module/permit/after/init.h) \
    $(wildcard include/ksym/tracepoint/android/vh/set/module/permit/before/init.h) \
    $(wildcard include/ksym/tracepoint/android/vh/set/shmem/page/flag.h) \
    $(wildcard include/ksym/tracepoint/android/vh/set/wake/flags.h) \
    $(wildcard include/ksym/tracepoint/android/vh/setscheduler/uclamp.h) \
    $(wildcard include/ksym/tracepoint/android/vh/sha256.h) \
    $(wildcard include/ksym/tracepoint/android/vh/shmem/alloc/page.h) \
    $(wildcard include/ksym/tracepoint/android/vh/should/alloc/pages/retry.h) \
    $(wildcard include/ksym/tracepoint/android/vh/should/end/madvise.h) \
    $(wildcard include/ksym/tracepoint/android/vh/show/mapcount/pages.h) \
    $(wildcard include/ksym/tracepoint/android/vh/show/max/freq.h) \
    $(wildcard include/ksym/tracepoint/android/vh/show/mem.h) \
    $(wildcard include/ksym/tracepoint/android/vh/show/resume/epoch/val.h) \
    $(wildcard include/ksym/tracepoint/android/vh/show/stack/hash.h) \
    $(wildcard include/ksym/tracepoint/android/vh/show/suspend/epoch/val.h) \
    $(wildcard include/ksym/tracepoint/android/vh/shrink/node/memcgs.h) \
    $(wildcard include/ksym/tracepoint/android/vh/shrink/slab/bypass.h) \
    $(wildcard include/ksym/tracepoint/android/vh/si/swapinfo.h) \
    $(wildcard include/ksym/tracepoint/android/vh/skip/swapcache.h) \
    $(wildcard include/ksym/tracepoint/android/vh/snapshot/refaults.h) \
    $(wildcard include/ksym/tracepoint/android/vh/snd/compr/use/pause/in/drain.h) \
    $(wildcard include/ksym/tracepoint/android/vh/snd/soc/card/get/comp/chain.h) \
    $(wildcard include/ksym/tracepoint/android/vh/sound/usb/support/cpu/suspend.h) \
    $(wildcard include/ksym/tracepoint/android/vh/subpage/dma/contig/alloc.h) \
    $(wildcard include/ksym/tracepoint/android/vh/swap/avail/heads/init.h) \
    $(wildcard include/ksym/tracepoint/android/vh/swap/slot/cache/active.h) \
    $(wildcard include/ksym/tracepoint/android/vh/swapin/add/anon/rmap.h) \
    $(wildcard include/ksym/tracepoint/android/vh/sync/txn/recvd.h) \
    $(wildcard include/ksym/tracepoint/android/vh/syscall/prctl/finished.h) \
    $(wildcard include/ksym/tracepoint/android/vh/test/clear/look/around/ref.h) \
    $(wildcard include/ksym/tracepoint/android/vh/thermal/pm/notify/suspend.h) \
    $(wildcard include/ksym/tracepoint/android/vh/timer/calc/index.h) \
    $(wildcard include/ksym/tracepoint/android/vh/timerfd/create.h) \
    $(wildcard include/ksym/tracepoint/android/vh/try/to/freeze/todo.h) \
    $(wildcard include/ksym/tracepoint/android/vh/try/to/freeze/todo/unfrozen.h) \
    $(wildcard include/ksym/tracepoint/android/vh/try/to/unmap/one.h) \
    $(wildcard include/ksym/tracepoint/android/vh/tune/inactive/ratio.h) \
    $(wildcard include/ksym/tracepoint/android/vh/tune/mmap/readaround.h) \
    $(wildcard include/ksym/tracepoint/android/vh/tune/scan/type.h) \
    $(wildcard include/ksym/tracepoint/android/vh/tune/swappiness.h) \
    $(wildcard include/ksym/tracepoint/android/vh/typec/store/partner/src/caps.h) \
    $(wildcard include/ksym/tracepoint/android/vh/typec/tcpci/override/toggling.h) \
    $(wildcard include/ksym/tracepoint/android/vh/typec/tcpm/adj/current/limit.h) \
    $(wildcard include/ksym/tracepoint/android/vh/typec/tcpm/get/timer.h) \
    $(wildcard include/ksym/tracepoint/android/vh/typec/tcpm/log.h) \
    $(wildcard include/ksym/tracepoint/android/vh/ufs/check/int/errors.h) \
    $(wildcard include/ksym/tracepoint/android/vh/ufs/clock/scaling.h) \
    $(wildcard include/ksym/tracepoint/android/vh/ufs/compl/command.h) \
    $(wildcard include/ksym/tracepoint/android/vh/ufs/fill/prdt.h) \
    $(wildcard include/ksym/tracepoint/android/vh/ufs/prepare/command.h) \
    $(wildcard include/ksym/tracepoint/android/vh/ufs/send/command.h) \
    $(wildcard include/ksym/tracepoint/android/vh/ufs/send/tm/command.h) \
    $(wildcard include/ksym/tracepoint/android/vh/ufs/send/uic/command.h) \
    $(wildcard include/ksym/tracepoint/android/vh/ufs/update/sdev.h) \
    $(wildcard include/ksym/tracepoint/android/vh/ufs/update/sysfs.h) \
    $(wildcard include/ksym/tracepoint/android/vh/unreserve/highatomic/bypass.h) \
    $(wildcard include/ksym/tracepoint/android/vh/unuse/swap/page.h) \
    $(wildcard include/ksym/tracepoint/android/vh/update/page/mapcount.h) \
    $(wildcard include/ksym/tracepoint/android/vh/update/topology/flags/workfn.h) \
    $(wildcard include/ksym/tracepoint/android/vh/usb/dev/resume.h) \
    $(wildcard include/ksym/tracepoint/android/vh/usb/dev/suspend.h) \
    $(wildcard include/ksym/tracepoint/android/vh/v4l2subdev/set/fmt.h) \
    $(wildcard include/ksym/tracepoint/android/vh/v4l2subdev/set/frame/interval.h) \
    $(wildcard include/ksym/tracepoint/android/vh/v4l2subdev/set/selection.h) \
    $(wildcard include/ksym/tracepoint/android/vh/vmpressure.h) \
    $(wildcard include/ksym/tracepoint/android/vh/waiting/for/page/migration.h) \
    $(wildcard include/ksym/tracepoint/android/vh/wakeup/bypass.h) \
    $(wildcard include/ksym/tracepoint/android/vh/watchdog/timer/softlockup.h) \
    $(wildcard include/ksym/tracepoint/android/vh/wq/lockup/pool.h) \

drivers/android/vendor_hooks.o: $(ksymdeps_drivers/android/vendor_hooks.o)

$(ksymdeps_drivers/android/vendor_hooks.o):
