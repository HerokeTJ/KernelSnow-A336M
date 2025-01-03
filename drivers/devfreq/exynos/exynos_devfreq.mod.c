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
	{ 0x2b7ddd11, "kthread_stop" },
	{ 0x1000e51, "schedule" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xa4304a36, "wake_up_process" },
	{ 0x18af30df, "kthread_bind" },
	{ 0xd9aa98a4, "kthread_create_on_node" },
	{ 0x79cf5987, "init_timer_key" },
	{ 0x9b2ccd01, "exynos_pm_qos_remove_notifier" },
	{ 0xf4555811, "exynos_pm_qos_add_notifier" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xf15e728e, "del_timer_sync" },
	{ 0xa83a512, "add_timer_on" },
	{ 0x273f2dc0, "devfreq_add_governor" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0xac594e02, "__cpu_online_mask" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x8900b200, "kmalloc_caches" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc56a41e6, "vabits_actual" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0x69601c70, "of_get_next_child" },
	{ 0x81c78e3f, "update_devfreq" },
	{ 0xfddffb39, "abox_get_requiring_int_freq_in_khz" },
	{ 0xdb9ed310, "abox_get_requiring_mif_freq_in_khz" },
	{ 0xc9926b68, "abox_is_on" },
	{ 0xefd0ee57, "sysfs_remove_file_ns" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0xe8415b1d, "sysfs_remove_group" },
	{ 0x871df5fa, "__pm_runtime_idle" },
	{ 0x8637ac5d, "__pm_runtime_resume" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x6f162067, "exynos_pm_qos_read_req_value" },
	{ 0x4fc8c1b0, "sysfs_create_file_ns" },
	{ 0x1413a585, "exynos_pm_qos_request_active" },
	{ 0x4383b8b3, "cal_dfs_set_rate" },
	{ 0xdded8bf2, "exynos_pd_status" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xd87a0230, "dbg_snapshot_freq" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0xf5f585ea, "acpm_ipc_send_data" },
	{ 0xa7e888c3, "acpm_ipc_request_channel" },
	{ 0x95b2cbd0, "ect_minlock_get_domain" },
	{ 0x659b3c35, "of_get_next_available_child" },
	{ 0xb0ee738d, "of_get_child_by_name" },
	{ 0xb4ca9a9a, "exynos_acpm_set_init_freq" },
	{ 0x36b4f810, "cal_dfs_get_resume_freq" },
	{ 0x1e824127, "cal_dfs_get_boot_freq" },
	{ 0xff4b0bb4, "dev_pm_opp_disable" },
	{ 0xf424df19, "cal_dfs_get_min_freq" },
	{ 0xc3424a7c, "dev_pm_opp_get_freq" },
	{ 0x177961c3, "cal_dfs_get_max_freq" },
	{ 0xca9125a9, "dev_pm_opp_add" },
	{ 0x1f45fd05, "DM_CALL" },
	{ 0x404c64dc, "policy_update_call_to_DM" },
	{ 0xfe88376a, "exynos_pm_qos_request" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x9a1dfd65, "strpbrk" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0xe3aa78a, "ect_dvfs_get_domain" },
	{ 0xcd133dbe, "ect_get_block" },
	{ 0x3ccde25c, "of_property_match_string" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x36d574de, "devm_clk_get" },
	{ 0x598cab6e, "exynos_pd_lookup_name" },
	{ 0x9cf0dacc, "of_property_read_string" },
	{ 0x37a0cba, "kfree" },
	{ 0xc6b9aa03, "unregister_exynos_dm_constraint_table" },
	{ 0xa7e19b10, "unregister_exynos_dm_freq_scaler" },
	{ 0xb254b19, "devfreq_remove_device" },
	{ 0x8fe79d0e, "exynos_pm_qos_remove_request" },
	{ 0xc42c8547, "devfreq_unregister_opp_notifier" },
	{ 0x3a5e473f, "exynos_dev_cooling_register" },
	{ 0xa7a00749, "exynos_pm_qos_update_request" },
	{ 0x8081ce78, "pm_runtime_enable" },
	{ 0xf59296d1, "exynos_pm_qos_update_request_timeout" },
	{ 0xaa3caa56, "sysfs_create_group" },
	{ 0xbc7a4422, "_dev_warn" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0xbe47859c, "devfreq_register_opp_notifier" },
	{ 0xba16fbfa, "sysbusy_register_notifier" },
	{ 0x74ebf29f, "exynos_pm_qos_add_request_trace" },
	{ 0x5b89ba37, "register_exynos_dm_freq_scaler" },
	{ 0xf38bac94, "devfreq_add_device" },
	{ 0x465746c3, "register_exynos_dm_constraint_table" },
	{ 0xd611be32, "exynos_dm_data_init" },
	{ 0x8eff6041, "_dev_info" },
	{ 0xe695dd5e, "dev_pm_opp_put" },
	{ 0x4d9ba879, "dev_pm_opp_get_voltage" },
	{ 0xd833d7d8, "devfreq_recommended_opp" },
	{ 0x574add77, "__mutex_init" },
	{ 0xe59e7d7b, "of_platform_populate" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0xb16aebb4, "cal_dfs_get_rate" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xa943917f, "exynos_bcm_get_ccnt" },
	{ 0xd653b126, "sched_clock" },
	{ 0x5a5e2158, "exynos_wow_get_data" },
	{ 0xbde47c4b, "exynos_bcm_get_data" },
	{ 0xc5850110, "printk" },
	{ 0xca4e8460, "bpf_trace_run4" },
	{ 0x707d45e8, "perf_trace_run_bpf_submit" },
	{ 0xcb8a6e1b, "perf_trace_buf_alloc" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x525d0aa3, "trace_seq_printf" },
	{ 0xb4304cd8, "trace_raw_output_prep" },
	{ 0x72b15a7c, "trace_event_ignore_this_pid" },
	{ 0x7c087dd1, "event_triggers_call" },
	{ 0x6acaad61, "trace_event_buffer_commit" },
	{ 0x90b21669, "trace_event_buffer_reserve" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0xe79bbd92, "trace_event_raw_init" },
	{ 0x9939f2b0, "trace_event_reg" },
};

MODULE_INFO(depends, "exynos_pm_qos,snd-soc-samsung-abox,cmupmucal,exynos-pd,dss,exynos_acpm,ect_parser,exynos-dm,exynos_thermal,ems,exynos-bcm,exynos-wow");

MODULE_ALIAS("platform:exynos-devfreq");
MODULE_ALIAS("of:N*T*Csamsung,exynos-devfreq");
MODULE_ALIAS("of:N*T*Csamsung,exynos-devfreqC*");
