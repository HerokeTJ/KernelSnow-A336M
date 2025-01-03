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
	{ 0x4829a47e, "memcpy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0x19ebf04e, "__tracepoint_rwmmio_post_read" },
	{ 0xa035d76e, "__tracepoint_rwmmio_read" },
	{ 0x7ceeac9, "panic_notifier_list" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0x6980ea4b, "__log_post_read_mmio" },
	{ 0xcf1211a8, "__log_read_mmio" },
	{ 0xad727c11, "cal_pd_status" },
	{ 0x598cab6e, "exynos_pd_lookup_name" },
	{ 0xff8e54c1, "dma_alloc_attrs" },
	{ 0xbdc9a589, "dma_set_coherent_mask" },
	{ 0x77561cbf, "dma_set_mask" },
	{ 0x98cf60b3, "strlen" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3cf1ad62, "dbg_snapshot_add_bl_item_info" },
	{ 0x3199a1ef, "_dev_emerg" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
	{ 0x8eff6041, "_dev_info" },
	{ 0x9cf0dacc, "of_property_read_string" },
	{ 0x1dc7fa5f, "devm_ioremap" },
	{ 0xd604c3f, "devm_kfree" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0x69601c70, "of_get_next_child" },
	{ 0xb0ee738d, "of_get_child_by_name" },
	{ 0x503a285e, "__platform_driver_register" },
};

MODULE_INFO(depends, "cmupmucal,exynos-pd,dss");

MODULE_ALIAS("of:N*T*Cdebug-snapshot,sfrdump");
MODULE_ALIAS("of:N*T*Cdebug-snapshot,sfrdumpC*");
