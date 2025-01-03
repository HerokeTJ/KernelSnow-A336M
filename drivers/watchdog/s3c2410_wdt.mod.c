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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x7c24b32d, "module_layout" },
	{ 0x4829a47e, "memcpy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x7ceeac9, "panic_notifier_list" },
	{ 0x95575c33, "__tracepoint_rwmmio_write" },
	{ 0x19ebf04e, "__tracepoint_rwmmio_post_read" },
	{ 0xa035d76e, "__tracepoint_rwmmio_read" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x15af7f4, "system_state" },
	{ 0x65671f08, "param_ops_bool" },
	{ 0xd8339549, "param_ops_int" },
	{ 0x7681946c, "unregister_pm_notifier" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xbc7a4422, "_dev_warn" },
	{ 0xfa8a5bb0, "devm_request_threaded_irq" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x882c7dd6, "of_device_get_match_data" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0x3fd1e596, "watchdog_unregister_device" },
	{ 0xc5850110, "printk" },
	{ 0x9cc4f70a, "register_pm_notifier" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0xd725ad28, "dbg_snapshot_register_wdt_ops" },
	{ 0xb9c425de, "register_syscore_ops" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0xae0d6e28, "watchdog_register_device" },
	{ 0xf9962c66, "watchdog_set_restart_priority" },
	{ 0xf7235039, "watchdog_init_timeout" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x36d574de, "devm_clk_get" },
	{ 0xbbd62b47, "devm_platform_ioremap_resource" },
	{ 0x2e29445c, "platform_get_resource" },
	{ 0x482954a5, "syscon_regmap_lookup_by_phandle" },
	{ 0x6ca7c29e, "of_find_property" },
	{ 0x31dfd5cd, "__log_write_mmio" },
	{ 0x6980ea4b, "__log_post_read_mmio" },
	{ 0xcf1211a8, "__log_read_mmio" },
	{ 0xf33974ce, "rtc_class_close" },
	{ 0x174b1e4f, "rtc_read_time" },
	{ 0xb620c4e8, "rtc_class_open" },
	{ 0xd3752c27, "atomic_notifier_call_chain" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x9218f181, "exynos_pmu_read" },
	{ 0xcac72c38, "exynos_pmu_update" },
	{ 0x3dfeaa4, "regmap_update_bits_base" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0x3d2aa62, "regmap_read" },
	{ 0x8eff6041, "_dev_info" },
	{ 0x3199a1ef, "_dev_emerg" },
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
};

MODULE_INFO(depends, "dss,exynos-pmu-if");

MODULE_ALIAS("of:N*T*Csamsung,s3c2410-wdt");
MODULE_ALIAS("of:N*T*Csamsung,s3c2410-wdtC*");
MODULE_ALIAS("of:N*T*Csamsung,s3c6410-wdt");
MODULE_ALIAS("of:N*T*Csamsung,s3c6410-wdtC*");
MODULE_ALIAS("of:N*T*Csamsung,exynos5250-wdt");
MODULE_ALIAS("of:N*T*Csamsung,exynos5250-wdtC*");
MODULE_ALIAS("of:N*T*Csamsung,exynos5420-wdt");
MODULE_ALIAS("of:N*T*Csamsung,exynos5420-wdtC*");
MODULE_ALIAS("of:N*T*Csamsung,exynos7-wdt");
MODULE_ALIAS("of:N*T*Csamsung,exynos7-wdtC*");
MODULE_ALIAS("of:N*T*Csamsung,exynos8-wdt");
MODULE_ALIAS("of:N*T*Csamsung,exynos8-wdtC*");
MODULE_ALIAS("of:N*T*Csamsung,exynos9-v1-wdt");
MODULE_ALIAS("of:N*T*Csamsung,exynos9-v1-wdtC*");
MODULE_ALIAS("of:N*T*Csamsung,exynos9-v2-wdt");
MODULE_ALIAS("of:N*T*Csamsung,exynos9-v2-wdtC*");
MODULE_ALIAS("of:N*T*Csamsung,exynos9-v3-wdt");
MODULE_ALIAS("of:N*T*Csamsung,exynos9-v3-wdtC*");
MODULE_ALIAS("of:N*T*Csamsung,exynos9-v4-wdt");
MODULE_ALIAS("of:N*T*Csamsung,exynos9-v4-wdtC*");
MODULE_ALIAS("of:N*T*Csamsung,exynos9630-v1-wdt");
MODULE_ALIAS("of:N*T*Csamsung,exynos9630-v1-wdtC*");
MODULE_ALIAS("of:N*T*Csamsung,exynos9630-v2-wdt");
MODULE_ALIAS("of:N*T*Csamsung,exynos9630-v2-wdtC*");
MODULE_ALIAS("of:N*T*Csamsung,exynos2100-v1-wdt");
MODULE_ALIAS("of:N*T*Csamsung,exynos2100-v1-wdtC*");
MODULE_ALIAS("of:N*T*Csamsung,exynos2100-v2-wdt");
MODULE_ALIAS("of:N*T*Csamsung,exynos2100-v2-wdtC*");
MODULE_ALIAS("of:N*T*Csamsung,s5e9925-v1-wdt");
MODULE_ALIAS("of:N*T*Csamsung,s5e9925-v1-wdtC*");
MODULE_ALIAS("of:N*T*Csamsung,s5e9925-v2-wdt");
MODULE_ALIAS("of:N*T*Csamsung,s5e9925-v2-wdtC*");
MODULE_ALIAS("of:N*T*Csamsung,s5e8825-v1-wdt");
MODULE_ALIAS("of:N*T*Csamsung,s5e8825-v1-wdtC*");
MODULE_ALIAS("of:N*T*Csamsung,s5e8825-v2-wdt");
MODULE_ALIAS("of:N*T*Csamsung,s5e8825-v2-wdtC*");
MODULE_ALIAS("platform:s3c2410-wdt");
