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
	{ 0xef24b931, "deregister_common_panel" },
	{ 0xcf210122, "register_common_panel" },
	{ 0x8900b200, "kmalloc_caches" },
	{ 0xe6e0b264, "panel_log_level" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0xa484b817, "get_brightness_pac_step_by_subdev_id" },
	{ 0x5de7762c, "sec_abc_send_event" },
	{ 0xbfede55a, "inc_dpui_u32_field" },
	{ 0xa8d79fa1, "resource_copy" },
	{ 0x3241e095, "mdnie_get_maptbl_index" },
	{ 0xff07db13, "mdnie_cur_wrgb_to_byte_array" },
	{ 0xd0afced6, "mdnie_update_wrgb" },
	{ 0x78e9d131, "maptbl_index_to_pos" },
	{ 0x654cdd44, "maptbl_copy" },
	{ 0x8d4d065e, "mdnie_find_etc_maptbl" },
	{ 0xd8e4aea7, "maptbl_get_indexof_row" },
	{ 0xfe33f869, "print_data" },
	{ 0xca531afd, "maptbl_getidx" },
	{ 0xd0f76a73, "get_panel_refresh_rate" },
	{ 0x5970d486, "get_subdev_actual_brightness_index" },
	{ 0xf513d188, "panel_bl_get_acl_opr" },
	{ 0x9c4432ce, "panel_bl_get_acl_pwrsave" },
	{ 0xb1d2535d, "maptbl_index" },
	{ 0x38b804cd, "is_hbm_brightness" },
	{ 0x83c2d2f1, "disp_div64" },
	{ 0x5aaad3fa, "disp_pow" },
	{ 0x44af97c8, "disp_interpolation64" },
	{ 0xc5850110, "printk" },
};

MODULE_INFO(depends, "mcd-panel,abc");

