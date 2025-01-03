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
	{ 0x8f471ada, "i2c_del_driver" },
	{ 0x7f689a84, "power_supply_set_property" },
	{ 0xd9bf06e9, "simple_attr_write" },
	{ 0x4a788936, "simple_attr_read" },
	{ 0xe2aa8e76, "generic_file_llseek" },
	{ 0xbf27df8c, "simple_attr_open" },
	{ 0xeb895e94, "simple_attr_release" },
	{ 0xdb54a67d, "debugfs_attr_write" },
	{ 0xf5d4b2b1, "debugfs_attr_read" },
	{ 0xb8888b15, "no_llseek" },
	{ 0x63ef7ca7, "debugfs_create_file" },
	{ 0x83d81adc, "debugfs_create_file_unsafe" },
	{ 0x82b308e8, "debugfs_create_dir" },
	{ 0x2c531865, "gpio_to_desc" },
	{ 0xa471896, "gpiod_to_irq" },
	{ 0xfe990052, "gpio_free" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2072ee9b, "request_threaded_irq" },
	{ 0x403f9529, "gpio_request_one" },
	{ 0xbbfcc83e, "power_supply_get_drvdata" },
	{ 0x8eff6041, "_dev_info" },
	{ 0xa9941a8b, "__pm_relax" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xbf57e89e, "queue_delayed_work_on" },
	{ 0x1529b823, "sec_pd_select_pps" },
	{ 0xf9a482f9, "msleep" },
	{ 0x65cd07f4, "sec_pd_get_apdo_max_power" },
	{ 0x2a3901ee, "__pm_stay_awake" },
	{ 0x175ced1, "power_supply_get_by_name" },
	{ 0x56b78be4, "regmap_bulk_read" },
	{ 0xea78f66e, "regmap_write" },
	{ 0x3d2aa62, "regmap_read" },
	{ 0xa5939272, "power_supply_put" },
	{ 0xda571594, "cancel_delayed_work" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0xd60bcef6, "__devm_regmap_init_i2c" },
	{ 0x6ca7c29e, "of_find_property" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0x982b7d12, "of_get_named_gpio_flags" },
	{ 0x9cf0dacc, "of_property_read_string" },
	{ 0x87f6e3eb, "of_find_node_by_name" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0xd604c3f, "devm_kfree" },
	{ 0x357b5405, "wakeup_source_unregister" },
	{ 0xf08621c8, "power_supply_unregister" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe62cf348, "sec_chg_set_dev_init" },
	{ 0xbc7a4422, "_dev_warn" },
	{ 0x62e6d81c, "power_supply_register" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0x253af43d, "delayed_work_timer_fn" },
	{ 0x79cf5987, "init_timer_key" },
	{ 0x28230a3f, "wakeup_source_register" },
	{ 0x574add77, "__mutex_init" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0xc5850110, "printk" },
	{ 0x4f72f07e, "i2c_register_driver" },
};

MODULE_INFO(depends, "sec_pd,sec-battery");


MODULE_INFO(srcversion, "E28BC325FB8DFD3C20B9B87");
