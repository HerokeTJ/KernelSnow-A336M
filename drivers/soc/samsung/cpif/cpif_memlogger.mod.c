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
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0xfe5d4bb2, "sys_tz" },
	{ 0xfff5afc, "time64_to_tm" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0xfeb4700a, "memlog_alloc_printf" },
	{ 0xc2e0752e, "memlog_register" },
	{ 0xc5850110, "printk" },
	{ 0xef8f1f82, "memlog_write_printf" },
};

MODULE_INFO(depends, "memlogger");

