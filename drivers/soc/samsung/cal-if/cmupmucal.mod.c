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
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0x95b2cbd0, "ect_minlock_get_domain" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x9cf0dacc, "of_property_read_string" },
	{ 0x6ca7c29e, "of_find_property" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0x659b3c35, "of_get_next_available_child" },
	{ 0xef4b763b, "of_device_is_compatible" },
	{ 0x499e212, "of_find_node_by_type" },
	{ 0x69601c70, "of_get_next_child" },
	{ 0xb0ee738d, "of_get_child_by_name" },
	{ 0x65f9af5a, "of_find_compatible_node" },
	{ 0xd8339549, "param_ops_int" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x33b20298, "exynos_pm_qos_update_request_nosync" },
	{ 0x74ebf29f, "exynos_pm_qos_add_request_trace" },
	{ 0xa7e888c3, "acpm_ipc_request_channel" },
	{ 0xf5f585ea, "acpm_ipc_send_data" },
	{ 0xd653b126, "sched_clock" },
	{ 0xe14a63a, "acpm_get_peri_timer" },
	{ 0xbe169a2d, "kernel_kobj" },
	{ 0xf93aae46, "__arm_smccc_smc" },
	{ 0xedc03953, "iounmap" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xaa3caa56, "sysfs_create_group" },
	{ 0x177f5d51, "kobject_create_and_add" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xfc5395ac, "adv_tracer_ipc_ramhold_ctrl" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x8dbdc6f5, "secdbg_exin_set_epd" },
	{ 0x40f5e7ca, "exynos_pd_tz_save" },
	{ 0x5517a631, "exynos_pd_tz_restore" },
	{ 0xa4033df7, "dbg_snapshot_expire_watchdog" },
	{ 0xf9a482f9, "msleep" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x931de2f3, "dbg_snapshot_pmu" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0x8b9f70c7, "cpu_hwcaps" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x2276db98, "kstrtoint" },
	{ 0x69ad2f20, "kstrtouint" },
	{ 0xbb4f4766, "simple_write_to_buffer" },
	{ 0x896f768, "simple_open" },
	{ 0x6503cb62, "single_open_size" },
	{ 0x779a18af, "kstrtoll" },
	{ 0xaf507de1, "__arch_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x85df9b6c, "strsep" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x96848186, "scnprintf" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0xd740362b, "seq_printf" },
	{ 0xa2aa781e, "seq_puts" },
	{ 0x4f731e2b, "single_open" },
	{ 0xef42eddb, "single_release" },
	{ 0xb9997d36, "seq_read" },
	{ 0xad9f2705, "seq_lseek" },
	{ 0x4bef7eba, "debugfs_create_u32" },
	{ 0x267ac629, "debugfs_create_x32" },
	{ 0x63ef7ca7, "debugfs_create_file" },
	{ 0x82b308e8, "debugfs_create_dir" },
	{ 0xe355cd86, "ect_asv_get_domain" },
	{ 0x37a0cba, "kfree" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe3aa78a, "ect_dvfs_get_domain" },
	{ 0x5034255f, "ect_gen_param_get_table" },
	{ 0x8900b200, "kmalloc_caches" },
	{ 0x95575c33, "__tracepoint_rwmmio_write" },
	{ 0x19ebf04e, "__tracepoint_rwmmio_post_read" },
	{ 0xa035d76e, "__tracepoint_rwmmio_read" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0x6447be6b, "ect_pll_get_pll" },
	{ 0xcd133dbe, "ect_get_block" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x31dfd5cd, "__log_write_mmio" },
	{ 0x6980ea4b, "__log_post_read_mmio" },
	{ 0xcf1211a8, "__log_read_mmio" },
	{ 0x6b4b2933, "__ioremap" },
	{ 0xcac72c38, "exynos_pmu_update" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xe66c07ae, "get_fvmap_base" },
	{ 0xc5850110, "printk" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xf6ceff9a, "of_address_to_resource" },
	{ 0x5d3c61b8, "ect_parse_binary_header" },
	{ 0x2cd90edd, "__cfi_slowpath" },
};

MODULE_INFO(depends, "ect_parser,exynos_pm_qos,exynos_acpm,exynos-adv-tracer,sec_debug_extra_info,exynos-pd_el3,dss,exynos-pmu-if");

MODULE_ALIAS("of:N*T*Csamsung,exynos_cal_if");
MODULE_ALIAS("of:N*T*Csamsung,exynos_cal_ifC*");
MODULE_ALIAS("of:N*T*Csamsung,exynos-acpm-dvfs");
MODULE_ALIAS("of:N*T*Csamsung,exynos-acpm-dvfsC*");
