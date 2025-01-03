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
	{ 0x5a9f1d63, "memmove" },
	{ 0x4829a47e, "memcpy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0x6f3a06f6, "phy_disconnect" },
	{ 0xceef0b7f, "phy_stop" },
	{ 0x605b2f5, "phy_print_status" },
	{ 0xa751b989, "phy_start" },
	{ 0x4698285f, "genphy_resume" },
	{ 0xe2da3166, "phy_connect" },
	{ 0x2ee5d23a, "mdiobus_unregister" },
	{ 0xe53bf6f7, "mdiobus_alloc_size" },
	{ 0x1b7da5e7, "mdiobus_free" },
	{ 0xfdff74cc, "__mdiobus_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x21b2cfa6, "phy_ethtool_set_link_ksettings" },
	{ 0xe11de541, "phy_ethtool_get_link_ksettings" },
	{ 0xd7a67954, "usbnet_get_link" },
	{ 0x7cfa9588, "phy_ethtool_nway_reset" },
	{ 0x87f68851, "phy_do_ioctl_running" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc87c29e6, "__dev_kfree_skb_any" },
	{ 0x250f3ecf, "__netdev_alloc_skb" },
	{ 0x5792f848, "strlcpy" },
	{ 0xc9eac17c, "usbnet_get_drvinfo" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0x890c62fc, "skb_put" },
	{ 0x2e381158, "skb_push" },
	{ 0xeef1b69f, "skb_copy_expand" },
	{ 0x6f594009, "kfree_skb" },
	{ 0xcdd5b8b2, "usbnet_skb_return" },
	{ 0x3e2f2f49, "usbnet_write_cmd_async" },
	{ 0x2ccb9d2d, "usbnet_write_cmd_nopm" },
	{ 0x6df8715a, "usbnet_write_cmd" },
	{ 0x61b39b82, "netdev_warn" },
	{ 0x8e53eb27, "usbnet_read_cmd_nopm" },
	{ 0x2964220d, "usbnet_read_cmd" },
	{ 0x8900b200, "kmalloc_caches" },
	{ 0x3713f090, "usb_deregister" },
	{ 0xb8a6dd7e, "usbnet_resume" },
	{ 0x75b826b, "usbnet_suspend" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0xff76f05, "usbnet_disconnect" },
	{ 0xde28ecc9, "usbnet_probe" },
	{ 0x8ef88460, "usb_register_driver" },
	{ 0x12a38747, "usleep_range" },
	{ 0x8209eb00, "eth_platform_get_mac_address" },
	{ 0x37a0cba, "kfree" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0x29e590f9, "usbnet_unlink_rx_urbs" },
	{ 0xa88a6b99, "usbnet_update_max_qlen" },
	{ 0xb1cd063c, "usbnet_link_change" },
	{ 0xd0e29d9c, "mii_ethtool_gset" },
	{ 0x81b02588, "mii_check_media" },
	{ 0x46299167, "netdev_err" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x820f4b6c, "mii_link_ok" },
	{ 0x7259d95e, "usbnet_set_link_ksettings" },
	{ 0x380a7431, "usbnet_get_link_ksettings" },
	{ 0x6c1511e8, "usbnet_nway_reset" },
	{ 0x7f387937, "usbnet_set_msglevel" },
	{ 0xf3d72f22, "usbnet_get_msglevel" },
	{ 0x8050b7b0, "generic_mii_ioctl" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x215193d5, "usbnet_get_stats64" },
	{ 0x2c5d3733, "usbnet_tx_timeout" },
	{ 0x29b080fc, "usbnet_change_mtu" },
	{ 0xc395cc79, "eth_validate_addr" },
	{ 0xe708de11, "eth_mac_addr" },
	{ 0xf39235cd, "usbnet_start_xmit" },
	{ 0xf92f93f3, "usbnet_stop" },
	{ 0xc3a67b97, "usbnet_open" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x756da890, "netdev_info" },
	{ 0xa782262b, "mii_nway_restart" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf4f15b5b, "usbnet_get_endpoints" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v077Bp2226d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p1040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p1A00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p1720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p420Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08DDp90FFd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08DDp0114d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0557p2009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p003Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p006Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6189p182Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0056d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p061Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0017d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1189p0893d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1631p6200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F1p3008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp7203d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p772Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p7720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p1780d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0789p0160d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1557p7720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C05d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C05d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p1A02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1737p0039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0930d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp5055d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp1402d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p772Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14EApAB11d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0pA877d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p7E2Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p172Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v066Bp20F9d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "C0323DD5E34D1987D1D34D0");
