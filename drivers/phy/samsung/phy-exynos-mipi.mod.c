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
	{ 0x19ebf04e, "__tracepoint_rwmmio_post_read" },
	{ 0xa035d76e, "__tracepoint_rwmmio_read" },
	{ 0x95575c33, "__tracepoint_rwmmio_write" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0x6980ea4b, "__log_post_read_mmio" },
	{ 0xcf1211a8, "__log_read_mmio" },
	{ 0x31dfd5cd, "__log_write_mmio" },
	{ 0xedc03953, "iounmap" },
	{ 0x6b4b2933, "__ioremap" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0xc5850110, "printk" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x6c8362b4, "regulator_disable" },
	{ 0x12a38747, "usleep_range" },
	{ 0xf3bd923d, "regulator_enable" },
	{ 0x3d2aa62, "regmap_read" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3dfeaa4, "regmap_update_bits_base" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0x5f9e9913, "of_property_count_elems_of_size" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0xdf8c0f37, "__devm_of_phy_provider_register" },
	{ 0xdbddc967, "regulator_get" },
	{ 0x9cf0dacc, "of_property_read_string" },
	{ 0x6797d82d, "devm_phy_create" },
	{ 0x1dc7fa5f, "devm_ioremap" },
	{ 0xc06cf568, "platform_get_resource_byname" },
	{ 0x33d29b07, "devm_ioremap_resource" },
	{ 0x2e29445c, "platform_get_resource" },
	{ 0x8eff6041, "_dev_info" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0xbc7a4422, "_dev_warn" },
	{ 0x482954a5, "syscon_regmap_lookup_by_phandle" },
	{ 0x7576a4d9, "of_match_device" },
	{ 0x503a285e, "__platform_driver_register" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Csamsung,mipi-phy-m4s4-top");
MODULE_ALIAS("of:N*T*Csamsung,mipi-phy-m4s4-topC*");
MODULE_ALIAS("of:N*T*Csamsung,mipi-phy-m4s4-mod");
MODULE_ALIAS("of:N*T*Csamsung,mipi-phy-m4s4-modC*");
MODULE_ALIAS("of:N*T*Csamsung,mipi-phy-m4s4s4");
MODULE_ALIAS("of:N*T*Csamsung,mipi-phy-m4s4s4C*");
MODULE_ALIAS("of:N*T*Csamsung,mipi-phy-m4s0");
MODULE_ALIAS("of:N*T*Csamsung,mipi-phy-m4s0C*");
MODULE_ALIAS("of:N*T*Csamsung,mipi-phy-m2s4s4s2");
MODULE_ALIAS("of:N*T*Csamsung,mipi-phy-m2s4s4s2C*");
MODULE_ALIAS("of:N*T*Csamsung,mipi-phy-m1s2s2");
MODULE_ALIAS("of:N*T*Csamsung,mipi-phy-m1s2s2C*");
MODULE_ALIAS("of:N*T*Csamsung,mipi-phy-m0s4s4s4-mod");
MODULE_ALIAS("of:N*T*Csamsung,mipi-phy-m0s4s4s4-modC*");
MODULE_ALIAS("of:N*T*Csamsung,mipi-phy-m0s4s4s4s4s4s2");
MODULE_ALIAS("of:N*T*Csamsung,mipi-phy-m0s4s4s4s4s4s2C*");
MODULE_ALIAS("of:N*T*Csamsung,mipi-phy-m0s4s4s4s4s2");
MODULE_ALIAS("of:N*T*Csamsung,mipi-phy-m0s4s4s4s4s2C*");
MODULE_ALIAS("of:N*T*Csamsung,mipi-phy-m0s4s4s2");
MODULE_ALIAS("of:N*T*Csamsung,mipi-phy-m0s4s4s2C*");
MODULE_ALIAS("of:N*T*Csamsung,mipi-phy-m0s4s4s4s4s4s4_s22");
MODULE_ALIAS("of:N*T*Csamsung,mipi-phy-m0s4s4s4s4s4s4_s22C*");
MODULE_ALIAS("of:N*T*Csamsung,mipi-phy-m0s4s4s4s4s2s1");
MODULE_ALIAS("of:N*T*Csamsung,mipi-phy-m0s4s4s4s4s2s1C*");
