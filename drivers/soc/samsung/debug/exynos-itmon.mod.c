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
	{ 0xac594e02, "__cpu_online_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x8900b200, "kmalloc_caches" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0x7ceeac9, "panic_notifier_list" },
	{ 0x19ebf04e, "__tracepoint_rwmmio_post_read" },
	{ 0xa035d76e, "__tracepoint_rwmmio_read" },
	{ 0x95575c33, "__tracepoint_rwmmio_write" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0x96848186, "scnprintf" },
	{ 0x3c80c06c, "kstrtoull" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xd653b126, "sched_clock" },
	{ 0x71d1c02c, "dbg_snapshot_do_dpm_policy" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x182be492, "dbg_snapshot_set_str_offset" },
	{ 0xe0b3fa61, "secdbg_exin_set_busmon" },
	{ 0xd3752c27, "atomic_notifier_call_chain" },
	{ 0xbc7a4422, "_dev_warn" },
	{ 0x1af267f8, "int_pow" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xfa8a5bb0, "devm_request_threaded_irq" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0xf474c21c, "bitmap_print_to_pagebuf" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x2a7b4b03, "irq_set_affinity_hint" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xf8d6e727, "adv_tracer_ipc_send_data" },
	{ 0xf04e9638, "adv_tracer_ipc_request_channel" },
	{ 0xc5850110, "printk" },
	{ 0x9cf0dacc, "of_property_read_string" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0x6ca7c29e, "of_find_property" },
	{ 0xb0ee738d, "of_get_child_by_name" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x1270d593, "vmap" },
	{ 0xea5339e4, "of_reserved_mem_lookup" },
	{ 0x79746f10, "of_parse_phandle" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xd026d214, "sysfs_create_groups" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xa8a4448c, "of_property_read_u32_index" },
	{ 0xcc23d1e5, "irq_of_parse_and_map" },
	{ 0x1dc7fa5f, "devm_ioremap" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0x8eff6041, "_dev_info" },
	{ 0x6980ea4b, "__log_post_read_mmio" },
	{ 0xcf1211a8, "__log_read_mmio" },
	{ 0x31dfd5cd, "__log_write_mmio" },
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
	{ 0x98cf60b3, "strlen" },
	{ 0x5a921311, "strncmp" },
	{ 0x5ed4c6ae, "_dev_err" },
};

MODULE_INFO(depends, "dss,sec_debug_extra_info,exynos-adv-tracer");

MODULE_ALIAS("of:N*T*Csamsung,exynos-itmon");
MODULE_ALIAS("of:N*T*Csamsung,exynos-itmonC*");
