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
	{ 0x8900b200, "kmalloc_caches" },
	{ 0xd8339549, "param_ops_int" },
	{ 0x1115f928, "param_ops_uint" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0x164eb7f6, "device_remove_file" },
	{ 0xe3aa3619, "device_create_file" },
	{ 0x98cf60b3, "strlen" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x886d3ed1, "power_supply_changed" },
	{ 0xddfe4bf7, "send_otg_notify" },
	{ 0xe903e3f8, "get_otg_notify" },
	{ 0xbf57e89e, "queue_delayed_work_on" },
	{ 0x45355328, "irq_to_desc" },
	{ 0xda571594, "cancel_delayed_work" },
	{ 0xa5939272, "power_supply_put" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0xd0612c08, "s2mu106_fled_set_operation_mode" },
	{ 0x2a3901ee, "__pm_stay_awake" },
	{ 0xa9941a8b, "__pm_relax" },
	{ 0xf8beca97, "cancel_delayed_work_sync" },
	{ 0x7f689a84, "power_supply_set_property" },
	{ 0x12a38747, "usleep_range" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xf9a482f9, "msleep" },
	{ 0xbb72d6b4, "power_supply_get_property" },
	{ 0x175ced1, "power_supply_get_by_name" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0x6ca7c29e, "of_find_property" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0x9cf0dacc, "of_property_read_string" },
	{ 0x87f6e3eb, "of_find_node_by_name" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xf08621c8, "power_supply_unregister" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xb2da3a1a, "s2mu106_muic_charger_init" },
	{ 0xe62cf348, "sec_chg_set_dev_init" },
	{ 0x80b103c8, "s2mu106_update_reg" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0x2072ee9b, "request_threaded_irq" },
	{ 0x253af43d, "delayed_work_timer_fn" },
	{ 0x79cf5987, "init_timer_key" },
	{ 0x28230a3f, "wakeup_source_register" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x62e6d81c, "power_supply_register" },
	{ 0x574add77, "__mutex_init" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0xc5850110, "printk" },
	{ 0x8eff6041, "_dev_info" },
	{ 0x42b3dedc, "s2mu106_write_reg" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xc78f6708, "s2mu106_read_reg" },
	{ 0x96848186, "scnprintf" },
	{ 0xbbfcc83e, "power_supply_get_drvdata" },
};

MODULE_INFO(depends, "usb_notify_layer,leds-s2mu106,muic_s2mu106,sec-battery,mfd_s2mu106");

