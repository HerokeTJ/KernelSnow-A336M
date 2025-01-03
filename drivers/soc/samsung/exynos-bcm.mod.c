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
	{ 0xac594e02, "__cpu_online_mask" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xc56a41e6, "vabits_actual" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xf7daba4e, "bpf_trace_run2" },
	{ 0x707d45e8, "perf_trace_run_bpf_submit" },
	{ 0xcb8a6e1b, "perf_trace_buf_alloc" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x525d0aa3, "trace_seq_printf" },
	{ 0xb4304cd8, "trace_raw_output_prep" },
	{ 0x72b15a7c, "trace_event_ignore_this_pid" },
	{ 0x7c087dd1, "event_triggers_call" },
	{ 0x6acaad61, "trace_event_buffer_commit" },
	{ 0x90b21669, "trace_event_buffer_reserve" },
	{ 0xe79bbd92, "trace_event_raw_init" },
	{ 0x9939f2b0, "trace_event_reg" },
	{ 0xad0a8a5a, "of_get_property" },
	{ 0x5f9e9913, "of_property_count_elems_of_size" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0xa8a4448c, "of_property_read_u32_index" },
	{ 0x7c02aadb, "of_property_read_string_helper" },
	{ 0x69601c70, "of_get_next_child" },
	{ 0xa8d89dbb, "exynos_cal_pd_bcm_sync" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0x7ceeac9, "panic_notifier_list" },
	{ 0x8900b200, "kmalloc_caches" },
	{ 0x19ebf04e, "__tracepoint_rwmmio_post_read" },
	{ 0xa035d76e, "__tracepoint_rwmmio_read" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0x253af43d, "delayed_work_timer_fn" },
	{ 0x79cf5987, "init_timer_key" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xad727c11, "cal_pd_status" },
	{ 0x1270d593, "vmap" },
	{ 0x3cf1ad62, "dbg_snapshot_add_bl_item_info" },
	{ 0xf04e9638, "adv_tracer_ipc_request_channel" },
	{ 0xde7874de, "itmon_notifier_chain_register" },
	{ 0x6a5c3098, "exynos_get_idle_ip_index" },
	{ 0xaa3caa56, "sysfs_create_group" },
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
	{ 0xea5339e4, "of_reserved_mem_lookup" },
	{ 0x79746f10, "of_parse_phandle" },
	{ 0x574add77, "__mutex_init" },
	{ 0x24c78344, "adv_tracer_ipc_release_channel" },
	{ 0x598cab6e, "exynos_pd_lookup_name" },
	{ 0x69ad2f20, "kstrtouint" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0xe8415b1d, "sysfs_remove_group" },
	{ 0x2c04a37a, "__platform_driver_probe" },
	{ 0xd653b126, "sched_clock" },
	{ 0x6980ea4b, "__log_post_read_mmio" },
	{ 0xcf1211a8, "__log_read_mmio" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xbf57e89e, "queue_delayed_work_on" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xd8a758bf, "adv_tracer_ipc_send_data_polling" },
	{ 0x90cd4355, "exynos_update_ip_idle_status" },
	{ 0xda571594, "cancel_delayed_work" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xc5850110, "printk" },
};

MODULE_INFO(depends, "cmupmucal,dss,exynos-adv-tracer,exynos-itmon,exynos-cpupm,exynos-pd");

MODULE_ALIAS("platform:exynos-bcm_dbg");
