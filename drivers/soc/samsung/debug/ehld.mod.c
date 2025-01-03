#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x7c24b32d, "module_layout" },
	{ 0xdcb764ad, "memset" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0x8900b200, "kmalloc_caches" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xf04e9638, "adv_tracer_ipc_request_channel" },
	{ 0xa731cc66, "adv_tracer_ipc_send_data_async" },
	{ 0x448e71de, "adv_tracer_ipc_send_data_polling_timeout" },
	{ 0xf8d6e727, "adv_tracer_ipc_send_data" },
	{ 0xd8a758bf, "adv_tracer_ipc_send_data_polling" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x26888fb7, "hardlockup_handler_notifier_list" },
	{ 0x3c132ce6, "hardlockup_notifier_list" },
	{ 0x7ceeac9, "panic_notifier_list" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0xde7ece30, "__cpu_possible_mask" },
	{ 0x95575c33, "__tracepoint_rwmmio_write" },
	{ 0x19ebf04e, "__tracepoint_rwmmio_post_read" },
	{ 0xa035d76e, "__tracepoint_rwmmio_read" },
	{ 0xac594e02, "__cpu_online_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x280f9f14, "__per_cpu_offset" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0x65c7c43, "dbg_snapshot_get_sjtag_status" },
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
	{ 0x28356034, "exynos_cpupm_notifier_register" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0x6b4b2933, "__ioremap" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0xb0ee738d, "of_get_child_by_name" },
	{ 0xdc33c5a9, "of_iomap" },
	{ 0x3c80c06c, "kstrtoull" },
	{ 0x779a18af, "kstrtoll" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0xd026d214, "sysfs_create_groups" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0x661601de, "sprint_symbol" },
	{ 0xc5850110, "printk" },
	{ 0x31dfd5cd, "__log_write_mmio" },
	{ 0x6980ea4b, "__log_post_read_mmio" },
	{ 0xcf1211a8, "__log_read_mmio" },
	{ 0xd653b126, "sched_clock" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xf1e046cc, "panic" },
	{ 0x92ad1db9, "cpumask_next" },
};

MODULE_INFO(depends, "exynos-adv-tracer,hardlockup-watchdog,dss,exynos-cpupm");

MODULE_ALIAS("of:N*T*Csamsung,exynos-ehld");
MODULE_ALIAS("of:N*T*Csamsung,exynos-ehldC*");
