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
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0xc8328e16, "__tracepoint_ipi_exit" },
	{ 0x3f573f55, "__tracepoint_ipi_entry" },
	{ 0xe612228f, "__tracepoint_ipi_raise" },
	{ 0xd391e1ed, "__tracepoint_android_vh_cpu_idle_exit" },
	{ 0xe422656c, "exynos_eint_wake_mask_array" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xefbedb90, "__tracepoint_android_vh_cpu_idle_enter" },
	{ 0xde7ece30, "__cpu_possible_mask" },
	{ 0xbcb22632, "cpu_subsys" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x15db3b99, "__cpu_active_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xac594e02, "__cpu_online_mask" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x280f9f14, "__per_cpu_offset" },
	{ 0x8900b200, "kmalloc_caches" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0x7cbcf117, "muic_notifier_register" },
	{ 0xe2df8e9a, "smp_call_function_many" },
	{ 0xa781675f, "ecs_request_register" },
	{ 0x253af43d, "delayed_work_timer_fn" },
	{ 0x79cf5987, "init_timer_key" },
	{ 0x31dfd5cd, "__log_write_mmio" },
	{ 0xedc03953, "iounmap" },
	{ 0x6b4b2933, "__ioremap" },
	{ 0x91e25445, "cal_pm_exit" },
	{ 0xc477f0e6, "cal_pm_earlywakeup" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x71e68591, "exynos_pmu_write" },
	{ 0x56470118, "__warn_printk" },
	{ 0xaf006eca, "cal_pm_enter" },
	{ 0xf9abf173, "acpm_noti_dsu_cpd" },
	{ 0x9218f181, "exynos_pmu_read" },
	{ 0xc4ed3b13, "cal_is_lastcore_detecting" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xd653b126, "sched_clock" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0xa851973a, "raw_notifier_call_chain" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0xd3a372d3, "dbg_snapshot_cpuidle" },
	{ 0x798d3949, "cpuidle_get_cpu_driver" },
	{ 0x95e102ab, "tracepoint_probe_register" },
	{ 0x342c6645, "cal_cluster_disable" },
	{ 0x3c3c1a2e, "cal_cpu_disable" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x57ad17e9, "__cpuhp_setup_state" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x37a0cba, "kfree" },
	{ 0x6a7d162c, "of_phandle_iterator_next" },
	{ 0x1d3d2daf, "of_phandle_iterator_init" },
	{ 0x69601c70, "of_get_next_child" },
	{ 0x87f6e3eb, "of_find_node_by_name" },
	{ 0xfd0fc602, "cal_cluster_enable" },
	{ 0x6ca7c29e, "of_find_property" },
	{ 0x1b015d25, "bitmap_parselist" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0x10b62114, "sysfs_add_file_to_group" },
	{ 0x9cf0dacc, "of_property_read_string" },
	{ 0x9166fada, "strncpy" },
	{ 0x499e212, "of_find_node_by_type" },
	{ 0x989b9369, "of_get_cpu_node" },
	{ 0xc9e0f27d, "get_cpu_device" },
	{ 0x39846f3f, "of_count_phandle_with_args" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xa0eae826, "smp_call_function" },
	{ 0x7c02aadb, "of_property_read_string_helper" },
	{ 0xb0ee738d, "of_get_child_by_name" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x804e804f, "cal_cpu_enable" },
	{ 0xc01c8b87, "sysfs_create_link" },
	{ 0xaa3caa56, "sysfs_create_group" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0x92ad1db9, "cpumask_next" },
	{ 0xbf57e89e, "queue_delayed_work_on" },
	{ 0x2133b6e3, "ecs_request" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x96848186, "scnprintf" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x6228c21f, "smp_call_function_single" },
	{ 0x4445ab21, "cpumask_next_and" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xeb078aee, "_raw_write_unlock_irqrestore" },
	{ 0xdc9fa232, "raw_notifier_chain_register" },
	{ 0x5021bd81, "_raw_write_lock_irqsave" },
};

MODULE_INFO(depends, "pinctrl-samsung-core,common_muic,ems,cmupmucal,exynos-pmu-if,exynos-flexpmu-dbg,dss");

MODULE_ALIAS("of:N*T*Csamsung,exynos-cpupm");
MODULE_ALIAS("of:N*T*Csamsung,exynos-cpupmC*");
