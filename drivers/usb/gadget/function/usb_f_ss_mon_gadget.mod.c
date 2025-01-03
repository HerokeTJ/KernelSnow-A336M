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
	{ 0x4829a47e, "memcpy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0x8900b200, "kmalloc_caches" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x12df4f3, "usb_function_unregister" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4735ac17, "flush_work" },
	{ 0xf8beca97, "cancel_delayed_work_sync" },
	{ 0x20d4f2c6, "set_usb_enumeration_state" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd4616fc7, "usb_ep_queue" },
	{ 0xa5939272, "power_supply_put" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0x175ced1, "power_supply_get_by_name" },
	{ 0xddfe4bf7, "send_otg_notify" },
	{ 0xe903e3f8, "get_otg_notify" },
	{ 0x2e2b40d2, "strncat" },
	{ 0xb3f548ad, "kmemdup_nul" },
	{ 0x45728868, "set_usb_enable_state" },
	{ 0x2e09263f, "usb_copy_descriptors" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xcd4e5eab, "send_usb_err_uevent" },
	{ 0x15993252, "usb_put_function_instance" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0x98cf60b3, "strlen" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x253af43d, "delayed_work_timer_fn" },
	{ 0x79cf5987, "init_timer_key" },
	{ 0xabedbe94, "config_group_init_type_name" },
	{ 0x164eb7f6, "device_remove_file" },
	{ 0xdcef2da4, "misc_deregister" },
	{ 0xe3aa3619, "device_create_file" },
	{ 0x6331d19e, "misc_register" },
	{ 0xf3a28dd, "usb_function_register" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x732ac580, "queue_work_on" },
	{ 0xbf57e89e, "queue_delayed_work_on" },
	{ 0x5792f848, "strlcpy" },
	{ 0x64853d2f, "store_usblog_notify" },
	{ 0xc5850110, "printk" },
};

MODULE_INFO(depends, "usb_typec_manager,usb_notify_layer");

