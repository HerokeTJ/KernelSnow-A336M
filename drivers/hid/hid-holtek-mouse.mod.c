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
	{ 0x329af0a3, "usb_hid_driver" },
	{ 0x5954b3b9, "hid_unregister_driver" },
	{ 0x8eff6041, "_dev_info" },
	{ 0xcc0f3a8c, "hid_open_report" },
	{ 0x2f71a7a9, "hid_hw_start" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0xbe362106, "__hid_register_driver" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g*v000004D9p0000A067");
MODULE_ALIAS("hid:b0003g*v000004D9p0000A070");
MODULE_ALIAS("hid:b0003g*v000004D9p0000A04A");
MODULE_ALIAS("hid:b0003g*v000004D9p0000A072");
MODULE_ALIAS("hid:b0003g*v000004D9p0000A081");
MODULE_ALIAS("hid:b0003g*v000004D9p0000A0C2");
