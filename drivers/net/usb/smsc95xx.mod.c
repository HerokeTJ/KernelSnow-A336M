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
	{ 0x15ba50a6, "jiffies" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x8900b200, "kmalloc_caches" },
	{ 0x65671f08, "param_ops_bool" },
	{ 0x3713f090, "usb_deregister" },
	{ 0x29163f18, "phy_init_hw" },
	{ 0xbd6841d4, "crc16" },
	{ 0xb8a6dd7e, "usbnet_resume" },
	{ 0x75b826b, "usbnet_suspend" },
	{ 0xff76f05, "usbnet_disconnect" },
	{ 0xde28ecc9, "usbnet_probe" },
	{ 0x8ef88460, "usb_register_driver" },
	{ 0xc87c29e6, "__dev_kfree_skb_any" },
	{ 0xe83d4f5b, "pskb_expand_head" },
	{ 0x2e381158, "skb_push" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xcdd5b8b2, "usbnet_skb_return" },
	{ 0x3801bb9b, "skb_clone" },
	{ 0x30d4bf39, "skb_trim" },
	{ 0xb5ab3a92, "skb_pull" },
	{ 0x6c6b29fd, "usb_autopm_put_interface" },
	{ 0xa53054ba, "usb_autopm_get_interface_no_resume" },
	{ 0x756da890, "netdev_info" },
	{ 0xa751b989, "phy_start" },
	{ 0xceef0b7f, "phy_stop" },
	{ 0xf9a482f9, "msleep" },
	{ 0x6f3a06f6, "phy_disconnect" },
	{ 0xa0211602, "phy_get_pause" },
	{ 0x983cd249, "usbnet_defer_kevent" },
	{ 0x605b2f5, "phy_print_status" },
	{ 0x35bee5ef, "genphy_read_status" },
	{ 0x6e335cc, "device_set_wakeup_enable" },
	{ 0x21b2cfa6, "phy_ethtool_set_link_ksettings" },
	{ 0xe11de541, "phy_ethtool_get_link_ksettings" },
	{ 0x86548aab, "ethtool_op_get_ts_info" },
	{ 0x7cfa9588, "phy_ethtool_nway_reset" },
	{ 0x7f387937, "usbnet_set_msglevel" },
	{ 0xf3d72f22, "usbnet_get_msglevel" },
	{ 0xc9eac17c, "usbnet_get_drvinfo" },
	{ 0x8a0f5c2d, "phy_mii_ioctl" },
	{ 0x3e2f2f49, "usbnet_write_cmd_async" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x215193d5, "usbnet_get_stats64" },
	{ 0x2c5d3733, "usbnet_tx_timeout" },
	{ 0x29b080fc, "usbnet_change_mtu" },
	{ 0xc395cc79, "eth_validate_addr" },
	{ 0xe708de11, "eth_mac_addr" },
	{ 0xf39235cd, "usbnet_start_xmit" },
	{ 0xf92f93f3, "usbnet_stop" },
	{ 0xc3a67b97, "usbnet_open" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0x8e53eb27, "usbnet_read_cmd_nopm" },
	{ 0x2964220d, "usbnet_read_cmd" },
	{ 0xe53bf6f7, "mdiobus_alloc_size" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0x2ccb9d2d, "usbnet_write_cmd_nopm" },
	{ 0x6df8715a, "usbnet_write_cmd" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x8209eb00, "eth_platform_get_mac_address" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x1b7da5e7, "mdiobus_free" },
	{ 0x2ee5d23a, "mdiobus_unregister" },
	{ 0xfdcedb33, "phy_attached_info" },
	{ 0xff9d0908, "phy_connect_direct" },
	{ 0x407f65d9, "phy_find_first" },
	{ 0x46299167, "netdev_err" },
	{ 0xfdff74cc, "__mdiobus_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x61b39b82, "netdev_warn" },
	{ 0xf4f15b5b, "usbnet_get_endpoints" },
	{ 0xc5850110, "printk" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0424p9500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9505d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9E00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9E01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424pEC00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9900d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9901d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9902d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9903d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9904d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9905d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9906d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9907d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9908d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9909d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9530d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9730d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9E08d*dc*dsc*dp*ic*isc*ip*in*");
