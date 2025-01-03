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
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0x488eb4e2, "of_match_node" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0x81041863, "dw_mci_remove" },
	{ 0x85b05b79, "dw_mci_runtime_resume" },
	{ 0xd319d5e3, "dw_mci_runtime_suspend" },
	{ 0xed52c306, "pm_runtime_force_resume" },
	{ 0xd69360d3, "pm_runtime_force_suspend" },
	{ 0xfdef23b7, "dw_mci_probe" },
	{ 0x33d29b07, "devm_ioremap_resource" },
	{ 0x2e29445c, "platform_get_resource" },
	{ 0xaf189c2c, "platform_get_irq" },
};

MODULE_INFO(depends, "dw_mmc");

MODULE_ALIAS("of:N*T*Csnps,dw-mshc");
MODULE_ALIAS("of:N*T*Csnps,dw-mshcC*");
MODULE_ALIAS("of:N*T*Caltr,socfpga-dw-mshc");
MODULE_ALIAS("of:N*T*Caltr,socfpga-dw-mshcC*");
MODULE_ALIAS("of:N*T*Cimg,pistachio-dw-mshc");
MODULE_ALIAS("of:N*T*Cimg,pistachio-dw-mshcC*");
