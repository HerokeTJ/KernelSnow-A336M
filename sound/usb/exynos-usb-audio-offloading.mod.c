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
	{ 0xe4bbc1dd, "kimage_voffset" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0xc56a41e6, "vabits_actual" },
	{ 0x8900b200, "kmalloc_caches" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xfd3872b5, "snd_ctl_add" },
	{ 0xada0313a, "snd_ctl_new1" },
	{ 0x64853d2f, "store_usblog_notify" },
	{ 0x8bba7107, "abox_iova_to_phys" },
	{ 0xa5f0086a, "set_usb_audio_cardnum" },
	{ 0x7f835431, "send_usb_audio_uevent" },
	{ 0x9e4d63f8, "usb_choose_configuration" },
	{ 0x46f84fd6, "abox_request_ipc" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0xd969d6f4, "cancel_work_sync" },
	{ 0x9e18b710, "abox_iommu_map" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0xc6c961cb, "usb_enable_autosuspend" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x28f9c854, "abox_iommu_unmap" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0x732ac580, "queue_work_on" },
	{ 0x4331a66c, "abox_register_ipc_handler" },
	{ 0x752bed10, "snd_vendor_set_ops" },
	{ 0x574add77, "__mutex_init" },
	{ 0x68bc512b, "of_find_device_by_node" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0x79746f10, "of_parse_phandle" },
	{ 0x8eff6041, "_dev_info" },
	{ 0xa6257a2f, "complete" },
	{ 0xc5850110, "printk" },
};

MODULE_INFO(depends, "usb_notify_layer,snd-soc-samsung-abox");

