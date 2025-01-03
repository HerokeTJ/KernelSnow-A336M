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
	{ 0xdcb764ad, "memset" },
	{ 0x4829a47e, "memcpy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0x297b4b, "cal_asv_get_grp" },
	{ 0xcb2e282a, "cal_asv_get_ids_info" },
	{ 0xae188232, "exynos_build_static_power_table" },
	{ 0x7d5c137f, "thermal_zone_get_zone_by_name" },
	{ 0xf0724460, "cal_dfs_get_asv_table" },
	{ 0x6958fdb, "cal_dfs_get_rate_table" },
	{ 0x93f86b78, "cal_dfs_get_lv_num" },
	{ 0x99c6841f, "exynos_devfreq_get_freq_infos" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0x26228998, "exynos_migov_register_domain" },
	{ 0xc5850110, "printk" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0xbb2aa579, "thermal_zone_get_temp" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0xa943917f, "exynos_bcm_get_ccnt" },
	{ 0xb53f5104, "exynos_devfreq_get_profile" },
	{ 0x1bf998e5, "exynos_devfreq_set_profile" },
	{ 0x9cb7a9f2, "exynos_bcm_calc_enable" },
	{ 0xfe88376a, "exynos_pm_qos_request" },
};

MODULE_INFO(depends, "cmupmucal,exynos_thermal,exynos_devfreq,exynos-migov,exynos-bcm,exynos_pm_qos");

MODULE_ALIAS("of:N*T*Csamsung,exynos-mif-profiler");
MODULE_ALIAS("of:N*T*Csamsung,exynos-mif-profilerC*");
