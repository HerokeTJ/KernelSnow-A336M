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
	{ 0x9688de8b, "memstart_addr" },
	{ 0x7ceeac9, "panic_notifier_list" },
	{ 0x8900b200, "kmalloc_caches" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0x8b9f70c7, "cpu_hwcaps" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0xfe5d4bb2, "sys_tz" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x263c3152, "bcmp" },
	{ 0xf9a482f9, "msleep" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0x87f6e3eb, "of_find_node_by_name" },
	{ 0x1270d593, "vmap" },
	{ 0xea5339e4, "of_reserved_mem_lookup" },
	{ 0x79746f10, "of_parse_phandle" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x13a54ed5, "__class_create" },
	{ 0xe2a9fbdd, "sysfs_remove_bin_file" },
	{ 0x10d5b5f2, "sysfs_create_bin_file" },
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
	{ 0xb6261484, "register_die_notifier" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x9e1bac16, "cdev_del" },
	{ 0xedc03953, "iounmap" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0x6b2941b2, "__arch_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x4c863dd4, "device_unregister" },
	{ 0x2e6debbe, "cdev_add" },
	{ 0x95613f30, "cdev_init" },
	{ 0x20f92f09, "device_create" },
	{ 0x6b4b2933, "__ioremap" },
	{ 0x4fc8c1b0, "sysfs_create_file_ns" },
	{ 0xefd0ee57, "sysfs_remove_file_ns" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x356461c8, "rtc_time64_to_tm" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0xd653b126, "sched_clock" },
	{ 0x732ac580, "queue_work_on" },
	{ 0x177f5d51, "kobject_create_and_add" },
	{ 0x91b9ec8d, "kobject_put" },
	{ 0x5a921311, "strncmp" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0x574add77, "__mutex_init" },
	{ 0xffb7c514, "ida_free" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x37a0cba, "kfree" },
	{ 0x999e8297, "vfree" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x9166fada, "strncpy" },
	{ 0x98cf60b3, "strlen" },
	{ 0x8eff6041, "_dev_info" },
	{ 0x5d112304, "__memcpy_fromio" },
	{ 0xaa0c318b, "vscnprintf" },
	{ 0x96848186, "scnprintf" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0x2cd90edd, "__cfi_slowpath" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Csamsung,memlogger");
MODULE_ALIAS("of:N*T*Csamsung,memloggerC*");
