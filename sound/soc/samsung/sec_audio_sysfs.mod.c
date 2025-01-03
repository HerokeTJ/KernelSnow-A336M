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
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0x6ca7c29e, "of_find_property" },
	{ 0x2276db98, "kstrtoint" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0x8eff6041, "_dev_info" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xaed3d17e, "class_destroy" },
	{ 0xa15d438d, "device_destroy" },
	{ 0xe8415b1d, "sysfs_remove_group" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0xaa3caa56, "sysfs_create_group" },
	{ 0x20f92f09, "device_create" },
	{ 0xc5850110, "printk" },
	{ 0x13a54ed5, "__class_create" },
	{ 0x5ed4c6ae, "_dev_err" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Csamsung,audio-sysfs");
MODULE_ALIAS("of:N*T*Csamsung,audio-sysfsC*");
