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
	{ 0x1d797a89, "tfa98xx_write_sknt_control" },
	{ 0xb5341fe9, "tfa98xx_update_spkt_data" },
	{ 0x7a32c6cd, "tfa_get_vval_data" },
	{ 0x1d3f7e29, "tfa_run_vval" },
	{ 0x69ad2f20, "kstrtouint" },
	{ 0xca146b0a, "tfa_run_cal" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0x1224c33f, "tfa_get_cal_temp" },
	{ 0x98cf60b3, "strlen" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xeaaa1bc1, "tfa_get_cal_data" },
	{ 0xd99676ca, "tfa98xx_get_tfa_device_from_index" },
	{ 0xa15d438d, "device_destroy" },
	{ 0xaa3caa56, "sysfs_create_group" },
	{ 0x20f92f09, "device_create" },
	{ 0xaed3d17e, "class_destroy" },
	{ 0xc5850110, "printk" },
	{ 0x13a54ed5, "__class_create" },
};

MODULE_INFO(depends, "snd-soc-tfa98xx");

