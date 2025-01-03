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
	{ 0x7d6ef4ee, "__tracepoint_dwc3_ep_queue" },
	{ 0x72cd0f7f, "mod_timer" },
	{ 0x95e102ab, "tracepoint_probe_register" },
	{ 0xf15e728e, "del_timer_sync" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x1dcec843, "usb_audio_connection" },
	{ 0x978f6f27, "exynos_usbdrd_shutdown_notice" },
	{ 0xa6257a2f, "complete" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x2f0d9053, "usb_otg_state_string" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa9941a8b, "__pm_relax" },
	{ 0x12a38747, "usleep_range" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x27c81921, "usbpd_set_host_on" },
	{ 0x2a3901ee, "__pm_stay_awake" },
	{ 0x6c8362b4, "regulator_disable" },
	{ 0xf3bd923d, "regulator_enable" },
	{ 0x37a0cba, "kfree" },
	{ 0x357b5405, "wakeup_source_unregister" },
	{ 0xe8415b1d, "sysfs_remove_group" },
	{ 0x7681946c, "unregister_pm_notifier" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0x253af43d, "delayed_work_timer_fn" },
	{ 0x79cf5987, "init_timer_key" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xfd2df946, "register_usb" },
	{ 0x9cc4f70a, "register_pm_notifier" },
	{ 0xaa3caa56, "sysfs_create_group" },
	{ 0x28230a3f, "wakeup_source_register" },
	{ 0xb7debf78, "devm_regulator_get" },
	{ 0x574add77, "__mutex_init" },
	{ 0x74ebf29f, "exynos_pm_qos_add_request_trace" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xfa8a5bb0, "devm_request_threaded_irq" },
	{ 0xaf189c2c, "platform_get_irq" },
	{ 0x885968b8, "exynos_usbdrd_phy_tune" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0xa7a00749, "exynos_pm_qos_update_request" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0x6fab687a, "otg_connection" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x19ebf04e, "__tracepoint_rwmmio_post_read" },
	{ 0xa035d76e, "__tracepoint_rwmmio_read" },
	{ 0x95575c33, "__tracepoint_rwmmio_write" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x5ec1d781, "__pm_runtime_set_status" },
	{ 0xcc179d8b, "device_for_each_child" },
	{ 0xa7c8e259, "__pm_runtime_disable" },
	{ 0x881262d4, "register_kretprobe" },
	{ 0xff8e54c1, "dma_alloc_attrs" },
	{ 0x324aa8b7, "platform_device_add_properties" },
	{ 0xd757224f, "platform_device_add_resources" },
	{ 0x2e29445c, "platform_get_resource" },
	{ 0x871df5fa, "__pm_runtime_idle" },
	{ 0xac3099d, "__pm_runtime_use_autosuspend" },
	{ 0x70bcd326, "device_property_present" },
	{ 0x6ca7c29e, "of_find_property" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0xe2e7afd8, "platform_device_put" },
	{ 0xb81968dd, "platform_device_del" },
	{ 0x4e90e03, "platform_device_add" },
	{ 0xf477c34f, "platform_device_alloc" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x7c02aadb, "of_property_read_string_helper" },
	{ 0x36d574de, "devm_clk_get" },
	{ 0x5a921311, "strncmp" },
	{ 0xbdc9a589, "dma_set_coherent_mask" },
	{ 0x77561cbf, "dma_set_mask" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0xe8a28de, "platform_device_unregister" },
	{ 0x4c64afed, "probe_typec_manager_gadget_ops" },
	{ 0x687add72, "pm_runtime_allow" },
	{ 0xe59e7d7b, "of_platform_populate" },
	{ 0xa6e15890, "exynos_usbdrd_phy_conn" },
	{ 0x81d59531, "exynos_usbdrd_ldo_manual_control" },
	{ 0xb0ee738d, "of_get_child_by_name" },
	{ 0xacaaadd3, "pm_runtime_forbid" },
	{ 0x8081ce78, "pm_runtime_enable" },
	{ 0x90cd4355, "exynos_update_ip_idle_status" },
	{ 0x6a5c3098, "exynos_get_idle_ip_index" },
	{ 0x8016a6c4, "devm_phy_get" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0x71c1892a, "make_suspend_current_event" },
	{ 0x9ec89c33, "vbus_session_notify" },
	{ 0x64853d2f, "store_usblog_notify" },
	{ 0xc4d7d224, "usb_reset_notify" },
	{ 0xd8ed0ca2, "__pm_runtime_suspend" },
	{ 0x8637ac5d, "__pm_runtime_resume" },
	{ 0x732ac580, "queue_work_on" },
	{ 0x7576a4d9, "of_match_device" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x6980ea4b, "__log_post_read_mmio" },
	{ 0xcf1211a8, "__log_read_mmio" },
	{ 0x31dfd5cd, "__log_write_mmio" },
	{ 0x8ea54251, "unregister_kretprobe" },
	{ 0xf9a482f9, "msleep" },
	{ 0x68bc512b, "of_find_device_by_node" },
	{ 0x65f9af5a, "of_find_compatible_node" },
	{ 0xd969d6f4, "cancel_work_sync" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x9f5130, "usb_gadget_set_state" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x8eff6041, "_dev_info" },
	{ 0xc5850110, "printk" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x5ed4c6ae, "_dev_err" },
};

MODULE_INFO(depends, "exynos-usb-audio-offloading,phy-exynos-usbdrd-super,if_cb_manager,exynos_pm_qos,usb_typec_manager,exynos-cpupm,usb_f_ss_mon_gadget,usb_notify_layer");

MODULE_ALIAS("of:N*T*Csamsung,exynos-dwusb");
MODULE_ALIAS("of:N*T*Csamsung,exynos-dwusbC*");
