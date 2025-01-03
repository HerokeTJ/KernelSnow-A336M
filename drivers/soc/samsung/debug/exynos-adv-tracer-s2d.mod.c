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
	{ 0xde7ece30, "__cpu_possible_mask" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0x24c78344, "adv_tracer_ipc_release_channel" },
	{ 0x28356034, "exynos_cpupm_notifier_register" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x96848186, "scnprintf" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0xd604c3f, "devm_kfree" },
	{ 0xd38c4eeb, "dbg_snapshot_register_debug_ops" },
	{ 0xd026d214, "sysfs_create_groups" },
	{ 0xf04e9638, "adv_tracer_ipc_request_channel" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0xd8a758bf, "adv_tracer_ipc_send_data_polling" },
	{ 0x448e71de, "adv_tracer_ipc_send_data_polling_timeout" },
	{ 0x8f36c66b, "dbg_snapshot_get_item_paddr" },
	{ 0x4ec54e78, "bitmap_to_arr32" },
	{ 0x8eff6041, "_dev_info" },
	{ 0xcac72c38, "exynos_pmu_update" },
	{ 0x5ed4c6ae, "_dev_err" },
};

MODULE_INFO(depends, "exynos-adv-tracer,exynos-cpupm,dss,exynos-pmu-if");

MODULE_ALIAS("of:N*T*Csamsung,exynos-adv-tracer-s2d");
MODULE_ALIAS("of:N*T*Csamsung,exynos-adv-tracer-s2dC*");
