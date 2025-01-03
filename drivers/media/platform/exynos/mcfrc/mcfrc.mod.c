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
	{ 0xdcb764ad, "memset" },
	{ 0x4829a47e, "memcpy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0xe1506dd, "dma_buf_unmap_attachment" },
	{ 0x20d2f8c3, "dma_buf_map_attachment" },
	{ 0x8900b200, "kmalloc_caches" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0x8b9f70c7, "cpu_hwcaps" },
	{ 0x95575c33, "__tracepoint_rwmmio_write" },
	{ 0x19ebf04e, "__tracepoint_rwmmio_post_read" },
	{ 0xa035d76e, "__tracepoint_rwmmio_read" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x815588a6, "clk_enable" },
	{ 0xa7a00749, "exynos_pm_qos_update_request" },
	{ 0x1413a585, "exynos_pm_qos_request_active" },
	{ 0xdcef2da4, "misc_deregister" },
	{ 0xa7c8e259, "__pm_runtime_disable" },
	{ 0x871df5fa, "__pm_runtime_idle" },
	{ 0x5ec1d781, "__pm_runtime_set_status" },
	{ 0xac3099d, "__pm_runtime_use_autosuspend" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x36d574de, "devm_clk_get" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0x574add77, "__mutex_init" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x6b2941b2, "__arch_copy_to_user" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x37a0cba, "kfree" },
	{ 0x732ac580, "queue_work_on" },
	{ 0x78ec79c1, "dma_buf_detach" },
	{ 0x98c2b0fc, "dma_buf_put" },
	{ 0x23ce83ac, "dma_buf_attach" },
	{ 0x6a6d5fb3, "dma_buf_get" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0x4735ac17, "flush_work" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0xaf507de1, "__arch_copy_from_user" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x12a38747, "usleep_range" },
	{ 0xa6257a2f, "complete" },
	{ 0xbc7a4422, "_dev_warn" },
	{ 0xfa8a5bb0, "devm_request_threaded_irq" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x8fe79d0e, "exynos_pm_qos_remove_request" },
	{ 0xf847428f, "iommu_unregister_device_fault_handler" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xf3e79ed8, "iommu_register_device_fault_handler" },
	{ 0x8081ce78, "pm_runtime_enable" },
	{ 0x5b0864e7, "pm_runtime_set_autosuspend_delay" },
	{ 0x8eff6041, "_dev_info" },
	{ 0x74ebf29f, "exynos_pm_qos_add_request_trace" },
	{ 0x6331d19e, "misc_register" },
	{ 0xaf189c2c, "platform_get_irq" },
	{ 0x33d29b07, "devm_ioremap_resource" },
	{ 0x2e29445c, "platform_get_resource" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0xd8ed0ca2, "__pm_runtime_suspend" },
	{ 0x31dfd5cd, "__log_write_mmio" },
	{ 0x6980ea4b, "__log_post_read_mmio" },
	{ 0xcf1211a8, "__log_read_mmio" },
	{ 0xc5850110, "printk" },
	{ 0x8637ac5d, "__pm_runtime_resume" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x1000e51, "schedule" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
};

MODULE_INFO(depends, "exynos_pm_qos");

MODULE_ALIAS("of:N*T*Csamsung,exynos-mcfrc");
MODULE_ALIAS("of:N*T*Csamsung,exynos-mcfrcC*");
