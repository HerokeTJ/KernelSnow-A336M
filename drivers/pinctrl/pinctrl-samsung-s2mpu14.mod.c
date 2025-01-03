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
	{ 0x4829a47e, "memcpy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0x6ca7c29e, "of_find_property" },
	{ 0xa2aa781e, "seq_puts" },
	{ 0x60fe6854, "gpiochip_get_data" },
	{ 0x55a9ebb2, "gpiochip_generic_free" },
	{ 0xb87c0c9f, "gpiochip_generic_request" },
	{ 0xd584baf6, "s2mpu14_write_reg" },
	{ 0x277ab108, "pinconf_generic_dt_node_to_map" },
	{ 0xc5850110, "printk" },
	{ 0x4eac7b81, "s2mpu14_read_reg" },
	{ 0xd740362b, "seq_printf" },
	{ 0x71d59aa9, "pinctrl_dev_get_drvdata" },
	{ 0xace211b6, "pinctrl_utils_free_map" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0x87f6e3eb, "of_find_node_by_name" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0xc4cd666f, "gpiochip_remove" },
	{ 0x42c032e6, "gpiochip_add_pin_range" },
	{ 0x64370fe3, "gpiochip_add_data_with_key" },
	{ 0xc0cb77dc, "devm_pinctrl_register" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0x8eff6041, "_dev_info" },
	{ 0x503a285e, "__platform_driver_register" },
};

MODULE_INFO(depends, "s2mpu14_mfd");

MODULE_ALIAS("of:N*T*Cs2mpu14-gpio");
MODULE_ALIAS("of:N*T*Cs2mpu14-gpioC*");
