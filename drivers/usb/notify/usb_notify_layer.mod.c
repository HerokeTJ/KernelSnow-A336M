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
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0xfe5d4bb2, "sys_tz" },
	{ 0xd740362b, "seq_printf" },
	{ 0x4f731e2b, "single_open" },
	{ 0xef42eddb, "single_release" },
	{ 0xad9f2705, "seq_lseek" },
	{ 0xb9997d36, "seq_read" },
	{ 0x356461c8, "rtc_time64_to_tm" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0xd653b126, "sched_clock" },
	{ 0x3c651057, "remove_proc_entry" },
	{ 0x999e8297, "vfree" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x20fd21c6, "proc_create" },
	{ 0x2e2b40d2, "strncat" },
	{ 0x77bc13a0, "strim" },
	{ 0x5792f848, "strlcpy" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x9c6febfc, "add_uevent_var" },
	{ 0x8948c619, "kobject_uevent" },
	{ 0x5b0864e7, "pm_runtime_set_autosuspend_delay" },
	{ 0x3301cee6, "usb_hub_find_child" },
	{ 0x361c5d2f, "usb_driver_release_interface" },
	{ 0xc405a128, "usb_set_device_state" },
	{ 0x811dc334, "usb_unregister_notify" },
	{ 0x89bbafc6, "usb_register_notify" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x13a54ed5, "__class_create" },
	{ 0xaed3d17e, "class_destroy" },
	{ 0xe8415b1d, "sysfs_remove_group" },
	{ 0xa15d438d, "device_destroy" },
	{ 0xaa3caa56, "sysfs_create_group" },
	{ 0x9166fada, "strncpy" },
	{ 0x20f92f09, "device_create" },
	{ 0x229a20fd, "kobject_uevent_env" },
	{ 0x5a921311, "strncmp" },
	{ 0x98cf60b3, "strlen" },
	{ 0x85df9b6c, "strsep" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x8900b200, "kmalloc_caches" },
	{ 0xbf57e89e, "queue_delayed_work_on" },
	{ 0x732ac580, "queue_work_on" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa9941a8b, "__pm_relax" },
	{ 0x12a38747, "usleep_range" },
	{ 0x2a3901ee, "__pm_stay_awake" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0x63baf885, "gpiod_direction_output_raw" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xa471896, "gpiod_to_irq" },
	{ 0x9a7402a8, "gpiod_get_raw_value" },
	{ 0x2c531865, "gpio_to_desc" },
	{ 0x1a93828e, "gpiod_direction_input" },
	{ 0x26cc73c3, "complete_and_exit" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x4fe8ab47, "wakeup_source_remove" },
	{ 0xf8beca97, "cancel_delayed_work_sync" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0x37a0cba, "kfree" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x7181db30, "atomic_notifier_chain_unregister" },
	{ 0x963aa2a9, "blocking_notifier_chain_unregister" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0x253af43d, "delayed_work_timer_fn" },
	{ 0x79cf5987, "init_timer_key" },
	{ 0x51e13065, "wakeup_source_add" },
	{ 0xbb0c86a5, "blocking_notifier_chain_register" },
	{ 0xf5a94b83, "__init_rwsem" },
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
	{ 0x574add77, "__mutex_init" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x77ae495d, "usb_speed_string" },
	{ 0xd3752c27, "atomic_notifier_call_chain" },
	{ 0x8317ad7c, "blocking_notifier_call_chain" },
	{ 0x8eff6041, "_dev_info" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x2072ee9b, "request_threaded_irq" },
	{ 0x47229b5c, "gpio_request" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xa6257a2f, "complete" },
	{ 0xc5850110, "printk" },
	{ 0xa4304a36, "wake_up_process" },
	{ 0xd9aa98a4, "kthread_create_on_node" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E170292DD974D3661698703");
