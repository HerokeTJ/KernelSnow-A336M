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
	{ 0x8b9e89a5, "ipv6_stub" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x3713f090, "usb_deregister" },
	{ 0xb8a6dd7e, "usbnet_resume" },
	{ 0x75b826b, "usbnet_suspend" },
	{ 0xff76f05, "usbnet_disconnect" },
	{ 0xde28ecc9, "usbnet_probe" },
	{ 0x8ef88460, "usb_register_driver" },
	{ 0xc87c29e6, "__dev_kfree_skb_any" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x46fbb4ea, "cdc_ncm_fill_tx_frame" },
	{ 0x46299167, "netdev_err" },
	{ 0xb5ab3a92, "skb_pull" },
	{ 0x250f3ecf, "__netdev_alloc_skb" },
	{ 0x76a2324c, "in6_dev_finish_destroy" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x890c62fc, "skb_put" },
	{ 0xcdd5b8b2, "usbnet_skb_return" },
	{ 0x6d31298c, "cdc_ncm_rx_verify_ndp16" },
	{ 0xcd14b214, "cdc_ncm_rx_verify_nth16" },
	{ 0x6c6b29fd, "usb_autopm_put_interface" },
	{ 0xd937b3ed, "usb_autopm_get_interface" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0x215193d5, "usbnet_get_stats64" },
	{ 0x2c5d3733, "usbnet_tx_timeout" },
	{ 0x682eab10, "cdc_ncm_change_mtu" },
	{ 0xc395cc79, "eth_validate_addr" },
	{ 0xe708de11, "eth_mac_addr" },
	{ 0xf39235cd, "usbnet_start_xmit" },
	{ 0xf92f93f3, "usbnet_stop" },
	{ 0xc3a67b97, "usbnet_open" },
	{ 0x8015af83, "usb_match_id" },
	{ 0xc5eb1739, "usb_set_interface" },
	{ 0x9d35f5b8, "cdc_ncm_unbind" },
	{ 0x85eb965a, "usb_cdc_wdm_register" },
	{ 0x5d3f3436, "cdc_ncm_bind_common" },
	{ 0x87283c38, "cdc_ncm_select_altsetting" },
};

MODULE_INFO(depends, "cdc-wdm");

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v0BDBp*d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v03F0pA31Dd*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v1BC7p1041d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v1BC7p1061d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v1BC7p1071d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v1BC7p1081d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Eip00in*");
