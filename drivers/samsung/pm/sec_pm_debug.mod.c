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
	{ 0x2d3385d3, "system_wq" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0x3a8edb31, "pm_get_active_wakeup_sources" },
	{ 0x253af43d, "delayed_work_timer_fn" },
	{ 0xbf57e89e, "queue_delayed_work_on" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x365acda7, "set_normalized_timespec64" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xc5850110, "printk" },
	{ 0x356461c8, "rtc_time64_to_tm" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0xf8beca97, "cancel_delayed_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0x543de234, "sec_device_destroy" },
	{ 0x8aaa54b8, "main_pmic_init_debug_sysfs" },
	{ 0xd026d214, "sysfs_create_groups" },
	{ 0x30bbe06f, "sec_device_create" },
	{ 0x9cc4f70a, "register_pm_notifier" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0x503a285e, "__platform_driver_register" },
};

MODULE_INFO(depends, "sec_class,s2mpu13_regulator");

MODULE_ALIAS("of:N*T*Csamsung,sec-pm-debug");
MODULE_ALIAS("of:N*T*Csamsung,sec-pm-debugC*");
