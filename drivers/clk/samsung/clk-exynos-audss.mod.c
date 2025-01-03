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
	{ 0x95575c33, "__tracepoint_rwmmio_write" },
	{ 0x19ebf04e, "__tracepoint_rwmmio_post_read" },
	{ 0xa035d76e, "__tracepoint_rwmmio_read" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0x31dfd5cd, "__log_write_mmio" },
	{ 0x6980ea4b, "__log_post_read_mmio" },
	{ 0xcf1211a8, "__log_read_mmio" },
	{ 0xed52c306, "pm_runtime_force_resume" },
	{ 0xd69360d3, "pm_runtime_force_suspend" },
	{ 0x879a6f7, "of_clk_del_provider" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xa7c8e259, "__pm_runtime_disable" },
	{ 0x4249611d, "clk_hw_unregister_gate" },
	{ 0x68d1ab7b, "clk_hw_unregister_divider" },
	{ 0x738a2e22, "clk_hw_unregister_mux" },
	{ 0x871df5fa, "__pm_runtime_idle" },
	{ 0x5ec1d781, "__pm_runtime_set_status" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0x70951935, "of_clk_hw_onecell_get" },
	{ 0xaee90bd, "of_clk_add_hw_provider" },
	{ 0x45a642a4, "__clk_hw_register_gate" },
	{ 0x4100ef44, "__clk_hw_register_divider" },
	{ 0xa9c619f6, "__clk_hw_register_mux" },
	{ 0x8081ce78, "pm_runtime_enable" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0xc569d8ce, "__clk_get_name" },
	{ 0x36d574de, "devm_clk_get" },
	{ 0x33d29b07, "devm_ioremap_resource" },
	{ 0x2e29445c, "platform_get_resource" },
	{ 0x882c7dd6, "of_device_get_match_data" },
	{ 0x503a285e, "__platform_driver_register" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Csamsung,exynos4210-audss-clock");
MODULE_ALIAS("of:N*T*Csamsung,exynos4210-audss-clockC*");
MODULE_ALIAS("of:N*T*Csamsung,exynos5250-audss-clock");
MODULE_ALIAS("of:N*T*Csamsung,exynos5250-audss-clockC*");
MODULE_ALIAS("of:N*T*Csamsung,exynos5410-audss-clock");
MODULE_ALIAS("of:N*T*Csamsung,exynos5410-audss-clockC*");
MODULE_ALIAS("of:N*T*Csamsung,exynos5420-audss-clock");
MODULE_ALIAS("of:N*T*Csamsung,exynos5420-audss-clockC*");
