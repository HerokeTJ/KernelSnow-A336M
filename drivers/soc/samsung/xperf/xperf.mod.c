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
	{ 0x4829a47e, "memcpy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x4408b30, "kthread_bind_mask" },
	{ 0xba16fbfa, "sysbusy_register_notifier" },
	{ 0x34db36f1, "exynos_tmu_set_boost_mode" },
	{ 0xc0f2ab2e, "exynos_tmu_get_data_from_tz" },
	{ 0x2eec24ef, "freq_qos_update_request" },
	{ 0xa7a00749, "exynos_pm_qos_update_request" },
	{ 0xbc05ab42, "gpu_dvfs_get_cur_clock" },
	{ 0x7557e528, "cpufreq_cpu_put" },
	{ 0x117959e2, "__freq_qos_tracer_add_request" },
	{ 0x74ebf29f, "exynos_pm_qos_add_request_trace" },
	{ 0x3dbc3f37, "freq_qos_tracer_remove_request" },
	{ 0x8fe79d0e, "exynos_pm_qos_remove_request" },
	{ 0x69ad2f20, "kstrtouint" },
	{ 0x7c02aadb, "of_property_read_string_helper" },
	{ 0x69601c70, "of_get_next_child" },
	{ 0x9cf0dacc, "of_property_read_string" },
	{ 0xb0ee738d, "of_get_child_by_name" },
	{ 0xac8a155e, "of_property_read_u64" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0x8b9f70c7, "cpu_hwcaps" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x2b7ddd11, "kthread_stop" },
	{ 0x9cb025a4, "dma_free_attrs" },
	{ 0xff8e54c1, "dma_alloc_attrs" },
	{ 0x37a0cba, "kfree" },
	{ 0x77561cbf, "dma_set_mask" },
	{ 0xaf507de1, "__arch_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x6b2941b2, "__arch_copy_to_user" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xde7ece30, "__cpu_possible_mask" },
	{ 0x64f74abf, "__tracepoint_pelt_cfs_tp" },
	{ 0xd740362b, "seq_printf" },
	{ 0x4f731e2b, "single_open" },
	{ 0xef42eddb, "single_release" },
	{ 0xb9997d36, "seq_read" },
	{ 0xad9f2705, "seq_lseek" },
	{ 0x9166fada, "strncpy" },
	{ 0x85df9b6c, "strsep" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe3823bc5, "emstune_get_cur_level" },
	{ 0x83e9896c, "emstune_get_cur_mode" },
	{ 0x5a921311, "strncmp" },
	{ 0x98cf60b3, "strlen" },
	{ 0x12aec6f2, "find_vpid" },
	{ 0xc0237de8, "cal_dfs_cached_get_rate" },
	{ 0xbdf3573b, "gpu_dvfs_get_utilization" },
	{ 0x98b5ae62, "exynos_devfreq_get_domain_freq" },
	{ 0x7c46233a, "cpufreq_quick_get" },
	{ 0x33f0768c, "cpufreq_quick_get_max" },
	{ 0xcc24dc28, "get_afm_clipped_freq" },
	{ 0xdad6284b, "get_cpufreq_max_limit" },
	{ 0xbb2aa579, "thermal_zone_get_temp" },
	{ 0x7d5c137f, "thermal_zone_get_zone_by_name" },
	{ 0x92ad1db9, "cpumask_next" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x999e8297, "vfree" },
	{ 0x55af96c1, "et_freq_to_spower" },
	{ 0x4d9ba879, "dev_pm_opp_get_voltage" },
	{ 0x59b90419, "dev_pm_opp_find_freq_ceil" },
	{ 0xc9e0f27d, "get_cpu_device" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb6a68816, "find_last_bit" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xefeb0f57, "cpufreq_cpu_get" },
	{ 0x95e102ab, "tracepoint_probe_register" },
	{ 0x63ef7ca7, "debugfs_create_file" },
	{ 0x82b308e8, "debugfs_create_dir" },
	{ 0xf4db35bc, "stpcpy" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa4304a36, "wake_up_process" },
	{ 0x18af30df, "kthread_bind" },
	{ 0xd9aa98a4, "kthread_create_on_node" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xaa3caa56, "sysfs_create_group" },
	{ 0x177f5d51, "kobject_create_and_add" },
	{ 0xbe169a2d, "kernel_kobj" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0xc5850110, "printk" },
	{ 0xc01c8b87, "sysfs_create_link" },
	{ 0x503a285e, "__platform_driver_register" },
};

MODULE_INFO(depends, "ems,exynos_thermal,exynos_pm_qos,mali_kbase,freq-qos-tracer,cmupmucal,exynos_devfreq,exynos-afm,exynos-ufcc");

MODULE_ALIAS("of:N*T*Csamsung,exynos-perf");
MODULE_ALIAS("of:N*T*Csamsung,exynos-perfC*");
