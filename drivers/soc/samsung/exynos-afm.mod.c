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
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x95575c33, "__tracepoint_rwmmio_write" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x19ebf04e, "__tracepoint_rwmmio_post_read" },
	{ 0xa035d76e, "__tracepoint_rwmmio_read" },
	{ 0xac594e02, "__cpu_online_mask" },
	{ 0xde7ece30, "__cpu_possible_mask" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0x8900b200, "kmalloc_caches" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0x57ad17e9, "__cpuhp_setup_state" },
	{ 0x732ac580, "queue_work_on" },
	{ 0xfa8a5bb0, "devm_request_threaded_irq" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb1ddf995, "jiffies_64_to_clock_t" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xbf57e89e, "queue_delayed_work_on" },
	{ 0x31dfd5cd, "__log_write_mmio" },
	{ 0x2eec24ef, "freq_qos_update_request" },
	{ 0x1d7b6367, "dbg_snapshot_printk" },
	{ 0xf8beca97, "cancel_delayed_work_sync" },
	{ 0x12a38747, "usleep_range" },
	{ 0x6980ea4b, "__log_post_read_mmio" },
	{ 0xcf1211a8, "__log_read_mmio" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0xe96cfa4b, "sub_pmic_update_reg" },
	{ 0x4b7baddf, "main_pmic_update_reg" },
	{ 0x1b015d25, "bitmap_parselist" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0x9cf0dacc, "of_property_read_string" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x7557e528, "cpufreq_cpu_put" },
	{ 0x2a7b4b03, "irq_set_affinity_hint" },
	{ 0xcc23d1e5, "irq_of_parse_and_map" },
	{ 0x117959e2, "__freq_qos_tracer_add_request" },
	{ 0xefeb0f57, "cpufreq_cpu_get" },
	{ 0xef1d7977, "kobject_init_and_add" },
	{ 0x253af43d, "delayed_work_timer_fn" },
	{ 0x79cf5987, "init_timer_key" },
	{ 0x8efd59ac, "smp_call_function_any" },
	{ 0x6b4b2933, "__ioremap" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0x6ca7c29e, "of_find_property" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0x1605159c, "sub_pmic_get_i2c" },
	{ 0x88631627, "main_pmic_get_i2c" },
	{ 0x37a0cba, "kfree" },
	{ 0x8eff6041, "_dev_info" },
	{ 0x69601c70, "of_get_next_child" },
	{ 0xc5850110, "printk" },
	{ 0x503a285e, "__platform_driver_register" },
};

MODULE_INFO(depends, "dss,s2mpu14_regulator,s2mpu13_regulator,freq-qos-tracer");

MODULE_ALIAS("of:N*T*Csamsung,exynos-afm");
MODULE_ALIAS("of:N*T*Csamsung,exynos-afmC*");
