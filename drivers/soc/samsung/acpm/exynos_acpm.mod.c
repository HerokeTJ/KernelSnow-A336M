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
	{ 0xe4bbc1dd, "kimage_voffset" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0xc56a41e6, "vabits_actual" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0x7ceeac9, "panic_notifier_list" },
	{ 0xa6257a2f, "complete" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x574add77, "__mutex_init" },
	{ 0x5f9e9913, "of_property_count_elems_of_size" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x3cf1ad62, "dbg_snapshot_add_bl_item_info" },
	{ 0x1d7b6367, "dbg_snapshot_printk" },
	{ 0x6b4b2933, "__ioremap" },
	{ 0x732ac580, "queue_work_on" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xfa8a5bb0, "devm_request_threaded_irq" },
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
	{ 0xb6261484, "register_die_notifier" },
	{ 0xbf57e89e, "queue_delayed_work_on" },
	{ 0x253af43d, "delayed_work_timer_fn" },
	{ 0x79cf5987, "init_timer_key" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x2e29445c, "platform_get_resource" },
	{ 0xcc23d1e5, "irq_of_parse_and_map" },
	{ 0xa4033df7, "dbg_snapshot_expire_watchdog" },
	{ 0xf9a482f9, "msleep" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xffae8e8b, "nsecs_to_jiffies" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x12a38747, "usleep_range" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0xf02aa937, "wait_for_completion_interruptible_timeout" },
	{ 0xd604c3f, "devm_kfree" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x6e7b28ee, "dbg_snapshot_acpm" },
	{ 0x95575c33, "__tracepoint_rwmmio_write" },
	{ 0x19ebf04e, "__tracepoint_rwmmio_post_read" },
	{ 0xa035d76e, "__tracepoint_rwmmio_read" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0x6ca7c29e, "of_find_property" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x92d08abd, "request_firmware" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x9166fada, "strncpy" },
	{ 0x9cf0dacc, "of_property_read_string" },
	{ 0xad0a8a5a, "of_get_property" },
	{ 0x69601c70, "of_get_next_child" },
	{ 0xb0ee738d, "of_get_child_by_name" },
	{ 0xbf27df8c, "simple_attr_open" },
	{ 0xeb895e94, "simple_attr_release" },
	{ 0xd9bf06e9, "simple_attr_write" },
	{ 0x4a788936, "simple_attr_read" },
	{ 0xe2aa8e76, "generic_file_llseek" },
	{ 0x63ef7ca7, "debugfs_create_file" },
	{ 0x82b308e8, "debugfs_create_dir" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0xade5ab62, "exynos_reboot_register_acpm_ops" },
	{ 0x33d29b07, "devm_ioremap_resource" },
	{ 0xc06cf568, "platform_get_resource_byname" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0x8eff6041, "_dev_info" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0xd653b126, "sched_clock" },
	{ 0x31dfd5cd, "__log_write_mmio" },
	{ 0x6980ea4b, "__log_post_read_mmio" },
	{ 0xcf1211a8, "__log_read_mmio" },
	{ 0xc5850110, "printk" },
};

MODULE_INFO(depends, "dss,exynos-reboot");

MODULE_ALIAS("of:N*T*Csamsung,exynos-acpm-ipc");
MODULE_ALIAS("of:N*T*Csamsung,exynos-acpm-ipcC*");
MODULE_ALIAS("of:N*T*Csamsung,exynos-acpm");
MODULE_ALIAS("of:N*T*Csamsung,exynos-acpmC*");
