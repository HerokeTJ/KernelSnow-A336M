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
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0xd7c406eb, "iio_channel_release" },
	{ 0xe8415b1d, "sysfs_remove_group" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0xa8a4448c, "of_property_read_u32_index" },
	{ 0xad0a8a5a, "of_get_property" },
	{ 0x5792f848, "strlcpy" },
	{ 0x9cf0dacc, "of_property_read_string" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0x543de234, "sec_device_destroy" },
	{ 0x8eff6041, "_dev_info" },
	{ 0xaa3caa56, "sysfs_create_group" },
	{ 0x30bbe06f, "sec_device_create" },
	{ 0x35b59c88, "iio_channel_get" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0x4e863092, "iio_read_channel_processed" },
};

MODULE_INFO(depends, "sec_class");

MODULE_ALIAS("of:N*T*Csamsung,sec-thermistor");
MODULE_ALIAS("of:N*T*Csamsung,sec-thermistorC*");
