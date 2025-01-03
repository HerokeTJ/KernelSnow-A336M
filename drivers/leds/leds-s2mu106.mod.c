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
	{ 0x973d761, "camera_class" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0x69ad2f20, "kstrtouint" },
	{ 0xe3aa3619, "device_create_file" },
	{ 0x20f92f09, "device_create" },
	{ 0x175ced1, "power_supply_get_by_name" },
	{ 0xfe990052, "gpio_free" },
	{ 0x403f9529, "gpio_request_one" },
	{ 0x78e191fd, "devm_led_classdev_register_ext" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xe914e41e, "strcpy" },
	{ 0x98cf60b3, "strlen" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0x982b7d12, "of_get_named_gpio_flags" },
	{ 0xa8a4448c, "of_property_read_u32_index" },
	{ 0x69601c70, "of_get_next_child" },
	{ 0x87f6e3eb, "of_find_node_by_name" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0x574add77, "__mutex_init" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0xc78f6708, "s2mu106_read_reg" },
	{ 0x80b103c8, "s2mu106_update_reg" },
	{ 0xc5850110, "printk" },
};

MODULE_INFO(depends, "fimc-is,mfd_s2mu106");

