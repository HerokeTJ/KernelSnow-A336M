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
	{ 0x95575c33, "__tracepoint_rwmmio_write" },
	{ 0x31dfd5cd, "__log_write_mmio" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0x19ebf04e, "__tracepoint_rwmmio_post_read" },
	{ 0xa035d76e, "__tracepoint_rwmmio_read" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x5a921311, "strncmp" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4fc8c1b0, "sysfs_create_file_ns" },
	{ 0x98cf60b3, "strlen" },
	{ 0x9cf0dacc, "of_property_read_string" },
	{ 0x69601c70, "of_get_next_child" },
	{ 0x5cf87584, "of_device_is_available" },
	{ 0x79746f10, "of_parse_phandle" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x7c02aadb, "of_property_read_string_helper" },
	{ 0xd604c3f, "devm_kfree" },
	{ 0x36d574de, "devm_clk_get" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0xfa8a5bb0, "devm_request_threaded_irq" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0x8081ce78, "pm_runtime_enable" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xdbddc967, "regulator_get" },
	{ 0xdf8c0f37, "__devm_of_phy_provider_register" },
	{ 0x6797d82d, "devm_phy_create" },
	{ 0x6b4b2933, "__ioremap" },
	{ 0x482954a5, "syscon_regmap_lookup_by_phandle" },
	{ 0x33d29b07, "devm_ioremap_resource" },
	{ 0x2e29445c, "platform_get_resource" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xaf189c2c, "platform_get_irq" },
	{ 0x488eb4e2, "of_match_node" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0x1a93828e, "gpiod_direction_input" },
	{ 0x982b7d12, "of_get_named_gpio_flags" },
	{ 0x2c531865, "gpio_to_desc" },
	{ 0x9a7402a8, "gpiod_get_raw_value" },
	{ 0x47229b5c, "gpio_request" },
	{ 0x6980ea4b, "__log_post_read_mmio" },
	{ 0xcf1211a8, "__log_read_mmio" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x815588a6, "clk_enable" },
	{ 0x65f9af5a, "of_find_compatible_node" },
	{ 0x68bc512b, "of_find_device_by_node" },
	{ 0x3dfeaa4, "regmap_update_bits_base" },
	{ 0xc5850110, "printk" },
	{ 0x8f258f19, "regulator_set_voltage" },
	{ 0x6c8362b4, "regulator_disable" },
	{ 0xf3bd923d, "regulator_enable" },
	{ 0x8eff6041, "_dev_info" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0x2cd90edd, "__cfi_slowpath" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Csamsung,exynos-usbdrd-phy");
MODULE_ALIAS("of:N*T*Csamsung,exynos-usbdrd-phyC*");
