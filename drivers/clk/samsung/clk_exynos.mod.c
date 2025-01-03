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
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0x8900b200, "kmalloc_caches" },
	{ 0x95575c33, "__tracepoint_rwmmio_write" },
	{ 0x19ebf04e, "__tracepoint_rwmmio_post_read" },
	{ 0xa035d76e, "__tracepoint_rwmmio_read" },
	{ 0x6b4b2933, "__ioremap" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xb62ec837, "clk_hw_get_name" },
	{ 0x584b0b18, "clk_register" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x92295424, "clk_register_gate" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x31dfd5cd, "__log_write_mmio" },
	{ 0x6980ea4b, "__log_post_read_mmio" },
	{ 0xcf1211a8, "__log_read_mmio" },
	{ 0x554e334d, "__clk_get_hw" },
	{ 0x9b476812, "cal_dfs_set_rate_switch" },
	{ 0x4383b8b3, "cal_dfs_set_rate" },
	{ 0xb16aebb4, "cal_dfs_get_rate" },
	{ 0xc0237de8, "cal_dfs_cached_get_rate" },
	{ 0xa978e72f, "cal_clk_setrate" },
	{ 0x1f649fb1, "clk_hw_get_parent" },
	{ 0x373bb095, "cal_clk_getrate" },
	{ 0x38d59c77, "cal_clk_is_enabled" },
	{ 0xbd5c3da0, "cal_clk_enable" },
	{ 0x9f970f90, "dbg_snapshot_clk" },
	{ 0x5e1fbebe, "cal_qch_init" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x54cf30ec, "of_find_matching_node_and_match" },
	{ 0xc9822234, "clk_register_clkdev" },
	{ 0x1594f658, "clk_register_fixed_rate" },
	{ 0x50eb7fa5, "of_clk_src_onecell_get" },
	{ 0x2ceb7ac0, "of_clk_add_provider" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0xc5850110, "printk" },
	{ 0xf4e26a8a, "clk_register_fixed_factor" },
	{ 0xf1e046cc, "panic" },
	{ 0xdc33c5a9, "of_iomap" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0xcb4f77a, "cal_clk_disable" },
};

MODULE_INFO(depends, "cmupmucal,dss");

MODULE_ALIAS("of:N*T*Csamsung,s5e8825-clock");
MODULE_ALIAS("of:N*T*Csamsung,s5e8825-clockC*");
