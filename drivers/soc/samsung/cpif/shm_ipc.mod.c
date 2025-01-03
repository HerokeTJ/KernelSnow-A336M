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
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0x9cf0dacc, "of_property_read_string" },
	{ 0x69601c70, "of_get_next_child" },
	{ 0xb0ee738d, "of_get_child_by_name" },
	{ 0xea5339e4, "of_reserved_mem_lookup" },
	{ 0x79746f10, "of_parse_phandle" },
	{ 0xf1e046cc, "panic" },
	{ 0x3cf1ad62, "dbg_snapshot_add_bl_item_info" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0x5a095c99, "__free_pages" },
	{ 0xa795dc09, "adjust_managed_page_count" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x94961283, "vunmap" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x1270d593, "vmap" },
	{ 0x7b0a3e84, "cpif_memlog_log_obj" },
	{ 0xef8f1f82, "memlog_write_printf" },
	{ 0x8950aa66, "cpif_memlog_log_enabled" },
	{ 0xc5850110, "printk" },
};

MODULE_INFO(depends, "dss,cpif_memlogger,memlogger");

MODULE_ALIAS("of:N*T*Csamsung,exynos-cp-shmem");
MODULE_ALIAS("of:N*T*Csamsung,exynos-cp-shmemC*");
