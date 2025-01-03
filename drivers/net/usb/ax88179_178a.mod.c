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
	{ 0x15ba50a6, "jiffies" },
	{ 0x3713f090, "usb_deregister" },
	{ 0xb8a6dd7e, "usbnet_resume" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x75b826b, "usbnet_suspend" },
	{ 0xff76f05, "usbnet_disconnect" },
	{ 0xde28ecc9, "usbnet_probe" },
	{ 0x8ef88460, "usb_register_driver" },
	{ 0xc87c29e6, "__dev_kfree_skb_any" },
	{ 0x2e381158, "skb_push" },
	{ 0xe83d4f5b, "pskb_expand_head" },
	{ 0xcdd5b8b2, "usbnet_skb_return" },
	{ 0x3801bb9b, "skb_clone" },
	{ 0xb5ab3a92, "skb_pull" },
	{ 0x30d4bf39, "skb_trim" },
	{ 0x7f2a14f, "netif_carrier_on" },
	{ 0x4dd2466b, "mii_ethtool_set_link_ksettings" },
	{ 0x51423689, "mii_ethtool_get_link_ksettings" },
	{ 0xd0e29d9c, "mii_ethtool_gset" },
	{ 0x46299167, "netdev_err" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x86548aab, "ethtool_op_get_ts_info" },
	{ 0xa030bbd1, "ethtool_op_get_link" },
	{ 0x6c1511e8, "usbnet_nway_reset" },
	{ 0x7f387937, "usbnet_set_msglevel" },
	{ 0xf3d72f22, "usbnet_get_msglevel" },
	{ 0xa88a6b99, "usbnet_update_max_qlen" },
	{ 0x8050b7b0, "generic_mii_ioctl" },
	{ 0x3e2f2f49, "usbnet_write_cmd_async" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x215193d5, "usbnet_get_stats64" },
	{ 0x2c5d3733, "usbnet_tx_timeout" },
	{ 0xc395cc79, "eth_validate_addr" },
	{ 0xf39235cd, "usbnet_start_xmit" },
	{ 0xf92f93f3, "usbnet_stop" },
	{ 0xc3a67b97, "usbnet_open" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x8e53eb27, "usbnet_read_cmd_nopm" },
	{ 0x2964220d, "usbnet_read_cmd" },
	{ 0x756da890, "netdev_info" },
	{ 0x8209eb00, "eth_platform_get_mac_address" },
	{ 0x61b39b82, "netdev_warn" },
	{ 0x2ccb9d2d, "usbnet_write_cmd_nopm" },
	{ 0x6df8715a, "usbnet_write_cmd" },
	{ 0xb1cd063c, "usbnet_link_change" },
	{ 0xa782262b, "mii_nway_restart" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf4f15b5b, "usbnet_get_endpoints" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0B95p1790d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p178Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p3610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p4A00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0072d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E8pA100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp304Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp0128d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0930p0A13d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0711p0179d*dc*dsc*dp*ic*isc*ip*in*");
