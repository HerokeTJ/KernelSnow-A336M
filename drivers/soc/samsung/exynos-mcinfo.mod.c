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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x7c24b32d, "module_layout" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0x19ebf04e, "__tracepoint_rwmmio_post_read" },
	{ 0xa035d76e, "__tracepoint_rwmmio_read" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xf1e046cc, "panic" },
	{ 0xfa8a5bb0, "devm_request_threaded_irq" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0x8eff6041, "_dev_info" },
	{ 0xbc7a4422, "_dev_warn" },
	{ 0xaa3caa56, "sysfs_create_group" },
	{ 0xcc23d1e5, "irq_of_parse_and_map" },
	{ 0x6b4b2933, "__ioremap" },
	{ 0x2e29445c, "platform_get_resource" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0xc5850110, "printk" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0xde2e4fad, "devm_iounmap" },
	{ 0xe8415b1d, "sysfs_remove_group" },
	{ 0x2c04a37a, "__platform_driver_probe" },
	{ 0x6980ea4b, "__log_post_read_mmio" },
	{ 0xcf1211a8, "__log_read_mmio" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Csamsung,exynos-mcinfo");
MODULE_ALIAS("of:N*T*Csamsung,exynos-mcinfoC*");
