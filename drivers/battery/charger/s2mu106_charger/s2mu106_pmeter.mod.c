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
	{ 0x8900b200, "kmalloc_caches" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0x80b103c8, "s2mu106_update_reg" },
	{ 0xbb72d6b4, "power_supply_get_property" },
	{ 0x28230a3f, "wakeup_source_register" },
	{ 0x574add77, "__mutex_init" },
	{ 0x253af43d, "delayed_work_timer_fn" },
	{ 0x79cf5987, "init_timer_key" },
	{ 0xa5939272, "power_supply_put" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xbf57e89e, "queue_delayed_work_on" },
	{ 0xa9941a8b, "__pm_relax" },
	{ 0xda571594, "cancel_delayed_work" },
	{ 0x2a3901ee, "__pm_stay_awake" },
	{ 0x7f689a84, "power_supply_set_property" },
	{ 0x175ced1, "power_supply_get_by_name" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x42b3dedc, "s2mu106_write_reg" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0x98cf60b3, "strlen" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x12a38747, "usleep_range" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0xc78f6708, "s2mu106_read_reg" },
	{ 0xbbfcc83e, "power_supply_get_drvdata" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x2072ee9b, "request_threaded_irq" },
	{ 0x62e6d81c, "power_supply_register" },
	{ 0xc5850110, "printk" },
	{ 0x503a285e, "__platform_driver_register" },
};

MODULE_INFO(depends, "mfd_s2mu106");

