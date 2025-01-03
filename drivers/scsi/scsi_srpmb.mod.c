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
	{ 0x8900b200, "kmalloc_caches" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0xc56a41e6, "vabits_actual" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0xbdc9a589, "dma_set_coherent_mask" },
	{ 0x77561cbf, "dma_set_mask" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0x9cb025a4, "dma_free_attrs" },
	{ 0xf93aae46, "__arm_smccc_smc" },
	{ 0xa9941a8b, "__pm_relax" },
	{ 0x2a3901ee, "__pm_stay_awake" },
	{ 0x2a2c3068, "exynos_ufs_srpmb_sdev" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x732ac580, "queue_work_on" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x2072ee9b, "request_threaded_irq" },
	{ 0xff8e54c1, "dma_alloc_attrs" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0x43c24350, "__scsi_execute" },
	{ 0x9160a1ae, "scsi_print_sense_hdr" },
	{ 0x51e77c97, "pfn_valid" },
	{ 0xc3100a76, "sdev_prefix_printk" },
	{ 0x37a0cba, "kfree" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x7681946c, "unregister_pm_notifier" },
	{ 0x4fe8ab47, "wakeup_source_remove" },
	{ 0x51e13065, "wakeup_source_add" },
	{ 0x9cc4f70a, "register_pm_notifier" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xd67517d1, "irq_get_irq_data" },
	{ 0xcc23d1e5, "irq_of_parse_and_map" },
	{ 0x8eff6041, "_dev_info" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0xbc7a4422, "_dev_warn" },
	{ 0x1f193fbc, "scsi_block_when_processing_errors" },
	{ 0xc5850110, "printk" },
};

MODULE_INFO(depends, "ufs-exynos-core");

