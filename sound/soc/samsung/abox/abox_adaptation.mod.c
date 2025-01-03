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
	{ 0xdcb764ad, "memset" },
	{ 0x4829a47e, "memcpy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0xe2956764, "snd_soc_unregister_component" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0x7f902e84, "devm_snd_soc_register_component" },
	{ 0x8eff6041, "_dev_info" },
	{ 0x4331a66c, "abox_register_ipc_handler" },
	{ 0x68bc512b, "of_find_device_by_node" },
	{ 0x79746f10, "of_parse_phandle" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x46f84fd6, "abox_request_ipc" },
	{ 0xc5850110, "printk" },
};

MODULE_INFO(depends, "snd-soc-samsung-abox");

MODULE_ALIAS("of:N*T*Csamsung,abox-adaptation");
MODULE_ALIAS("of:N*T*Csamsung,abox-adaptationC*");
