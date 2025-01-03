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
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0x19ebf04e, "__tracepoint_rwmmio_post_read" },
	{ 0xa035d76e, "__tracepoint_rwmmio_read" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0xeafce667, "exynos_cpu" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0x7ceeac9, "panic_notifier_list" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xde7ece30, "__cpu_possible_mask" },
	{ 0x95575c33, "__tracepoint_rwmmio_write" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0x6980ea4b, "__log_post_read_mmio" },
	{ 0xcf1211a8, "__log_read_mmio" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0x46f24c3c, "__cpuhp_setup_state_cpuslocked" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0x6b4b2933, "__ioremap" },
	{ 0x7043d2c8, "of_prop_next_u32" },
	{ 0x6ca7c29e, "of_find_property" },
	{ 0x65c7c43, "dbg_snapshot_get_sjtag_status" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0xd604c3f, "devm_kfree" },
	{ 0xd38c4eeb, "dbg_snapshot_register_debug_ops" },
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
	{ 0x444f1735, "cpu_pm_register_notifier" },
	{ 0x92ad1db9, "cpumask_next" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0x31dfd5cd, "__log_write_mmio" },
	{ 0x8eff6041, "_dev_info" },
	{ 0xc5850110, "printk" },
};

MODULE_INFO(depends, "exynos-pmu-if,dss");

MODULE_ALIAS("of:N*T*Csamsung,exynos-coresight");
MODULE_ALIAS("of:N*T*Csamsung,exynos-coresightC*");
