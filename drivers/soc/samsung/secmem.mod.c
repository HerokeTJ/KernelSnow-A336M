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
	{ 0xe4bbc1dd, "kimage_voffset" },
	{ 0xc56a41e6, "vabits_actual" },
	{ 0x8900b200, "kmalloc_caches" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0x8b9f70c7, "cpu_hwcaps" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0xdcef2da4, "misc_deregister" },
	{ 0xc30b6f92, "dma_unmap_page_attrs" },
	{ 0x20f420a, "dma_map_page_attrs" },
	{ 0x4fdece8c, "dev_driver_string" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xea5339e4, "of_reserved_mem_lookup" },
	{ 0x79746f10, "of_parse_phandle" },
	{ 0x77561cbf, "dma_set_mask" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0x6331d19e, "misc_register" },
	{ 0x37a0cba, "kfree" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0xf93aae46, "__arm_smccc_smc" },
	{ 0x6b2941b2, "__arch_copy_to_user" },
	{ 0xaf507de1, "__arch_copy_from_user" },
	{ 0x56470118, "__warn_printk" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0xe1506dd, "dma_buf_unmap_attachment" },
	{ 0x78ec79c1, "dma_buf_detach" },
	{ 0x20d2f8c3, "dma_buf_map_attachment" },
	{ 0x98c2b0fc, "dma_buf_put" },
	{ 0x23ce83ac, "dma_buf_attach" },
	{ 0x6a6d5fb3, "dma_buf_get" },
	{ 0xc5850110, "printk" },
};

MODULE_INFO(depends, "");

