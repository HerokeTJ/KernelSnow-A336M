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
	{ 0xdcb764ad, "memset" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xabfad8bd, "dmam_alloc_attrs" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe8415b1d, "sysfs_remove_group" },
	{ 0xc952f2fb, "dmam_free_coherent" },
	{ 0xaa3caa56, "sysfs_create_group" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x8900b200, "kmalloc_caches" },
	{ 0x85b483a3, "__wait_on_buffer" },
	{ 0xe031c7f0, "__lock_buffer" },
	{ 0x4c9af7f2, "__getblk_gfp" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0xc8dd823c, "blkdev_put" },
	{ 0xc9f6bf9f, "submit_bh" },
	{ 0xe8fa6beb, "end_buffer_read_sync" },
	{ 0x6f12928f, "__sync_dirty_buffer" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0xedd07e1a, "blkdev_get_by_path" },
	{ 0x19ebf04e, "__tracepoint_rwmmio_post_read" },
	{ 0xa035d76e, "__tracepoint_rwmmio_read" },
	{ 0x95575c33, "__tracepoint_rwmmio_write" },
	{ 0x263c3152, "bcmp" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0xbdc9a589, "dma_set_coherent_mask" },
	{ 0x77561cbf, "dma_set_mask" },
	{ 0x64cd05cd, "of_property_read_variable_u8_array" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0x8eff6041, "_dev_info" },
	{ 0xbc7a4422, "_dev_warn" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0x6980ea4b, "__log_post_read_mmio" },
	{ 0xcf1211a8, "__log_read_mmio" },
	{ 0x31dfd5cd, "__log_write_mmio" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0xf93aae46, "__arm_smccc_smc" },
	{ 0xd604c3f, "devm_kfree" },
	{ 0xf1e046cc, "panic" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc5850110, "printk" },
};

MODULE_INFO(depends, "");

