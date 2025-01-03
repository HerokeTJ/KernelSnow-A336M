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
	{ 0x19ebf04e, "__tracepoint_rwmmio_post_read" },
	{ 0xa035d76e, "__tracepoint_rwmmio_read" },
	{ 0x95575c33, "__tracepoint_rwmmio_write" },
	{ 0x6980ea4b, "__log_post_read_mmio" },
	{ 0xcf1211a8, "__log_read_mmio" },
	{ 0x31dfd5cd, "__log_write_mmio" },
	{ 0xfe95a4db, "camerapp_sfr_dump_regs" },
	{ 0xc759d430, "camerapp_sfr_get_reg" },
	{ 0x149e6c55, "camerapp_sfr_set_reg" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0x6ca7c29e, "of_find_property" },
	{ 0xa8a4448c, "of_property_read_u32_index" },
	{ 0x69601c70, "of_get_next_child" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0xd653b126, "sched_clock" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xd604c3f, "devm_kfree" },
	{ 0x27747427, "iommu_unmap" },
	{ 0xedc03953, "iounmap" },
	{ 0x6b4b2933, "__ioremap" },
	{ 0x87d4bf5a, "iommu_dma_reserve_iova" },
	{ 0xb05c9257, "iommu_map" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0x8eff6041, "_dev_info" },
	{ 0xf078061e, "iommu_get_domain_for_dev" },
	{ 0xb0ee738d, "of_get_child_by_name" },
	{ 0xbc7a4422, "_dev_warn" },
	{ 0x116ae0b6, "camerapp_debug_s2d" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xc5850110, "printk" },
};

MODULE_INFO(depends, "camerapp");

MODULE_ALIAS("of:N*T*Csamsung,exynos-camerapp-votf");
MODULE_ALIAS("of:N*T*Csamsung,exynos-camerapp-votfC*");
