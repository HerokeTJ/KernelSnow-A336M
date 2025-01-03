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
	{ 0x95575c33, "__tracepoint_rwmmio_write" },
	{ 0x19ebf04e, "__tracepoint_rwmmio_post_read" },
	{ 0xa035d76e, "__tracepoint_rwmmio_read" },
	{ 0x8900b200, "kmalloc_caches" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0xc5850110, "printk" },
	{ 0x7f033cef, "pwmchip_remove" },
	{ 0x31dfd5cd, "__log_write_mmio" },
	{ 0x6980ea4b, "__log_post_read_mmio" },
	{ 0xcf1211a8, "__log_read_mmio" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x90cd4355, "exynos_update_ip_idle_status" },
	{ 0x7043d2c8, "of_prop_next_u32" },
	{ 0x6ca7c29e, "of_find_property" },
	{ 0x488eb4e2, "of_match_node" },
	{ 0x8eff6041, "_dev_info" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x2a04f5f2, "pwm_get_chip_data" },
	{ 0x37a0cba, "kfree" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xecfdfdb5, "pwm_set_chip_data" },
	{ 0xbc7a4422, "_dev_warn" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0xfa8d80c7, "pwmchip_add" },
	{ 0x36d574de, "devm_clk_get" },
	{ 0x33d29b07, "devm_ioremap_resource" },
	{ 0x2e29445c, "platform_get_resource" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0xbb009a81, "of_pwm_xlate_with_flags" },
	{ 0x6a5c3098, "exynos_get_idle_ip_index" },
	{ 0x503a285e, "__platform_driver_register" },
};

MODULE_INFO(depends, "exynos-cpupm");

MODULE_ALIAS("of:N*T*Csamsung,s3c2410-pwm");
MODULE_ALIAS("of:N*T*Csamsung,s3c2410-pwmC*");
MODULE_ALIAS("of:N*T*Csamsung,s3c6400-pwm");
MODULE_ALIAS("of:N*T*Csamsung,s3c6400-pwmC*");
MODULE_ALIAS("of:N*T*Csamsung,s5p6440-pwm");
MODULE_ALIAS("of:N*T*Csamsung,s5p6440-pwmC*");
MODULE_ALIAS("of:N*T*Csamsung,s5pc100-pwm");
MODULE_ALIAS("of:N*T*Csamsung,s5pc100-pwmC*");
MODULE_ALIAS("of:N*T*Csamsung,exynos4210-pwm");
MODULE_ALIAS("of:N*T*Csamsung,exynos4210-pwmC*");
