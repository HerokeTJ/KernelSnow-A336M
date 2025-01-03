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
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0xe4bbc1dd, "kimage_voffset" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0xc56a41e6, "vabits_actual" },
	{ 0xa6f6226c, "kasan_flag_enabled" },
	{ 0x7ceeac9, "panic_notifier_list" },
	{ 0x19ebf04e, "__tracepoint_rwmmio_post_read" },
	{ 0xa035d76e, "__tracepoint_rwmmio_read" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0x6b4b2933, "__ioremap" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0xcfd14bde, "__alloc_pages_nodemask" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0xf93aae46, "__arm_smccc_smc" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0x3cf1ad62, "dbg_snapshot_add_bl_item_info" },
	{ 0xde7874de, "itmon_notifier_chain_register" },
	{ 0xbf330938, "exynos_seh_set_cm_debug_function" },
	{ 0xb6261484, "register_die_notifier" },
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
	{ 0x65f9af5a, "of_find_compatible_node" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0x6980ea4b, "__log_post_read_mmio" },
	{ 0xcf1211a8, "__log_read_mmio" },
	{ 0xcb0082ac, "flush_dcache_page" },
	{ 0xc5850110, "printk" },
};

MODULE_INFO(depends, "dss,exynos-itmon,exynos-seh");

MODULE_ALIAS("of:N*T*Csamsung,exynos-cm");
MODULE_ALIAS("of:N*T*Csamsung,exynos-cmC*");
