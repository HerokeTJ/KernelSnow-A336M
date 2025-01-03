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
	{ 0x8900b200, "kmalloc_caches" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xbbfcc83e, "power_supply_get_drvdata" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0xbf57e89e, "queue_delayed_work_on" },
	{ 0xfb489c22, "muic_pdic_notifier_attach_attached_dev" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3397a33e, "muic_core_get_pdic_cable_state" },
	{ 0xb4f94af, "muic_notifier_attach_attached_dev" },
	{ 0xf08621c8, "power_supply_unregister" },
	{ 0x62e6d81c, "power_supply_register" },
	{ 0x37a0cba, "kfree" },
	{ 0x344226cc, "get_pdic_info" },
	{ 0x253af43d, "delayed_work_timer_fn" },
	{ 0x79cf5987, "init_timer_key" },
	{ 0x47109311, "manager_notifier_register" },
	{ 0x8beab057, "muic_notifier_detach_attached_dev" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0xc5850110, "printk" },
};

MODULE_INFO(depends, "common_muic,usb_typec_manager");

