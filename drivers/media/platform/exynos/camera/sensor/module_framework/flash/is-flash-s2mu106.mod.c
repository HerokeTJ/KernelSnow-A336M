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
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0x5f9e9913, "of_property_count_elems_of_size" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x6a0a6a61, "v4l2_subdev_init" },
	{ 0x37a0cba, "kfree" },
	{ 0xad0a8a5a, "of_get_property" },
	{ 0x929b17, "is_get_is_core" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0x275a031a, "s2mu106_fled_set_curr" },
	{ 0xb2d9eb83, "s2mu106_fled_set_mode_ctrl" },
	{ 0x85765004, "is_get_debug_sensor" },
	{ 0x42a0672e, "muic_afc_get_voltage" },
	{ 0xef8f1f82, "memlog_write_printf" },
	{ 0xde04b58d, "is_debug_get" },
	{ 0xc5850110, "printk" },
};

MODULE_INFO(depends, "fimc-is,leds-s2mu106,common_muic,memlogger");

MODULE_ALIAS("of:N*T*Csamsung,sensor-flash-s2mu106");
MODULE_ALIAS("of:N*T*Csamsung,sensor-flash-s2mu106C*");
