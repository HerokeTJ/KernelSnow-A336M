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
	{ 0x4829a47e, "memcpy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0x574add77, "__mutex_init" },
	{ 0x77b204ab, "crypto_destroy_tfm" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xbb92ee9b, "crypto_shash_digest" },
	{ 0x714c001e, "crypto_alloc_shash" },
	{ 0xe4bbc1dd, "kimage_voffset" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0xc56a41e6, "vabits_actual" },
	{ 0x20f420a, "dma_map_page_attrs" },
	{ 0x4fdece8c, "dev_driver_string" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x8900b200, "kmalloc_caches" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0xdcef2da4, "misc_deregister" },
	{ 0xf8beca97, "cancel_delayed_work_sync" },
	{ 0xf93aae46, "__arm_smccc_smc" },
	{ 0xbf57e89e, "queue_delayed_work_on" },
	{ 0xfa8a5bb0, "devm_request_threaded_irq" },
	{ 0x253af43d, "delayed_work_timer_fn" },
	{ 0x79cf5987, "init_timer_key" },
	{ 0x77561cbf, "dma_set_mask" },
	{ 0xd67517d1, "irq_get_irq_data" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0xcc23d1e5, "irq_of_parse_and_map" },
	{ 0x37a0cba, "kfree" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0x6331d19e, "misc_register" },
	{ 0xc5850110, "printk" },
};

MODULE_INFO(depends, "");

