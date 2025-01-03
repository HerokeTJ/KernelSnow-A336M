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
	{ 0x5954b3b9, "hid_unregister_driver" },
	{ 0x8eff6041, "_dev_info" },
	{ 0x3b938c8d, "input_event" },
	{ 0xcc0f3a8c, "hid_open_report" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0x2f71a7a9, "hid_hw_start" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0xbe362106, "__hid_register_driver" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g*v000006A3p00000621");
MODULE_ALIAS("hid:b0003g*v00000738p00001705");
MODULE_ALIAS("hid:b0003g*v000006A3p00000CCB");
MODULE_ALIAS("hid:b0003g*v000006A3p00000CD7");
MODULE_ALIAS("hid:b0003g*v000006A3p00000CCD");
MODULE_ALIAS("hid:b0003g*v000006A3p00000CFA");
MODULE_ALIAS("hid:b0003g*v00000738p00001709");
MODULE_ALIAS("hid:b0003g*v000006A3p00000CD0");
MODULE_ALIAS("hid:b0003g*v00000738p00001713");
