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
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0x7ceeac9, "panic_notifier_list" },
	{ 0xfe5d4bb2, "sys_tz" },
	{ 0x8900b200, "kmalloc_caches" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x15af7f4, "system_state" },
	{ 0x38611295, "param_ops_long" },
	{ 0xd8339549, "param_ops_int" },
	{ 0x1115f928, "param_ops_uint" },
	{ 0x7eedf2be, "bus_for_each_dev" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9bb56529, "bus_unregister" },
	{ 0xaed3d17e, "class_destroy" },
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
	{ 0x13a54ed5, "__class_create" },
	{ 0x729df7c4, "bus_register" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x9e1bac16, "cdev_del" },
	{ 0x2269b80c, "devm_free_irq" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0xfa8a5bb0, "devm_request_threaded_irq" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x6ca7c29e, "of_find_property" },
	{ 0x5f25b6cc, "of_irq_get_byname" },
	{ 0x3ccde25c, "of_property_match_string" },
	{ 0xaf189c2c, "platform_get_irq" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xa15d438d, "device_destroy" },
	{ 0x2e6debbe, "cdev_add" },
	{ 0x95613f30, "cdev_init" },
	{ 0x20f92f09, "device_create" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xf9a482f9, "msleep" },
	{ 0x356461c8, "rtc_time64_to_tm" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0xa9941a8b, "__pm_relax" },
	{ 0xffb7c514, "ida_free" },
	{ 0x357b5405, "wakeup_source_unregister" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0x732ac580, "queue_work_on" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xbf8bc6a8, "sysevent_notif_queue_notification" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x96b29254, "strncasecmp" },
	{ 0xa07a37f0, "memchr" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xd7fe759b, "sysfs_notify" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x4c863dd4, "device_unregister" },
	{ 0xbd9d04d2, "device_register" },
	{ 0x574add77, "__mutex_init" },
	{ 0xb02b15cb, "dev_set_name" },
	{ 0x37a0cba, "kfree" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x28230a3f, "wakeup_source_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x6d4e3fc0, "sysevent_get_early_notif_info" },
	{ 0xf71fc4de, "sysevent_notif_add_sysevent" },
	{ 0xf1e046cc, "panic" },
	{ 0x2a3901ee, "__pm_stay_awake" },
	{ 0x7266452a, "send_early_notifications" },
	{ 0x54f79951, "get_device" },
	{ 0x56470118, "__warn_printk" },
	{ 0xbc44cef7, "put_device" },
	{ 0x2f166344, "module_put" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0xc5850110, "printk" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0x36505ade, "try_module_get" },
	{ 0x5792f848, "strlcpy" },
	{ 0xb228e90d, "bus_find_device" },
};

MODULE_INFO(depends, "sysevent_notif");

