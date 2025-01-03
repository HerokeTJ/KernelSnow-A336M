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
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x3b938c8d, "input_event" },
	{ 0x46045dd7, "kstrtou8" },
	{ 0xe3aa3619, "device_create_file" },
	{ 0xdf5b2f63, "input_unregister_device" },
	{ 0xd329e1c6, "input_free_device" },
	{ 0xff775d7a, "input_register_device" },
	{ 0x5bfaa8d0, "input_set_capability" },
	{ 0xe3db3c44, "input_allocate_device" },
	{ 0xaed3d17e, "class_destroy" },
	{ 0xa15d438d, "device_destroy" },
	{ 0x164eb7f6, "device_remove_file" },
	{ 0x20f92f09, "device_create" },
	{ 0x13a54ed5, "__class_create" },
	{ 0x9b2b597c, "sysfs_remove_link" },
	{ 0xc01c8b87, "sysfs_create_link" },
	{ 0xc5850110, "printk" },
	{ 0x8317ad7c, "blocking_notifier_call_chain" },
	{ 0x963aa2a9, "blocking_notifier_chain_unregister" },
	{ 0xbb0c86a5, "blocking_notifier_chain_register" },
};

MODULE_INFO(depends, "");

