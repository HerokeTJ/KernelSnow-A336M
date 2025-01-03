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
	{ 0x62ad2053, "cpu_bit_bitmap" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x95575c33, "__tracepoint_rwmmio_write" },
	{ 0x19ebf04e, "__tracepoint_rwmmio_post_read" },
	{ 0xa035d76e, "__tracepoint_rwmmio_read" },
	{ 0xac594e02, "__cpu_online_mask" },
	{ 0xde7ece30, "__cpu_possible_mask" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x77f802e3, "i2c_del_adapter" },
	{ 0xd8ed0ca2, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x1b015d25, "bitmap_parselist" },
	{ 0xa6257a2f, "complete" },
	{ 0xfa8a5bb0, "devm_request_threaded_irq" },
	{ 0x8637ac5d, "__pm_runtime_resume" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xac3099d, "__pm_runtime_use_autosuspend" },
	{ 0x5c39520d, "pinctrl_select_state" },
	{ 0x79a35362, "pinctrl_lookup_state" },
	{ 0xaa48f219, "devm_pinctrl_get" },
	{ 0xfbc84afe, "gpiod_set_raw_value" },
	{ 0x1a93828e, "gpiod_direction_input" },
	{ 0x63baf885, "gpiod_direction_output_raw" },
	{ 0x2c531865, "gpio_to_desc" },
	{ 0x9a7402a8, "gpiod_get_raw_value" },
	{ 0x982b7d12, "of_get_named_gpio_flags" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x31dfd5cd, "__log_write_mmio" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x6980ea4b, "__log_post_read_mmio" },
	{ 0xcf1211a8, "__log_read_mmio" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x6ca7c29e, "of_find_property" },
	{ 0x3dfeaa4, "regmap_update_bits_base" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0x6e805421, "i2c_add_numbered_adapter" },
	{ 0x5110cd07, "of_alias_get_id" },
	{ 0x2a7b4b03, "irq_set_affinity_hint" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xcc23d1e5, "irq_of_parse_and_map" },
	{ 0xbbd62b47, "devm_platform_ioremap_resource" },
	{ 0x8081ce78, "pm_runtime_enable" },
	{ 0x5b0864e7, "pm_runtime_set_autosuspend_delay" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x36d574de, "devm_clk_get" },
	{ 0x5792f848, "strlcpy" },
	{ 0x6a5c3098, "exynos_get_idle_ip_index" },
	{ 0xad0a8a5a, "of_get_property" },
	{ 0x3d2aa62, "regmap_read" },
	{ 0x8eff6041, "_dev_info" },
	{ 0x482954a5, "syscon_regmap_lookup_by_phandle" },
	{ 0xbc7a4422, "_dev_warn" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x90cd4355, "exynos_update_ip_idle_status" },
	{ 0x815588a6, "clk_enable" },
	{ 0xc5850110, "printk" },
};

MODULE_INFO(depends, "exynos-cpupm");

MODULE_ALIAS("of:N*T*Csamsung,exynos5-hsi2c");
MODULE_ALIAS("of:N*T*Csamsung,exynos5-hsi2cC*");
