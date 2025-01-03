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
	{ 0xe7900234, "exynos_soc_info" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0x8eff6041, "_dev_info" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0xd9d8fd16, "register_restart_handler" },
	{ 0x482954a5, "syscon_regmap_lookup_by_phandle" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xea78f66e, "regmap_write" },
	{ 0x3d2aa62, "regmap_read" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0xc5850110, "printk" },
};

MODULE_INFO(depends, "exynos-chipid_v2");

