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
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0xfcd3f0fc, "regulator_put" },
	{ 0x3416fbd0, "sec_vibrator_unregister" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x6c8362b4, "regulator_disable" },
	{ 0xf3bd923d, "regulator_enable" },
	{ 0x2f1fa27c, "regulator_is_enabled" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0x2c531865, "gpio_to_desc" },
	{ 0x63baf885, "gpiod_direction_output_raw" },
	{ 0x982b7d12, "of_get_named_gpio_flags" },
	{ 0xdbddc967, "regulator_get" },
	{ 0x9cf0dacc, "of_property_read_string" },
	{ 0x47229b5c, "gpio_request" },
	{ 0x7b358786, "sec_vibrator_register" },
	{ 0xc5850110, "printk" },
	{ 0x503a285e, "__platform_driver_register" },
};

MODULE_INFO(depends, "sec_vibrator");

MODULE_ALIAS("of:N*T*Csamsung,dc_vibrator");
MODULE_ALIAS("of:N*T*Csamsung,dc_vibratorC*");
