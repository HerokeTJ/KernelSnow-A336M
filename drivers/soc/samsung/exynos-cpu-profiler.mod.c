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
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xd391e1ed, "__tracepoint_android_vh_cpu_idle_exit" },
	{ 0xefbedb90, "__tracepoint_android_vh_cpu_idle_enter" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x8900b200, "kmalloc_caches" },
	{ 0x280f9f14, "__per_cpu_offset" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x96848186, "scnprintf" },
	{ 0x57ad17e9, "__cpuhp_setup_state" },
	{ 0x95e102ab, "tracepoint_probe_register" },
	{ 0x40211516, "exynos_sdp_set_cur_freqlv" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x297b4b, "cal_asv_get_grp" },
	{ 0xae188232, "exynos_build_static_power_table" },
	{ 0x4d9ba879, "dev_pm_opp_get_voltage" },
	{ 0x59b90419, "dev_pm_opp_find_freq_ceil" },
	{ 0xc9e0f27d, "get_cpu_device" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0x1b015d25, "bitmap_parselist" },
	{ 0x9cf0dacc, "of_property_read_string" },
	{ 0x7d5c137f, "thermal_zone_get_zone_by_name" },
	{ 0x64e376a7, "exynos_sdp_set_powertable" },
	{ 0x2ddc06f4, "exynos_cpufreq_register_notifier" },
	{ 0x574add77, "__mutex_init" },
	{ 0x26228998, "exynos_migov_register_domain" },
	{ 0x69601c70, "of_get_next_child" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0xc5850110, "printk" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xbb2aa579, "thermal_zone_get_temp" },
	{ 0x732ac580, "queue_work_on" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0x4735ac17, "flush_work" },
	{ 0x7557e528, "cpufreq_cpu_put" },
	{ 0xefeb0f57, "cpufreq_cpu_get" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0xcb2e282a, "cal_asv_get_ids_info" },
	{ 0x92ad1db9, "cpumask_next" },
	{ 0x66d2b60a, "exynos_sdp_set_busy_domain" },
};

MODULE_INFO(depends, "mali_kbase,cmupmucal,exynos_thermal,exynos-acme,exynos-migov");

MODULE_ALIAS("of:N*T*Csamsung,exynos-cpu-profiler");
MODULE_ALIAS("of:N*T*Csamsung,exynos-cpu-profilerC*");
