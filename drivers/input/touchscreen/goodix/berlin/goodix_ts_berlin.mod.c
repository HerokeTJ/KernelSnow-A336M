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
	{ 0x3bc99545, "sec_input_disable_device" },
	{ 0x2e54d7ce, "sec_input_enable_device" },
	{ 0x37086f82, "sec_input_get_fod_info" },
	{ 0x46045dd7, "kstrtou8" },
	{ 0x98cf60b3, "strlen" },
	{ 0x7220ca19, "sec_tsp_sponge_log" },
	{ 0x3c80c06c, "kstrtoull" },
	{ 0x47c683fd, "sec_input_set_fod_rect" },
	{ 0x8ba48cf6, "sec_cmd_set_cmd_exit" },
	{ 0x9a7402a8, "gpiod_get_raw_value" },
	{ 0x999e8297, "vfree" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xefe6537d, "sec_cmd_set_cmd_result_all" },
	{ 0xa916b694, "strnlen" },
	{ 0xb2ad85da, "sec_cmd_set_cmd_result" },
	{ 0x9fea0241, "sec_cmd_set_default_result" },
	{ 0xe2ab0b71, "sec_input_sysfs_remove" },
	{ 0x9b2b597c, "sysfs_remove_link" },
	{ 0xb8ae5f9f, "sec_input_sysfs_create" },
	{ 0xc01c8b87, "sysfs_create_link" },
	{ 0x5b16df0b, "sec_cmd_exit" },
	{ 0x88386c9, "sec_cmd_init" },
	{ 0xaf6e7a14, "sec_input_check_cover_type" },
	{ 0x6381d52f, "sec_input_set_fod_info" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0x8b9f70c7, "cpu_hwcaps" },
	{ 0x6b2941b2, "__arch_copy_to_user" },
	{ 0xaf507de1, "__arch_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xdcef2da4, "misc_deregister" },
	{ 0x6331d19e, "misc_register" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xcf0af073, "sec_debug_tsp_raw_data_msg" },
	{ 0xefd0ee57, "sysfs_remove_file_ns" },
	{ 0x4fc8c1b0, "sysfs_create_file_ns" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xe0875eb1, "kstrtobool" },
	{ 0x40235c98, "_raw_write_unlock" },
	{ 0xe68efe41, "_raw_write_lock" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0x96848186, "scnprintf" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x91b9ec8d, "kobject_put" },
	{ 0xef1d7977, "kobject_init_and_add" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xa4304a36, "wake_up_process" },
	{ 0xd9aa98a4, "kthread_create_on_node" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x3b938c8d, "input_event" },
	{ 0x273aa834, "sec_input_gesture_report" },
	{ 0x2cc24c6b, "sec_input_proximity_report" },
	{ 0x888df2ac, "sec_input_coord_event_fill_slot" },
	{ 0xd885c850, "sec_input_coord_event_sync_slot" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x12a38747, "usleep_range" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x263c3152, "bcmp" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0x3c651057, "remove_proc_entry" },
	{ 0xe8415b1d, "sysfs_remove_group" },
	{ 0xf0bc9700, "stui_i2c_unlock" },
	{ 0xd20d698a, "stui_i2c_lock" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x6ca7c29e, "of_find_property" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0xf8ac05, "sec_cmd_send_event_to_user" },
	{ 0xd9362e5f, "vbus_notifier_register" },
	{ 0x47109311, "manager_notifier_register" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0x779244c0, "sec_input_power" },
	{ 0x4ffa7eb, "sec_input_pinctrl_configure" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0xbf57e89e, "queue_delayed_work_on" },
	{ 0xda571594, "cancel_delayed_work" },
	{ 0xd740362b, "seq_printf" },
	{ 0xfb24a559, "PDE_DATA" },
	{ 0x6503cb62, "single_open_size" },
	{ 0xef42eddb, "single_release" },
	{ 0xad9f2705, "seq_lseek" },
	{ 0xb9997d36, "seq_read" },
	{ 0xa79bc746, "proc_create_data" },
	{ 0x18c67997, "proc_mkdir" },
	{ 0x779a18af, "kstrtoll" },
	{ 0x85df9b6c, "strsep" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xaa3caa56, "sysfs_create_group" },
	{ 0x8a25ae5d, "pm_wakeup_ws_event" },
	{ 0x45355328, "irq_to_desc" },
	{ 0x2c531865, "gpio_to_desc" },
	{ 0xa471896, "gpiod_to_irq" },
	{ 0xfa8a5bb0, "devm_request_threaded_irq" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xf8beca97, "cancel_delayed_work_sync" },
	{ 0x78c7940d, "mutex_trylock" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x732ac580, "queue_work_on" },
	{ 0x574add77, "__mutex_init" },
	{ 0xe6838ed7, "sec_input_print_info" },
	{ 0x5dfa5083, "spu_firmware_signature_verify" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x92d08abd, "request_firmware" },
	{ 0x357b5405, "wakeup_source_unregister" },
	{ 0x28230a3f, "wakeup_source_register" },
	{ 0xea91ebd2, "sec_input_device_register" },
	{ 0x80e2013, "sec_input_set_grip_type" },
	{ 0x253af43d, "delayed_work_timer_fn" },
	{ 0x79cf5987, "init_timer_key" },
	{ 0x42121fbd, "sec_input_release_all_finger" },
	{ 0x8317ad7c, "blocking_notifier_call_chain" },
	{ 0x963aa2a9, "blocking_notifier_chain_unregister" },
	{ 0xbb0c86a5, "blocking_notifier_chain_register" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0x8900b200, "kmalloc_caches" },
	{ 0xa96fd5d2, "ptsp" },
	{ 0xe8a28de, "platform_device_unregister" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0xfda5c85a, "sec_delay" },
	{ 0xc5850110, "printk" },
	{ 0xf184be6, "i2c_transfer" },
	{ 0xf02aa937, "wait_for_completion_interruptible_timeout" },
	{ 0xa185c970, "stui_get_mode" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0xbb44cd95, "sec_tsp_log_fix" },
	{ 0xfcd3f0fc, "regulator_put" },
	{ 0xaa48f219, "devm_pinctrl_get" },
	{ 0xdfe726f7, "sec_input_parse_dt" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0x37a0cba, "kfree" },
	{ 0xcbfe80e4, "platform_device_register" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0x8f471ada, "i2c_del_driver" },
	{ 0x4f72f07e, "i2c_register_driver" },
	{ 0xfd7d7073, "sec_debug_tsp_log_msg" },
	{ 0x4fdece8c, "dev_driver_string" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8eff6041, "_dev_info" },
};

MODULE_INFO(depends, "sec_common_fn,sec_tsp_log,sec_cmd,i2c-exynos5,vbus_notifier,usb_typec_manager,spu_verify,tuihw-inf");

MODULE_ALIAS("of:N*T*Cgoodix,berlin");
MODULE_ALIAS("of:N*T*Cgoodix,berlinC*");
MODULE_ALIAS("of:N*T*Cgoodix,gt9897");
MODULE_ALIAS("of:N*T*Cgoodix,gt9897C*");
MODULE_ALIAS("of:N*T*Cgoodix,gt9966");
MODULE_ALIAS("of:N*T*Cgoodix,gt9966C*");
MODULE_ALIAS("of:N*T*Cgoodix,gt9916");
MODULE_ALIAS("of:N*T*Cgoodix,gt9916C*");
MODULE_ALIAS("of:N*T*Cgoodix,gt9885");
MODULE_ALIAS("of:N*T*Cgoodix,gt9885C*");
MODULE_ALIAS("of:N*T*Cgoodix,gt9886");
MODULE_ALIAS("of:N*T*Cgoodix,gt9886C*");
MODULE_ALIAS("i2c:goodix_i2c");
MODULE_ALIAS("platform:goodix_ts");
