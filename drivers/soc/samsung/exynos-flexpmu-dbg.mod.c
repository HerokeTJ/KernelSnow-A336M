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
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0x8900b200, "kmalloc_caches" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0x95575c33, "__tracepoint_rwmmio_write" },
	{ 0x19ebf04e, "__tracepoint_rwmmio_post_read" },
	{ 0xa035d76e, "__tracepoint_rwmmio_read" },
	{ 0x5243bc7e, "debugfs_remove" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0xbb4f4766, "simple_write_to_buffer" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x98cf60b3, "strlen" },
	{ 0x9166fada, "strncpy" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x8eff6041, "_dev_info" },
	{ 0xdc33c5a9, "of_iomap" },
	{ 0x63ef7ca7, "debugfs_create_file" },
	{ 0xfeea81cb, "default_llseek" },
	{ 0x896f768, "simple_open" },
	{ 0x82b308e8, "debugfs_create_dir" },
	{ 0x6b4b2933, "__ioremap" },
	{ 0xad0a8a5a, "of_get_property" },
	{ 0xc5850110, "printk" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0x31dfd5cd, "__log_write_mmio" },
	{ 0x6980ea4b, "__log_post_read_mmio" },
	{ 0xcf1211a8, "__log_read_mmio" },
};

MODULE_INFO(depends, "");

