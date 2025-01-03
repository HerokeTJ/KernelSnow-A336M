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
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0xde7ece30, "__cpu_possible_mask" },
	{ 0x8900b200, "kmalloc_caches" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0xe8415b1d, "sysfs_remove_group" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x9b4ab3e7, "freezing_slow_path" },
	{ 0x1000e51, "schedule" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x1b015d25, "bitmap_parselist" },
	{ 0xa4304a36, "wake_up_process" },
	{ 0x2b7ddd11, "kthread_stop" },
	{ 0xd7462141, "sched_setscheduler_nocheck" },
	{ 0x42f1936, "set_cpus_allowed_ptr" },
	{ 0xd9aa98a4, "kthread_create_on_node" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xd3752c27, "atomic_notifier_call_chain" },
	{ 0xb6735b01, "acpm_time_calc" },
	{ 0x6ca7c29e, "of_find_property" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0xd6d9e074, "exynos_acpm_set_fast_switch" },
	{ 0x8eff6041, "_dev_info" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9cf0dacc, "of_property_read_string" },
	{ 0x69601c70, "of_get_next_child" },
	{ 0xb0ee738d, "of_get_child_by_name" },
	{ 0x6a5c3098, "exynos_get_idle_ip_index" },
	{ 0x10b62114, "sysfs_add_file_to_group" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xbc7a4422, "_dev_warn" },
	{ 0xaa3caa56, "sysfs_create_group" },
	{ 0x574add77, "__mutex_init" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xd36ebd12, "irq_work_queue" },
	{ 0xc5850110, "printk" },
	{ 0x75483de5, "is_acpm_ipc_busy" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0x90cd4355, "exynos_update_ip_idle_status" },
	{ 0xf5f585ea, "acpm_ipc_send_data" },
	{ 0xa7e888c3, "acpm_ipc_request_channel" },
	{ 0xd653b126, "sched_clock" },
	{ 0x1b8a900, "dbg_snapshot_dm" },
	{ 0x37a0cba, "kfree" },
	{ 0x9166fada, "strncpy" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0xeb9065d9, "mutex_lock" },
};

MODULE_INFO(depends, "exynos_acpm,cmupmucal,exynos-cpupm,dss");

MODULE_ALIAS("platform:exynos-dm");
MODULE_ALIAS("of:N*T*Csamsung,exynos-dvfs-manager");
MODULE_ALIAS("of:N*T*Csamsung,exynos-dvfs-managerC*");
