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
	{ 0xf184be6, "i2c_transfer" },
	{ 0xa185c970, "stui_get_mode" },
	{ 0x37086f82, "sec_input_get_fod_info" },
	{ 0x3bc99545, "sec_input_disable_device" },
	{ 0x2e54d7ce, "sec_input_enable_device" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x46045dd7, "kstrtou8" },
	{ 0x2276db98, "kstrtoint" },
	{ 0x47c683fd, "sec_input_set_fod_rect" },
	{ 0x8ba48cf6, "sec_cmd_set_cmd_exit" },
	{ 0xf8ac05, "sec_cmd_send_event_to_user" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xcf0af073, "sec_debug_tsp_raw_data_msg" },
	{ 0xefe6537d, "sec_cmd_set_cmd_result_all" },
	{ 0xa916b694, "strnlen" },
	{ 0xb2ad85da, "sec_cmd_set_cmd_result" },
	{ 0x9fea0241, "sec_cmd_set_default_result" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe2ab0b71, "sec_input_sysfs_remove" },
	{ 0x9b2b597c, "sysfs_remove_link" },
	{ 0xb8ae5f9f, "sec_input_sysfs_create" },
	{ 0xc01c8b87, "sysfs_create_link" },
	{ 0x5b16df0b, "sec_cmd_exit" },
	{ 0x88386c9, "sec_cmd_init" },
	{ 0x5dfa5083, "spu_firmware_signature_verify" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x92d08abd, "request_firmware" },
	{ 0x999e8297, "vfree" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xe8415b1d, "sysfs_remove_group" },
	{ 0xaa3caa56, "sysfs_create_group" },
	{ 0x8900b200, "kmalloc_caches" },
	{ 0xa96fd5d2, "ptsp" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x98cf60b3, "strlen" },
	{ 0x8f471ada, "i2c_del_driver" },
	{ 0x357b5405, "wakeup_source_unregister" },
	{ 0xa1e8e8ba, "vbus_notifier_unregister" },
	{ 0xf8beca97, "cancel_delayed_work_sync" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xf0bc9700, "stui_i2c_unlock" },
	{ 0xc5850110, "printk" },
	{ 0xd20d698a, "stui_i2c_lock" },
	{ 0xbf57e89e, "queue_delayed_work_on" },
	{ 0x28230a3f, "wakeup_source_register" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x273aa834, "sec_input_gesture_report" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x8a25ae5d, "pm_wakeup_ws_event" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x2c531865, "gpio_to_desc" },
	{ 0xa471896, "gpiod_to_irq" },
	{ 0x2072ee9b, "request_threaded_irq" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xfe990052, "gpio_free" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x253af43d, "delayed_work_timer_fn" },
	{ 0x79cf5987, "init_timer_key" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0xd9362e5f, "vbus_notifier_register" },
	{ 0x4ffa7eb, "sec_input_pinctrl_configure" },
	{ 0xaa48f219, "devm_pinctrl_get" },
	{ 0xea91ebd2, "sec_input_device_register" },
	{ 0x574add77, "__mutex_init" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xdfe726f7, "sec_input_parse_dt" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0xbb44cd95, "sec_tsp_log_fix" },
	{ 0x4f72f07e, "i2c_register_driver" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x732ac580, "queue_work_on" },
	{ 0x3b938c8d, "input_event" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xe6838ed7, "sec_input_print_info" },
	{ 0xda571594, "cancel_delayed_work" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0x2f1fa27c, "regulator_is_enabled" },
	{ 0x6c8362b4, "regulator_disable" },
	{ 0xf3bd923d, "regulator_enable" },
	{ 0x6381d52f, "sec_input_set_fod_info" },
	{ 0x3fcaa46c, "input_mt_report_slot_state" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0xfda5c85a, "sec_delay" },
	{ 0xfd7d7073, "sec_debug_tsp_log_msg" },
	{ 0x4fdece8c, "dev_driver_string" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8eff6041, "_dev_info" },
};

MODULE_INFO(depends, "tuihw-inf,sec_common_fn,sec_cmd,sec_tsp_log,spu_verify,vbus_notifier,i2c-exynos5");

MODULE_ALIAS("of:N*T*Cfocaltech,fts");
MODULE_ALIAS("of:N*T*Cfocaltech,ftsC*");
