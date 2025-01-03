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
	{ 0xa2ef36e7, "dev_printk" },
	{ 0xf08621c8, "power_supply_unregister" },
	{ 0xf9a482f9, "msleep" },
	{ 0xbbfcc83e, "power_supply_get_drvdata" },
	{ 0x6ca7c29e, "of_find_property" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0xe62cf348, "sec_chg_set_dev_init" },
	{ 0x62e6d81c, "power_supply_register" },
	{ 0x8eff6041, "_dev_info" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0x5de7762c, "sec_abc_send_event" },
	{ 0x8900b200, "kmalloc_caches" },
	{ 0xf699a1c2, "sb_notify_call" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xbf57e89e, "queue_delayed_work_on" },
	{ 0x86ab091d, "work_busy" },
	{ 0x175ced1, "power_supply_get_by_name" },
	{ 0x1fe56aac, "sec_vote_refresh" },
	{ 0x3a11251f, "get_sec_vote_result" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x96848186, "scnprintf" },
	{ 0x89c322d1, "sb_sysfs_get_pdata" },
	{ 0xa9941a8b, "__pm_relax" },
	{ 0x8a25ae5d, "pm_wakeup_ws_event" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0x9cf0dacc, "of_property_read_string" },
	{ 0x87f6e3eb, "of_find_node_by_name" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0x2a3901ee, "__pm_stay_awake" },
	{ 0x4ca22630, "sec_pd_detach_with_cc" },
	{ 0xa187cd28, "_sec_vote" },
	{ 0xd28cbd05, "find_vote" },
	{ 0xa5939272, "power_supply_put" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0xecd503fa, "sb_notify_register" },
	{ 0x66c03d12, "sb_sysfs_add_attrs" },
	{ 0x574add77, "__mutex_init" },
	{ 0x253af43d, "delayed_work_timer_fn" },
	{ 0x79cf5987, "init_timer_key" },
	{ 0x28230a3f, "wakeup_source_register" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xc5850110, "printk" },
};

MODULE_INFO(depends, "sec-battery,abc,sb-core,sec_pd");

MODULE_ALIAS("of:N*T*Csamsung,sec-direct-charger");
MODULE_ALIAS("of:N*T*Csamsung,sec-direct-chargerC*");
