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
	{ 0x297b4b, "cal_asv_get_grp" },
	{ 0xcb2e282a, "cal_asv_get_ids_info" },
	{ 0xae188232, "exynos_build_static_power_table" },
	{ 0x7d5c137f, "thermal_zone_get_zone_by_name" },
	{ 0xf0724460, "cal_dfs_get_asv_table" },
	{ 0x6958fdb, "cal_dfs_get_rate_table" },
	{ 0x93f86b78, "cal_dfs_get_lv_num" },
	{ 0x970fd115, "gpu_dvfs_get_step" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0x9cf0dacc, "of_property_read_string" },
	{ 0x26228998, "exynos_migov_register_domain" },
	{ 0x64e376a7, "exynos_sdp_set_powertable" },
	{ 0xf04c5513, "gpu_dvfs_get_freq_table" },
	{ 0xc5850110, "printk" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0xbb2aa579, "thermal_zone_get_temp" },
	{ 0xcc55180, "exynos_stats_get_run_times" },
	{ 0xa8d0b680, "gpu_dvfs_get_min_freq" },
	{ 0xfb76ae64, "gpu_dvfs_get_max_freq" },
	{ 0xbc05ab42, "gpu_dvfs_get_cur_clock" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xdf45e893, "gpu_dvfs_get_job_queue_count" },
	{ 0x86bab0d8, "gpu_dvfs_get_job_queue_last_updated" },
	{ 0xedba64c0, "gpu_dvfs_get_tis_last_update" },
	{ 0x6536780c, "gpu_dvfs_get_time_in_state" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0xe57852d7, "exynos_migov_set_comb_ctrl" },
	{ 0xc584dfb2, "exynos_migov_set_decon_time" },
	{ 0x328fc050, "exynos_migov_set_util_margin" },
	{ 0x6f161d78, "exynos_migov_set_targettime_margin" },
	{ 0x4ec8bfc5, "exynos_migov_set_targetframetime" },
	{ 0xcc1c7be8, "gpu_dvfs_set_freq_margin" },
};

MODULE_INFO(depends, "cmupmucal,exynos_thermal,mali_kbase,exynos-migov");

MODULE_ALIAS("of:N*T*Csamsung,exynos-gpu-profiler");
MODULE_ALIAS("of:N*T*Csamsung,exynos-gpu-profilerC*");
