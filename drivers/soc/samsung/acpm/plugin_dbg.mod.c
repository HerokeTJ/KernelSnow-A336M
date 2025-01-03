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
	{ 0x34976353, "acpm_ipc_release_channel" },
	{ 0xf5f585ea, "acpm_ipc_send_data" },
	{ 0xa7e888c3, "acpm_ipc_request_channel" },
	{ 0xbf27df8c, "simple_attr_open" },
	{ 0xeb895e94, "simple_attr_release" },
	{ 0xd9bf06e9, "simple_attr_write" },
	{ 0x4a788936, "simple_attr_read" },
	{ 0xe2aa8e76, "generic_file_llseek" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x63ef7ca7, "debugfs_create_file" },
	{ 0x82b308e8, "debugfs_create_dir" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0x8eff6041, "_dev_info" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0xc5850110, "printk" },
};

MODULE_INFO(depends, "exynos_acpm");

MODULE_ALIAS("of:N*T*Csamsung,exynos-acpm-plg-dbg");
MODULE_ALIAS("of:N*T*Csamsung,exynos-acpm-plg-dbgC*");
