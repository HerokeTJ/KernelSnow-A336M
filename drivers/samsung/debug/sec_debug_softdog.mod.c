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
	{ 0xb1307de2, "init_task" },
	{ 0x50e21daa, "secdbg_stra_show_callstack_auto" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x6a1cd340, "smp_call_function_single_async" },
	{ 0xc5850110, "printk" },
};

MODULE_INFO(depends, "sec_debug_stacktrace");

