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
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x8900b200, "kmalloc_caches" },
	{ 0x1115f928, "param_ops_uint" },
	{ 0x5954b3b9, "hid_unregister_driver" },
	{ 0xc5850110, "printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x837ac1f4, "input_set_abs_params" },
	{ 0x3b938c8d, "input_event" },
	{ 0xdae460c7, "hid_hw_stop" },
	{ 0xe8415b1d, "sysfs_remove_group" },
	{ 0x3c80c06c, "kstrtoull" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8eff6041, "_dev_info" },
	{ 0xa1b06bb7, "usb_control_msg" },
	{ 0x62d87780, "__hid_request" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0xcc0f3a8c, "hid_open_report" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xaa3caa56, "sysfs_create_group" },
	{ 0x2f71a7a9, "hid_hw_start" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0xbe362106, "__hid_register_driver" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g*v00001B96p00000001");
MODULE_ALIAS("hid:b0003g*v00001B96p00000003");
MODULE_ALIAS("hid:b0003g*v00001B96p00000004");
MODULE_ALIAS("hid:b0003g*v00001B96p00000005");
MODULE_ALIAS("hid:b0003g*v00001B96p00000006");
MODULE_ALIAS("hid:b0003g*v00001B96p00000007");
MODULE_ALIAS("hid:b0003g*v00001B96p00000008");
MODULE_ALIAS("hid:b0003g*v00001B96p00000009");
MODULE_ALIAS("hid:b0003g*v00001B96p0000000A");
MODULE_ALIAS("hid:b0003g*v00001B96p0000000B");
MODULE_ALIAS("hid:b0003g*v00001B96p0000000C");
MODULE_ALIAS("hid:b0003g*v00001B96p0000000D");
MODULE_ALIAS("hid:b0003g*v00001B96p0000000E");
MODULE_ALIAS("hid:b0003g*v00001B96p0000000F");
MODULE_ALIAS("hid:b0003g*v00001B96p00000010");
MODULE_ALIAS("hid:b0003g*v00001B96p00000011");
MODULE_ALIAS("hid:b0003g*v00001B96p00000012");
MODULE_ALIAS("hid:b0003g*v00001B96p00000013");
MODULE_ALIAS("hid:b0003g*v00001B96p00000014");
