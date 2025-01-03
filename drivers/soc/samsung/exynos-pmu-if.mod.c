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
	{ 0x7281ec27, "cpu_topology" },
	{ 0x95575c33, "__tracepoint_rwmmio_write" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x5f9e9913, "of_property_count_elems_of_size" },
	{ 0x8eff6041, "_dev_info" },
	{ 0x33d29b07, "devm_ioremap_resource" },
	{ 0xc06cf568, "platform_get_resource_byname" },
	{ 0xc5850110, "printk" },
	{ 0x482954a5, "syscon_regmap_lookup_by_phandle" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x31dfd5cd, "__log_write_mmio" },
	{ 0x3dfeaa4, "regmap_update_bits_base" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xea78f66e, "regmap_write" },
	{ 0x3d2aa62, "regmap_read" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Csamsung,exynos-pmu");
MODULE_ALIAS("of:N*T*Csamsung,exynos-pmuC*");
