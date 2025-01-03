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
	{ 0x8eff6041, "_dev_info" },
	{ 0xbcdd5b99, "iommu_group_set_name" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0x8d22bb58, "iommu_group_alloc" },
	{ 0x503a285e, "__platform_driver_register" },
};

MODULE_INFO(depends, "");

