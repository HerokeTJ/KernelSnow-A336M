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
	{ 0xdcb764ad, "memset" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x736f884a, "of_fwnode_ops" },
	{ 0xc897a79a, "xhci_data" },
	{ 0xda68dc7f, "xhci_pre_alloc" },
	{ 0x34945c88, "pci_bus_type" },
	{ 0x95575c33, "__tracepoint_rwmmio_write" },
	{ 0x19ebf04e, "__tracepoint_rwmmio_post_read" },
	{ 0xa035d76e, "__tracepoint_rwmmio_read" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0x8900b200, "kmalloc_caches" },
	{ 0x2199f456, "is_otg_only" },
	{ 0x5ec25df8, "g_hwinfo" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0xeeb3273d, "xhci_resume" },
	{ 0xb49949ca, "usb_dr_role_control" },
	{ 0x70db3415, "exynos_usbdrd_phy_vendor_set" },
	{ 0xe2c4697, "xhci_suspend" },
	{ 0x93acb5ce, "otg_is_connect" },
	{ 0x2276db98, "kstrtoint" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x5e9f7a97, "xhci_vendor_get_ops" },
	{ 0x8637ac5d, "__pm_runtime_resume" },
	{ 0xde2e4fad, "devm_iounmap" },
	{ 0x357b5405, "wakeup_source_unregister" },
	{ 0x12a38747, "usleep_range" },
	{ 0xa7c8e259, "__pm_runtime_disable" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0x3e7bc22f, "device_property_read_u32_array" },
	{ 0x70bcd326, "device_property_present" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0x5ec1d781, "__pm_runtime_set_status" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xbdc9a589, "dma_set_coherent_mask" },
	{ 0x77561cbf, "dma_set_mask" },
	{ 0x5279e353, "usb_put_hcd" },
	{ 0x9a048fef, "usb_remove_hcd" },
	{ 0xacaaadd3, "pm_runtime_forbid" },
	{ 0x6e335cc, "device_set_wakeup_enable" },
	{ 0x175eff63, "exynos_usb_audio_init" },
	{ 0xe7b94b3f, "usb_add_hcd" },
	{ 0x3a0a609e, "of_usb_host_tpl_support" },
	{ 0x8016a6c4, "devm_phy_get" },
	{ 0x4a0be389, "devm_usb_get_phy_by_phandle" },
	{ 0xc190da6c, "device_wakeup_enable" },
	{ 0x18c817ed, "devm_clk_get_optional" },
	{ 0x33d29b07, "devm_ioremap_resource" },
	{ 0x2e29445c, "platform_get_resource" },
	{ 0x93e3fb4f, "__usb_create_hcd" },
	{ 0x8081ce78, "pm_runtime_enable" },
	{ 0xaf189c2c, "platform_get_irq" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x28230a3f, "wakeup_source_register" },
	{ 0x3c627f22, "xhci_bus_resume" },
	{ 0xa9941a8b, "__pm_relax" },
	{ 0x90cd4355, "exynos_update_ip_idle_status" },
	{ 0x6a5ad642, "get_idle_ip_index" },
	{ 0x2a3901ee, "__pm_stay_awake" },
	{ 0x7664b3d3, "xhci_bus_suspend" },
	{ 0x3e27a21f, "xhci_run" },
	{ 0xbc7a4422, "_dev_warn" },
	{ 0x83e71096, "xhci_trb_virt_to_dma" },
	{ 0xf7a476b4, "xhci_check_trb_in_td_math" },
	{ 0xa2a6bae1, "xhci_ring_alloc" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0x76f28618, "xhci_gen_setup" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0xe4a9e82d, "xhci_init_driver" },
	{ 0xc6c961cb, "usb_enable_autosuspend" },
	{ 0x6994009e, "device_init_wakeup" },
	{ 0x3301cee6, "usb_hub_find_child" },
	{ 0x3432b3d, "usb_power_notify_control" },
	{ 0x31dfd5cd, "__log_write_mmio" },
	{ 0x6980ea4b, "__log_post_read_mmio" },
	{ 0xcf1211a8, "__log_read_mmio" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0x8eff6041, "_dev_info" },
	{ 0x6b4b2933, "__ioremap" },
	{ 0x9a727e20, "xhci_link_segments" },
	{ 0xeb22ab4e, "xhci_segment_free" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0x4e6e4b41, "radix_tree_delete" },
	{ 0x70ad75fb, "radix_tree_lookup" },
	{ 0x6875328a, "usb_hcd_is_primary_hcd" },
	{ 0x811dc334, "usb_unregister_notify" },
	{ 0x89bbafc6, "usb_register_notify" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xe2747216, "xhci_get_ep_ctx" },
	{ 0xa7033702, "xhci_get_slot_ctx" },
	{ 0xf412b9dd, "xhci_initialize_ring_info" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0xedc03953, "iounmap" },
	{ 0x653e0cb8, "xhci_add_endpoint" },
	{ 0x6cea113c, "xhci_address_device" },
	{ 0xc5850110, "printk" },
	{ 0x57d4050a, "xhci_get_endpoint_index" },
};

MODULE_INFO(depends, "dwc3-exynos-usb,exynos-usb-audio-offloading,phy-exynos-usbdrd-super,exynos-cpupm");

MODULE_ALIAS("acpi*:PNP0D10:*");
MODULE_ALIAS("of:N*T*Cgeneric-xhci");
MODULE_ALIAS("of:N*T*Cgeneric-xhciC*");
MODULE_ALIAS("of:N*T*Cxhci-platform");
MODULE_ALIAS("of:N*T*Cxhci-platformC*");
