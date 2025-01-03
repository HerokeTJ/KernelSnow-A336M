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
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xdd64e639, "strscpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x1270d593, "vmap" },
	{ 0xea5339e4, "of_reserved_mem_lookup" },
	{ 0xbc7a4422, "_dev_warn" },
	{ 0x79746f10, "of_parse_phandle" },
	{ 0x503a285e, "__platform_driver_register" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Csamsung,debug-snapshot-debug-kinfo");
MODULE_ALIAS("of:N*T*Csamsung,debug-snapshot-debug-kinfoC*");
