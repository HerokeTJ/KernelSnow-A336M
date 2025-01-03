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
	{ 0x9688de8b, "memstart_addr" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0xc7da062f, "iomem_resource" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1270d593, "vmap" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xbc7a4422, "_dev_warn" },
	{ 0x9cf0dacc, "of_property_read_string" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0x6ca7c29e, "of_find_property" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xedc03953, "iounmap" },
	{ 0x6b4b2933, "__ioremap" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x36d574de, "devm_clk_get" },
	{ 0x27c4b21e, "__devm_request_region" },
	{ 0x1dc7fa5f, "devm_ioremap" },
	{ 0xc06cf568, "platform_get_resource_byname" },
	{ 0x95575c33, "__tracepoint_rwmmio_write" },
	{ 0x19ebf04e, "__tracepoint_rwmmio_post_read" },
	{ 0xa035d76e, "__tracepoint_rwmmio_read" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0xfa8a5bb0, "devm_request_threaded_irq" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0xaf189c2c, "platform_get_irq" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x31dfd5cd, "__log_write_mmio" },
	{ 0x6980ea4b, "__log_post_read_mmio" },
	{ 0xcf1211a8, "__log_read_mmio" },
	{ 0xf93aae46, "__arm_smccc_smc" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Csamsung,abox-gic");
MODULE_ALIAS("of:N*T*Csamsung,abox-gicC*");
