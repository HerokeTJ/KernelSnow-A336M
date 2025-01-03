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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x7c24b32d, "module_layout" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x356461c8, "rtc_time64_to_tm" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0xd653b126, "sched_clock" },
	{ 0xc5850110, "printk" },
	{ 0x1b788301, "secdbg_wdd_register_ping_notifier" },
	{ 0xfb42e41f, "secdbg_base_get_wdd_info" },
};

MODULE_INFO(depends, "s3c2410_wdt,sec_debug_base_early");

