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
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0x8900b200, "kmalloc_caches" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0x8b9f70c7, "cpu_hwcaps" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xbc05ab42, "gpu_dvfs_get_cur_clock" },
	{ 0x1b06b97e, "bts_change_mo" },
	{ 0x556da5e2, "exynos_gpu_stc_config_store" },
	{ 0x16e66cf4, "exynos_gpu_stc_config_show" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x5f9e9913, "of_property_count_elems_of_size" },
	{ 0x92843c99, "bts_get_scenindex" },
	{ 0xb5f2516e, "emstune_register_notifier" },
	{ 0x574add77, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x7f2e9151, "gpu_dvfs_register_utilization_notifier" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0xaa3caa56, "sysfs_create_group" },
	{ 0x74ebf29f, "exynos_pm_qos_add_request_trace" },
	{ 0x117959e2, "__freq_qos_tracer_add_request" },
	{ 0x37a0cba, "kfree" },
	{ 0xefeb0f57, "cpufreq_cpu_get" },
	{ 0xb0ee738d, "of_get_child_by_name" },
	{ 0xfe88376a, "exynos_pm_qos_request" },
	{ 0x732ac580, "queue_work_on" },
	{ 0xaf507de1, "__arch_copy_from_user" },
	{ 0x6b2941b2, "__arch_copy_to_user" },
	{ 0x6331d19e, "misc_register" },
	{ 0xb8888b15, "no_llseek" },
	{ 0x52fce30e, "bts_del_scenario" },
	{ 0xa7a00749, "exynos_pm_qos_update_request" },
	{ 0x1413a585, "exynos_pm_qos_request_active" },
	{ 0x2eec24ef, "freq_qos_update_request" },
	{ 0xf1b7bdea, "bts_add_scenario" },
	{ 0x3228a559, "gpu_dvfs_set_amigo_governor" },
	{ 0xddaa5841, "exynos_dm_dynamic_disable" },
	{ 0xac4983a0, "exynos_stats_get_frame_info" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0xc5850110, "printk" },
};

MODULE_INFO(depends, "mali_kbase,exynos-bts,ems,exynos_pm_qos,freq-qos-tracer,exynos-dm");

MODULE_ALIAS("of:N*T*Csamsung,exynos-migov");
MODULE_ALIAS("of:N*T*Csamsung,exynos-migovC*");
