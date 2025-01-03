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
	{ 0x95575c33, "__tracepoint_rwmmio_write" },
	{ 0xba497f13, "loops_per_jiffy" },
	{ 0x19ebf04e, "__tracepoint_rwmmio_post_read" },
	{ 0xa035d76e, "__tracepoint_rwmmio_read" },
	{ 0x8900b200, "kmalloc_caches" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0x2b9e3380, "samsung_dmadev_get_ops" },
	{ 0x5c39520d, "pinctrl_select_state" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x366c81f3, "spi_controller_resume" },
	{ 0x8a471d0e, "spi_controller_suspend" },
	{ 0x54f79951, "get_device" },
	{ 0x90cd4355, "exynos_update_ip_idle_status" },
	{ 0x6d874e1e, "spi_unregister_controller" },
	{ 0xbc44cef7, "put_device" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xa7c8e259, "__pm_runtime_disable" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x871df5fa, "__pm_runtime_idle" },
	{ 0x31dfd5cd, "__log_write_mmio" },
	{ 0xfa8a5bb0, "devm_request_threaded_irq" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xac3099d, "__pm_runtime_use_autosuspend" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xa6257a2f, "complete" },
	{ 0xc30b6f92, "dma_unmap_page_attrs" },
	{ 0x20f420a, "dma_map_page_attrs" },
	{ 0x4fdece8c, "dev_driver_string" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x6980ea4b, "__log_post_read_mmio" },
	{ 0xcf1211a8, "__log_read_mmio" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x704c2a56, "spi_finalize_current_message" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x2c531865, "gpio_to_desc" },
	{ 0xfbc84afe, "gpiod_set_raw_value" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x982b7d12, "of_get_named_gpio_flags" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0xb0ee738d, "of_get_child_by_name" },
	{ 0x37a0cba, "kfree" },
	{ 0xfe990052, "gpio_free" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x403f9529, "gpio_request_one" },
	{ 0x488eb4e2, "of_match_node" },
	{ 0x5b3cd8fc, "__spi_alloc_controller" },
	{ 0x3dfeaa4, "regmap_update_bits_base" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0x5a921311, "strncmp" },
	{ 0x9cf0dacc, "of_property_read_string" },
	{ 0xad0a8a5a, "of_get_property" },
	{ 0xbdc9a589, "dma_set_coherent_mask" },
	{ 0x77561cbf, "dma_set_mask" },
	{ 0xe3aa3619, "device_create_file" },
	{ 0x5b0864e7, "pm_runtime_set_autosuspend_delay" },
	{ 0x1a9bb3d9, "spi_register_controller" },
	{ 0x79a35362, "pinctrl_lookup_state" },
	{ 0xaa48f219, "devm_pinctrl_get" },
	{ 0x8081ce78, "pm_runtime_enable" },
	{ 0x36d574de, "devm_clk_get" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0x33d29b07, "devm_ioremap_resource" },
	{ 0x5110cd07, "of_alias_get_id" },
	{ 0x6a5c3098, "exynos_get_idle_ip_index" },
	{ 0xaf189c2c, "platform_get_irq" },
	{ 0x2e29445c, "platform_get_resource" },
	{ 0x3d2aa62, "regmap_read" },
	{ 0x8eff6041, "_dev_info" },
	{ 0x482954a5, "syscon_regmap_lookup_by_phandle" },
	{ 0xbc7a4422, "_dev_warn" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0xd8ed0ca2, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x8637ac5d, "__pm_runtime_resume" },
	{ 0xca8b03e4, "spi_bus_unlock" },
	{ 0xc5850110, "printk" },
	{ 0xb7e5ac0f, "spi_bus_lock" },
};

MODULE_INFO(depends, "samsung-dma,exynos-cpupm");

MODULE_ALIAS("of:N*T*Csamsung,exynos4210-spi");
MODULE_ALIAS("of:N*T*Csamsung,exynos4210-spiC*");
MODULE_ALIAS("of:N*T*Csamsung,exynos5410-spi");
MODULE_ALIAS("of:N*T*Csamsung,exynos5410-spiC*");
MODULE_ALIAS("of:N*T*Csamsung,exynos543x-spi");
MODULE_ALIAS("of:N*T*Csamsung,exynos543x-spiC*");
MODULE_ALIAS("of:N*T*Csamsung,exynos742x-spi");
MODULE_ALIAS("of:N*T*Csamsung,exynos742x-spiC*");
MODULE_ALIAS("of:N*T*Csamsung,exynos758x-spi");
MODULE_ALIAS("of:N*T*Csamsung,exynos758x-spiC*");
MODULE_ALIAS("of:N*T*Csamsung,exynos-spi");
MODULE_ALIAS("of:N*T*Csamsung,exynos-spiC*");
