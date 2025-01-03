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
	{ 0xe7900234, "exynos_soc_info" },
	{ 0xd2728bc0, "param_ops_charp" },
	{ 0xe1164159, "secdbg_exin_get_extra_info_T" },
	{ 0x354d52c8, "secdbg_exin_get_extra_info_F" },
	{ 0xd284ed6b, "secdbg_exin_get_extra_info_M" },
	{ 0x2862e1db, "secdbg_exin_get_extra_info_C" },
	{ 0xf5f4385e, "secdbg_exin_get_extra_info_B" },
	{ 0x98cf60b3, "strlen" },
	{ 0x483e5490, "secdbg_exin_get_extra_info_A" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xec18aba0, "get_bk_item_val_as_string" },
	{ 0x9d16cb04, "id_get_product_line" },
	{ 0x966003e, "id_get_asb_ver" },
	{ 0x67dd2cf7, "secdbg_exin_set_hwid" },
	{ 0xaa3caa56, "sysfs_create_group" },
	{ 0x30bbe06f, "sec_device_create" },
	{ 0xc5850110, "printk" },
};

MODULE_INFO(depends, "exynos-chipid_v2,sec_debug_extra_info,cmupmucal,sec_class");

