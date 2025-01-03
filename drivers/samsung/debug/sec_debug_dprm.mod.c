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
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0x5a921311, "strncmp" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0xd53b77f1, "secdbg_base_get_kcnst_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x3c80c06c, "kstrtoull" },
	{ 0xe0b13336, "argv_free" },
	{ 0xc5850110, "printk" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x7380dffa, "argv_split" },
};

MODULE_INFO(depends, "sec_debug_base_early");

