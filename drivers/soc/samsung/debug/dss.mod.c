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
	{ 0xdcb764ad, "memset" },
	{ 0x4829a47e, "memcpy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0xfff5afc, "time64_to_tm" },
	{ 0x9f5afe9b, "noop_llseek" },
	{ 0xbb0a7735, "__register_chrdev" },
	{ 0xaed3d17e, "class_destroy" },
	{ 0x20f92f09, "device_create" },
	{ 0x13a54ed5, "__class_create" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x87f6e3eb, "of_find_node_by_name" },
	{ 0x8064d573, "__tracepoint_android_vh_ipi_stop" },
	{ 0xb1307de2, "init_task" },
	{ 0x15db3b99, "__cpu_active_mask" },
	{ 0xac594e02, "__cpu_online_mask" },
	{ 0xfe5d4bb2, "sys_tz" },
	{ 0x7ceeac9, "panic_notifier_list" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xe8d7e643, "stack_trace_save_tsk" },
	{ 0xfe5887b6, "dump_backtrace" },
	{ 0xd3752c27, "atomic_notifier_call_chain" },
	{ 0xc631580a, "console_unlock" },
	{ 0x944a564d, "is_console_locked" },
	{ 0xaf507de1, "__arch_copy_from_user" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0x5f9e9913, "of_property_count_elems_of_size" },
	{ 0x7043d2c8, "of_prop_next_u32" },
	{ 0x356461c8, "rtc_time64_to_tm" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x51e77c97, "pfn_valid" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xa0eae826, "smp_call_function" },
	{ 0xd9d8fd16, "register_restart_handler" },
	{ 0xb6261484, "register_die_notifier" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0xf1e046cc, "panic" },
	{ 0xb917b6d7, "return_address" },
	{ 0x3199a1ef, "_dev_emerg" },
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
	{ 0x52195345, "__tracepoint_device_pm_callback_end" },
	{ 0xe9b1039b, "__tracepoint_device_pm_callback_start" },
	{ 0xfede9222, "__tracepoint_suspend_resume" },
	{ 0x703a9377, "__tracepoint_hrtimer_expire_exit" },
	{ 0x55a6686, "__tracepoint_hrtimer_expire_entry" },
	{ 0xadab1f32, "__tracepoint_irq_handler_exit" },
	{ 0x3314215, "__tracepoint_irq_handler_entry" },
	{ 0xecbfa711, "__tracepoint_workqueue_execute_end" },
	{ 0x8db61368, "__tracepoint_workqueue_execute_start" },
	{ 0x4044ba28, "__tracepoint_sched_switch" },
	{ 0x38869d88, "kstat" },
	{ 0x280f9f14, "__per_cpu_offset" },
	{ 0xcdca3691, "nr_irqs" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xde7ece30, "__cpu_possible_mask" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x7c02aadb, "of_property_read_string_helper" },
	{ 0x95e102ab, "tracepoint_probe_register" },
	{ 0x45355328, "irq_to_desc" },
	{ 0x92ad1db9, "cpumask_next" },
	{ 0xd653b126, "sched_clock" },
	{ 0x1c9248ef, "of_prop_next_string" },
	{ 0x6ca7c29e, "of_find_property" },
	{ 0x9166fada, "strncpy" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0x8b9f70c7, "cpu_hwcaps" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0x366307a, "console_suspend_enabled" },
	{ 0xe4bbc1dd, "kimage_voffset" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0xc56a41e6, "vabits_actual" },
	{ 0x95575c33, "__tracepoint_rwmmio_write" },
	{ 0x19ebf04e, "__tracepoint_rwmmio_post_read" },
	{ 0xa035d76e, "__tracepoint_rwmmio_read" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0xbe2adf78, "proc_set_size" },
	{ 0xdd64e639, "strscpy" },
	{ 0x9fd75310, "android_debug_symbol" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0x6b2941b2, "__arch_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x20fd21c6, "proc_create" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x1270d593, "vmap" },
	{ 0xea5339e4, "of_reserved_mem_lookup" },
	{ 0x5cf87584, "of_device_is_available" },
	{ 0x79746f10, "of_parse_phandle" },
	{ 0x39846f3f, "of_count_phandle_with_args" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0xf93aae46, "__arm_smccc_smc" },
	{ 0xd026d214, "sysfs_create_groups" },
	{ 0x644961e8, "register_console" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0x2276db98, "kstrtoint" },
	{ 0x3c80c06c, "kstrtoull" },
	{ 0x96848186, "scnprintf" },
	{ 0x31dfd5cd, "__log_write_mmio" },
	{ 0x6980ea4b, "__log_post_read_mmio" },
	{ 0xcf1211a8, "__log_read_mmio" },
	{ 0x8eff6041, "_dev_info" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0xc5850110, "printk" },
	{ 0xef4b763b, "of_device_is_compatible" },
	{ 0x9218f181, "exynos_pmu_read" },
	{ 0xcac72c38, "exynos_pmu_update" },
	{ 0x148653, "vsnprintf" },
	{ 0x98cf60b3, "strlen" },
	{ 0x5a921311, "strncmp" },
	{ 0x5ed4c6ae, "_dev_err" },
};

MODULE_INFO(depends, "exynos-pmu-if");

MODULE_ALIAS("of:N*T*Csamsung,debug-snapshot");
MODULE_ALIAS("of:N*T*Csamsung,debug-snapshotC*");
