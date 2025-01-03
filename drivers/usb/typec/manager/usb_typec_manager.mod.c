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
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x8900b200, "kmalloc_caches" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xeb1aab73, "usb_external_notify_unregister" },
	{ 0x7548e7b9, "muic_notifier_unregister" },
	{ 0x6459930c, "pdic_notifier_unregister" },
	{ 0xa1e8e8ba, "vbus_notifier_unregister" },
	{ 0x5de7762c, "sec_abc_send_event" },
	{ 0x175ced1, "power_supply_get_by_name" },
	{ 0xa5939272, "power_supply_put" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0xfbedee82, "pdic_rid_string" },
	{ 0x7cbcf117, "muic_notifier_register" },
	{ 0x648b3cbc, "pdic_notifier_register" },
	{ 0xd9362e5f, "vbus_notifier_register" },
	{ 0x574add77, "__mutex_init" },
	{ 0x253af43d, "delayed_work_timer_fn" },
	{ 0x79cf5987, "init_timer_key" },
	{ 0xf5a94b83, "__init_rwsem" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x29e2b80f, "is_lpcharge_pdic_param" },
	{ 0x23ab602f, "usb_external_notify_register" },
	{ 0xfab5d552, "check_factory_mode_boot" },
	{ 0x30bbe06f, "sec_device_create" },
	{ 0xdfef5d08, "get_pdic_device" },
	{ 0x732ac580, "queue_work_on" },
	{ 0x37a0cba, "kfree" },
	{ 0x8317ad7c, "blocking_notifier_call_chain" },
	{ 0x64853d2f, "store_usblog_notify" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0xfe85e84c, "pdic_event_dest_string" },
	{ 0xf105a75, "pdic_event_src_string" },
	{ 0xbf57e89e, "queue_delayed_work_on" },
	{ 0xda571594, "cancel_delayed_work" },
	{ 0x963aa2a9, "blocking_notifier_chain_unregister" },
	{ 0x754ad228, "register_hw_param_manager" },
	{ 0xe979801d, "pdic_usbstatus_string" },
	{ 0x8fc070f3, "pdic_event_id_string" },
	{ 0xbb0c86a5, "blocking_notifier_chain_register" },
	{ 0xe903e3f8, "get_otg_notify" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0xc5850110, "printk" },
};

MODULE_INFO(depends, "usb_notify_layer,common_muic,pdic_notifier_module,vbus_notifier,abc,sec_class");

