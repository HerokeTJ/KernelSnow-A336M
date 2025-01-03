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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x7c24b32d, "module_layout" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xaed3d17e, "class_destroy" },
	{ 0x13a54ed5, "__class_create" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0xa15d438d, "device_destroy" },
	{ 0x164eb7f6, "device_remove_file" },
	{ 0xe3aa3619, "device_create_file" },
	{ 0x20f92f09, "device_create" },
	{ 0x8948c619, "kobject_uevent" },
	{ 0xc5850110, "printk" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x229a20fd, "kobject_uevent_env" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf09b5d9a, "get_zeroed_page" },
};

MODULE_INFO(depends, "");

