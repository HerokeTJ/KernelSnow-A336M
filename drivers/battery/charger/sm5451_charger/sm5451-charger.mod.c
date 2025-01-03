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
	{ 0x8900b200, "kmalloc_caches" },
	{ 0xf8beca97, "cancel_delayed_work_sync" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xbf57e89e, "queue_delayed_work_on" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0xda571594, "cancel_delayed_work" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x37a0cba, "kfree" },
	{ 0x253af43d, "delayed_work_timer_fn" },
	{ 0x79cf5987, "init_timer_key" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x8f471ada, "i2c_del_driver" },
	{ 0xbf27df8c, "simple_attr_open" },
	{ 0xeb895e94, "simple_attr_release" },
	{ 0xd9bf06e9, "simple_attr_write" },
	{ 0x4a788936, "simple_attr_read" },
	{ 0xe2aa8e76, "generic_file_llseek" },
	{ 0x63ef7ca7, "debugfs_create_file" },
	{ 0x267ac629, "debugfs_create_x32" },
	{ 0x82b308e8, "debugfs_create_dir" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x96848186, "scnprintf" },
	{ 0x164eb7f6, "device_remove_file" },
	{ 0xe3aa3619, "device_create_file" },
	{ 0x1a93828e, "gpiod_direction_input" },
	{ 0x2c531865, "gpio_to_desc" },
	{ 0xa471896, "gpiod_to_irq" },
	{ 0x2072ee9b, "request_threaded_irq" },
	{ 0xfe990052, "gpio_free" },
	{ 0x47229b5c, "gpio_request" },
	{ 0xa9941a8b, "__pm_relax" },
	{ 0x2a3901ee, "__pm_stay_awake" },
	{ 0xbbfcc83e, "power_supply_get_drvdata" },
	{ 0x65cd07f4, "sec_pd_get_apdo_max_power" },
	{ 0x1529b823, "sec_pd_select_pps" },
	{ 0x175ced1, "power_supply_get_by_name" },
	{ 0xa5939272, "power_supply_put" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0x98cf60b3, "strlen" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x12a38747, "usleep_range" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0xae87eb36, "i2c_smbus_read_byte_data" },
	{ 0x610b7c49, "i2c_smbus_write_byte_data" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0x982b7d12, "of_get_named_gpio_flags" },
	{ 0x9cf0dacc, "of_property_read_string" },
	{ 0x87f6e3eb, "of_find_node_by_name" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0x357b5405, "wakeup_source_unregister" },
	{ 0xf08621c8, "power_supply_unregister" },
	{ 0xbc7a4422, "_dev_warn" },
	{ 0xe62cf348, "sec_chg_set_dev_init" },
	{ 0x62e6d81c, "power_supply_register" },
	{ 0x28230a3f, "wakeup_source_register" },
	{ 0x574add77, "__mutex_init" },
	{ 0x7576a4d9, "of_match_device" },
	{ 0x8eff6041, "_dev_info" },
	{ 0x4f72f07e, "i2c_register_driver" },
	{ 0xc5850110, "printk" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x5de7762c, "sec_abc_send_event" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0x5b8aa93e, "i2c_smbus_read_i2c_block_data" },
};

MODULE_INFO(depends, "sec_pd,sec-battery,abc");

MODULE_ALIAS("i2c:sm5451-charger");
MODULE_ALIAS("i2c:sm5451-charger-sub");
MODULE_ALIAS("of:N*T*Csiliconmitus,sm5451");
MODULE_ALIAS("of:N*T*Csiliconmitus,sm5451C*");
MODULE_ALIAS("of:N*T*Csiliconmitus,sm5451-sub");
MODULE_ALIAS("of:N*T*Csiliconmitus,sm5451-subC*");

MODULE_INFO(srcversion, "159E83AE37A0FA2F79EF0C5");
