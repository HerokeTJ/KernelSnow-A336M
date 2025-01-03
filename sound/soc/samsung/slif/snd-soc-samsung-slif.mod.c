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
	{ 0xc7da062f, "iomem_resource" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0xbc7a4422, "_dev_warn" },
	{ 0x9cf0dacc, "of_property_read_string" },
	{ 0x27c4b21e, "__devm_request_region" },
	{ 0x1dc7fa5f, "devm_ioremap" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0xc06cf568, "platform_get_resource_byname" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0xddaab433, "snd_soc_component_init_regmap" },
	{ 0xf643f1fa, "snd_soc_info_volsw" },
	{ 0x8af7b905, "snd_soc_put_enum_double" },
	{ 0x6a015ed1, "snd_soc_get_enum_double" },
	{ 0xffaea249, "snd_soc_info_enum_double" },
	{ 0xbdc9a589, "dma_set_coherent_mask" },
	{ 0x77561cbf, "dma_set_mask" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0x7f902e84, "devm_snd_soc_register_component" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc8d95c88, "__devm_regmap_init_mmio_clk" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x95575c33, "__tracepoint_rwmmio_write" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x36d574de, "devm_clk_get" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xbf57e89e, "queue_delayed_work_on" },
	{ 0x31dfd5cd, "__log_write_mmio" },
	{ 0x871df5fa, "__pm_runtime_idle" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xfd0a796f, "regcache_mark_dirty" },
	{ 0x817df507, "regcache_sync" },
	{ 0x409477c8, "regcache_cache_only" },
	{ 0x8637ac5d, "__pm_runtime_resume" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x815588a6, "clk_enable" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x253af43d, "delayed_work_timer_fn" },
	{ 0x79cf5987, "init_timer_key" },
	{ 0x8081ce78, "pm_runtime_enable" },
	{ 0x88e96c0d, "pm_runtime_no_callbacks" },
	{ 0x69e67b5c, "vts_pad_retention" },
	{ 0xc7a90266, "vts_set_sel_pad" },
	{ 0x59ccc240, "vts_clk_aud_set_rate" },
	{ 0x9cdb6461, "vts_chk_dmic_clk_mode" },
	{ 0x3ca3ee50, "vts_set_clk_src" },
	{ 0x800af8ff, "snd_soc_component_write" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x4a63c63e, "vts_port_cfg" },
	{ 0x841d6dda, "snd_soc_component_update_bits" },
	{ 0x4f5ffcdb, "snd_soc_component_read" },
	{ 0x3d2aa62, "regmap_read" },
	{ 0xea78f66e, "regmap_write" },
	{ 0xc5850110, "printk" },
};

MODULE_INFO(depends, "snd-soc-samsung-vts");

MODULE_ALIAS("of:N*T*Csamsung,slif");
MODULE_ALIAS("of:N*T*Csamsung,slifC*");
