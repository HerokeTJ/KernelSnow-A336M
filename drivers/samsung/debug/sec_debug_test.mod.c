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
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xcd221961, "sec_power_off_notifier_list" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xcdca3691, "nr_irqs" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x280f9f14, "__per_cpu_offset" },
	{ 0x62ad2053, "cpu_bit_bitmap" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xac594e02, "__cpu_online_mask" },
	{ 0x8900b200, "kmalloc_caches" },
	{ 0x95575c33, "__tracepoint_rwmmio_write" },
	{ 0x19ebf04e, "__tracepoint_rwmmio_post_read" },
	{ 0xa035d76e, "__tracepoint_rwmmio_read" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0xde7ece30, "__cpu_possible_mask" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0x96848186, "scnprintf" },
	{ 0xe0b13336, "argv_free" },
	{ 0x7380dffa, "argv_split" },
	{ 0xbf57e89e, "queue_delayed_work_on" },
	{ 0x65744673, "add_timer" },
	{ 0x253af43d, "delayed_work_timer_fn" },
	{ 0x79cf5987, "init_timer_key" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x5a921311, "strncmp" },
	{ 0xd0c05159, "emergency_restart" },
	{ 0x2c02e456, "exynos_mach_restart" },
	{ 0x7181db30, "atomic_notifier_chain_unregister" },
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
	{ 0x69ad2f20, "kstrtouint" },
	{ 0xd7462141, "sched_setscheduler_nocheck" },
	{ 0x2276db98, "kstrtoint" },
	{ 0xd548c316, "secdbg_exin_get_unfz" },
	{ 0xa0c085f1, "secdbg_exin_set_unfz" },
	{ 0x6b50e951, "up_read" },
	{ 0x3355da1c, "down_read" },
	{ 0x20d81059, "up_write" },
	{ 0x28ed2847, "down_write" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x732ac580, "queue_work_on" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x4735ac17, "flush_work" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0xa6257a2f, "complete" },
	{ 0x574add77, "__mutex_init" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x45355328, "irq_to_desc" },
	{ 0xbc477a2, "irq_set_irq_type" },
	{ 0xb1342cdb, "_raw_read_lock_irqsave" },
	{ 0x5021bd81, "_raw_write_lock_irqsave" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0xe68efe41, "_raw_write_lock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xa7a00749, "exynos_pm_qos_update_request" },
	{ 0x74ebf29f, "exynos_pm_qos_add_request_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xa0eae826, "smp_call_function" },
	{ 0x1000e51, "schedule" },
	{ 0xa4304a36, "wake_up_process" },
	{ 0x42f1936, "set_cpus_allowed_ptr" },
	{ 0xd9aa98a4, "kthread_create_on_node" },
	{ 0x939fc2ef, "hrtimer_start_range_ns" },
	{ 0x76c41756, "hrtimer_forward" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x779a18af, "kstrtoll" },
	{ 0x3ebd5214, "hrtimer_init" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x92ad1db9, "cpumask_next" },
	{ 0x6228c21f, "smp_call_function_single" },
	{ 0x2364c85a, "tasklet_init" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0xf9a482f9, "msleep" },
	{ 0x37a0cba, "kfree" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0xf1e046cc, "panic" },
	{ 0x71e68591, "exynos_pmu_write" },
	{ 0x9218f181, "exynos_pmu_read" },
	{ 0x31dfd5cd, "__log_write_mmio" },
	{ 0x6980ea4b, "__log_post_read_mmio" },
	{ 0xcf1211a8, "__log_read_mmio" },
	{ 0x3c80c06c, "kstrtoull" },
	{ 0x6b4b2933, "__ioremap" },
	{ 0xa4033df7, "dbg_snapshot_expire_watchdog" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xad4e6259, "remove_cpu" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc5850110, "printk" },
	{ 0xb3f7646e, "kthread_should_stop" },
};

MODULE_INFO(depends, "sec_reboot,exynos-reboot,sec_debug_extra_info,exynos_pm_qos,exynos-pmu-if,dss");

MODULE_ALIAS("of:N*T*Csamsung,sec_debug_test");
MODULE_ALIAS("of:N*T*Csamsung,sec_debug_testC*");
