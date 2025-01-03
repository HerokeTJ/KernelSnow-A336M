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
	{ 0xe8415b1d, "sysfs_remove_group" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5850110, "printk" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0x7c02aadb, "of_property_read_string_helper" },
	{ 0x37a0cba, "kfree" },
	{ 0x5f9e9913, "of_property_count_elems_of_size" },
	{ 0xaed3d17e, "class_destroy" },
	{ 0xa15d438d, "device_destroy" },
	{ 0x8eff6041, "_dev_info" },
	{ 0xaa3caa56, "sysfs_create_group" },
	{ 0x20f92f09, "device_create" },
	{ 0x13a54ed5, "__class_create" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0x503a285e, "__platform_driver_register" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Csamsung,vib-info");
MODULE_ALIAS("of:N*T*Csamsung,vib-infoC*");
