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
	{ 0x175ced1, "power_supply_get_by_name" },
	{ 0x1e1fa128, "muic_afc_get_request_cause" },
	{ 0x2e249793, "muic_is_enable_afc_request" },
	{ 0xbb5b12e2, "muic_afc_request_cause_clear" },
	{ 0xda571594, "cancel_delayed_work" },
	{ 0x54fb577d, "muic_core_hv_state_manager" },
	{ 0x98462f6f, "muic_core_hv_init" },
	{ 0x89b50dca, "muic_core_hv_is_hv_dev" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0x8beab057, "muic_notifier_detach_attached_dev" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xf019728e, "muic_core_exit" },
	{ 0xddf1a9a6, "muic_manager_exit" },
	{ 0x2072ee9b, "request_threaded_irq" },
	{ 0x1baca4f3, "muic_manager_set_legacy_dev" },
	{ 0xbf57e89e, "queue_delayed_work_on" },
	{ 0x982b7d12, "of_get_named_gpio_flags" },
	{ 0x39846f3f, "of_count_phandle_with_args" },
	{ 0x6ca7c29e, "of_find_property" },
	{ 0x87f6e3eb, "of_find_node_by_name" },
	{ 0xe546a547, "vbus_notifier_handle" },
	{ 0xb4f94af, "muic_notifier_attach_attached_dev" },
	{ 0x6c60962c, "inc_hw_param" },
	{ 0x64853d2f, "store_usblog_notify" },
	{ 0xe903e3f8, "get_otg_notify" },
	{ 0x37330aee, "muic_core_handle_detach" },
	{ 0x333a4741, "muic_core_handle_attach" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x3397a33e, "muic_core_get_pdic_cable_state" },
	{ 0xa9941a8b, "__pm_relax" },
	{ 0x2a3901ee, "__pm_stay_awake" },
	{ 0xbb079e30, "send_uart_noti_to_modem" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0xd9a97045, "muic_sysfs_deinit" },
	{ 0x981d0efd, "muic_manager_psy_init" },
	{ 0x253af43d, "delayed_work_timer_fn" },
	{ 0x79cf5987, "init_timer_key" },
	{ 0x13c6383e, "get_afc_mode" },
	{ 0x4fd48955, "muic_sysfs_init" },
	{ 0x380d2196, "get_switch_sel" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0x28230a3f, "wakeup_source_register" },
	{ 0x574add77, "__mutex_init" },
	{ 0x762ebc39, "muic_manager_init" },
	{ 0x63fc6632, "muic_core_init" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0x29e2b80f, "is_lpcharge_pdic_param" },
	{ 0x63baf885, "gpiod_direction_output_raw" },
	{ 0x2c531865, "gpio_to_desc" },
	{ 0x9a7402a8, "gpiod_get_raw_value" },
	{ 0xfe990052, "gpio_free" },
	{ 0x47229b5c, "gpio_request" },
	{ 0x12a38747, "usleep_range" },
	{ 0x42b3dedc, "s2mu106_write_reg" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc5850110, "printk" },
	{ 0xc78f6708, "s2mu106_read_reg" },
};

MODULE_INFO(depends, "common_muic,muic_manager,vbus_notifier,usb_notify_layer,cpif,pdic_notifier_module,mfd_s2mu106");

