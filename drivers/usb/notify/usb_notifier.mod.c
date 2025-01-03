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
	{ 0x2d3385d3, "system_wq" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0xa1e8e8ba, "vbus_notifier_unregister" },
	{ 0x93aa88cf, "manager_notifier_unregister" },
	{ 0x91b684b2, "is_blocked" },
	{ 0xddfe4bf7, "send_otg_notify" },
	{ 0xe903e3f8, "get_otg_notify" },
	{ 0xd7c60ea8, "dwc3_gadget_speed" },
	{ 0xbf57e89e, "queue_delayed_work_on" },
	{ 0xfcd3f0fc, "regulator_put" },
	{ 0x6c8362b4, "regulator_disable" },
	{ 0xf3bd923d, "regulator_enable" },
	{ 0xdbddc967, "regulator_get" },
	{ 0x81d59531, "exynos_usbdrd_ldo_manual_control" },
	{ 0xf8beca97, "cancel_delayed_work_sync" },
	{ 0x87f6e3eb, "of_find_node_by_name" },
	{ 0x95a78381, "dwc3_exynos_vbus_event" },
	{ 0x79746f10, "of_parse_phandle" },
	{ 0x65f9af5a, "of_find_compatible_node" },
	{ 0xbe8a793f, "dwc3_exynos_id_event" },
	{ 0x68bc512b, "of_find_device_by_node" },
	{ 0x175ced1, "power_supply_get_by_name" },
	{ 0xa5939272, "power_supply_put" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0x6ca7c29e, "of_find_property" },
	{ 0x982b7d12, "of_get_named_gpio_flags" },
	{ 0x9cf0dacc, "of_property_read_string" },
	{ 0xc5850110, "printk" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0x8eff6041, "_dev_info" },
	{ 0xd9362e5f, "vbus_notifier_register" },
	{ 0x7cbcf117, "muic_notifier_register" },
	{ 0x47109311, "manager_notifier_register" },
	{ 0x253af43d, "delayed_work_timer_fn" },
	{ 0x79cf5987, "init_timer_key" },
	{ 0x993e7b0b, "set_notify_data" },
	{ 0xec71bd56, "set_otg_notify" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0x503a285e, "__platform_driver_register" },
};

MODULE_INFO(depends, "vbus_notifier,usb_typec_manager,usb_notify_layer,dwc3-exynos-usb,phy-exynos-usbdrd-super,common_muic");

MODULE_ALIAS("of:N*T*Csamsung,origin-usb-notifier");
MODULE_ALIAS("of:N*T*Csamsung,origin-usb-notifierC*");
