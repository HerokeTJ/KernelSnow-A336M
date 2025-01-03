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
	{ 0x8900b200, "kmalloc_caches" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x8f471ada, "i2c_del_driver" },
	{ 0x357b5405, "wakeup_source_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x434e2a92, "pdic_misc_exit" },
	{ 0x95a5e27d, "pdic_register_switch_device" },
	{ 0xda0a9c4c, "typec_unregister_port" },
	{ 0x175ced1, "power_supply_get_by_name" },
	{ 0xc62d0c05, "usbpd_manager_acc_handler_cancel" },
	{ 0x91b684b2, "is_blocked" },
	{ 0x1f456d02, "usbpd_kick_policy_work" },
	{ 0x90f1fa9, "usbpd_rx_hard_reset" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x111d2777, "alarm_start" },
	{ 0x536e1fa7, "alarm_cancel" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x7d74bae5, "usbpd_timer1_start" },
	{ 0xf3bd923d, "regulator_enable" },
	{ 0x3651b765, "usbpd_policy_reset" },
	{ 0xa471896, "gpiod_to_irq" },
	{ 0x1a93828e, "gpiod_direction_input" },
	{ 0xfe990052, "gpio_free" },
	{ 0x2072ee9b, "request_threaded_irq" },
	{ 0x47229b5c, "gpio_request" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x33fd62de, "typec_set_pwr_opmode" },
	{ 0xf189292d, "usbpd_protocol_rx" },
	{ 0x29e2b80f, "is_lpcharge_pdic_param" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x12a38747, "usleep_range" },
	{ 0x982b7d12, "of_get_named_gpio_flags" },
	{ 0x6ca7c29e, "of_find_property" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x7f689a84, "power_supply_set_property" },
	{ 0xe3c36145, "muic_pdic_notifier_register" },
	{ 0x6994009e, "device_init_wakeup" },
	{ 0xf9dce273, "usbpd_manager_psy_init" },
	{ 0x253af43d, "delayed_work_timer_fn" },
	{ 0x79cf5987, "init_timer_key" },
	{ 0x987c6154, "typec_init" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x84c3c462, "usbpd_set_ops" },
	{ 0x333ba624, "usbpd_init" },
	{ 0xb7debf78, "devm_regulator_get" },
	{ 0x1fbe3658, "alarm_init" },
	{ 0x574add77, "__mutex_init" },
	{ 0x4f72f07e, "i2c_register_driver" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xddfe4bf7, "send_otg_notify" },
	{ 0x5f2c6469, "typec_set_data_role" },
	{ 0x7e2998e7, "typec_set_pwr_role" },
	{ 0x46c8f0eb, "usbpd_manager_acc_detach" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0x9a7402a8, "gpiod_get_raw_value" },
	{ 0x2c531865, "gpio_to_desc" },
	{ 0x63baf885, "gpiod_direction_output_raw" },
	{ 0xf8beca97, "cancel_delayed_work_sync" },
	{ 0x6c8362b4, "regulator_disable" },
	{ 0x5c779175, "usbpd_reinit" },
	{ 0xa6988e4, "usbpd_cancel_policy_work" },
	{ 0xadef2314, "usbpd_manager_plug_detach" },
	{ 0xd3b87758, "usbpd_manager_vbus_turn_on_ctrl" },
	{ 0x5b8aa93e, "i2c_smbus_read_i2c_block_data" },
	{ 0x32b7680d, "i2c_smbus_write_i2c_block_data" },
	{ 0xb44150d7, "pdic_event_work" },
	{ 0xda571594, "cancel_delayed_work" },
	{ 0x610b7c49, "i2c_smbus_write_byte_data" },
	{ 0x6c60962c, "inc_hw_param" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0xae87eb36, "i2c_smbus_read_byte_data" },
	{ 0xe903e3f8, "get_otg_notify" },
	{ 0xbf57e89e, "queue_delayed_work_on" },
	{ 0x8eff6041, "_dev_info" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0xc5850110, "printk" },
};

MODULE_INFO(depends, "pdic_notifier_module,s2m_pdic_notifier_module,usb_notify_layer,common_muic");

MODULE_ALIAS("i2c:usbpd-s2mu106");
