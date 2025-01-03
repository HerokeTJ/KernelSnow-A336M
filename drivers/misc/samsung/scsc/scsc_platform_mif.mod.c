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
	{ 0x62ad2053, "cpu_bit_bitmap" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x19ebf04e, "__tracepoint_rwmmio_post_read" },
	{ 0xa035d76e, "__tracepoint_rwmmio_read" },
	{ 0x95575c33, "__tracepoint_rwmmio_write" },
	{ 0xe7900234, "exynos_soc_info" },
	{ 0x1115f928, "param_ops_uint" },
	{ 0x65671f08, "param_ops_bool" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x5f9e9913, "of_property_count_elems_of_size" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0x3dbc3f37, "freq_qos_tracer_remove_request" },
	{ 0x8fe79d0e, "exynos_pm_qos_remove_request" },
	{ 0x2eec24ef, "freq_qos_update_request" },
	{ 0xa7a00749, "exynos_pm_qos_update_request" },
	{ 0x117959e2, "__freq_qos_tracer_add_request" },
	{ 0x74ebf29f, "exynos_pm_qos_add_request_trace" },
	{ 0xefeb0f57, "cpufreq_cpu_get" },
	{ 0x3744cf36, "vmalloc_to_pfn" },
	{ 0x94961283, "vunmap" },
	{ 0xfa8a5bb0, "devm_request_threaded_irq" },
	{ 0x1270d593, "vmap" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x2269b80c, "devm_free_irq" },
	{ 0x2a7b4b03, "irq_set_affinity_hint" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xf93aae46, "__arm_smccc_smc" },
	{ 0x6980ea4b, "__log_post_read_mmio" },
	{ 0xcf1211a8, "__log_read_mmio" },
	{ 0x31dfd5cd, "__log_write_mmio" },
	{ 0xd604c3f, "devm_kfree" },
	{ 0x482954a5, "syscon_regmap_lookup_by_phandle" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x33d29b07, "devm_ioremap_resource" },
	{ 0x2e29445c, "platform_get_resource" },
	{ 0xea5339e4, "of_reserved_mem_lookup" },
	{ 0x79746f10, "of_parse_phandle" },
	{ 0xa6257a2f, "complete" },
	{ 0xc5850110, "printk" },
	{ 0xea78f66e, "regmap_write" },
	{ 0xb88dbfce, "irq_set_irqchip_state" },
	{ 0x1d222ced, "irq_get_irqchip_state" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x8900b200, "kmalloc_caches" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0x37a0cba, "kfree" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3dfeaa4, "regmap_update_bits_base" },
	{ 0x3d2aa62, "regmap_read" },
	{ 0xb99f919f, "scsc_printk_tag_dev" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xb2990777, "scsc_printk_tag" },
};

MODULE_INFO(depends, "exynos-chipid_v2,freq-qos-tracer,exynos_pm_qos,scsc_logring");

MODULE_ALIAS("of:N*T*Csamsung,scsc_wifibt");
MODULE_ALIAS("of:N*T*Csamsung,scsc_wifibtC*");
