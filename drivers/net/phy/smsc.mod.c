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
	{ 0x10e46d5d, "phy_drivers_unregister" },
	{ 0x2e1ca751, "clk_put" },
	{ 0x12a38747, "usleep_range" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x35bee5ef, "genphy_read_status" },
	{ 0xf1220c5b, "__genphy_config_aneg" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xb770a9bd, "clk_get" },
	{ 0x6ca7c29e, "of_find_property" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x8949766d, "dev_err_probe" },
	{ 0x5e0a0419, "mdiobus_write" },
	{ 0x36faf03a, "mdiobus_read" },
	{ 0x2842f249, "genphy_soft_reset" },
	{ 0x4698285f, "genphy_resume" },
	{ 0x1be4da9d, "genphy_suspend" },
	{ 0x4dd6e85a, "phy_drivers_register" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("mdio:0000000000000111110000001010????");
MODULE_ALIAS("mdio:0000000000000111110000001011????");
MODULE_ALIAS("mdio:0000000000000111110000001100????");
MODULE_ALIAS("mdio:0000000000000111110000001101????");
MODULE_ALIAS("mdio:0000000000000111110000001111????");
MODULE_ALIAS("mdio:0000000000000111110000010001????");
