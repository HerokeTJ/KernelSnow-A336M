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
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0xac594e02, "__cpu_online_mask" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x8900b200, "kmalloc_caches" },
	{ 0xc56a41e6, "vabits_actual" },
	{ 0x6ca7c29e, "of_find_property" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0x7fd7929b, "get_thermal_instance" },
	{ 0x4e098899, "ect_ap_thermal_get_function" },
	{ 0x96b29254, "strncasecmp" },
	{ 0xfb76ae64, "gpu_dvfs_get_max_freq" },
	{ 0xb8982380, "gpu_dvfs_get_clock" },
	{ 0x970fd115, "gpu_dvfs_get_step" },
	{ 0xdd7b8355, "gpu_tmu_notifier" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x71ec748d, "gpu_dvfs_get_voltage" },
	{ 0xbdf3573b, "gpu_dvfs_get_utilization" },
	{ 0xbc05ab42, "gpu_dvfs_get_cur_clock" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0xeada5ab8, "thermal_of_cooling_device_register" },
	{ 0x7d5c137f, "thermal_zone_get_zone_by_name" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xae188232, "exynos_build_static_power_table" },
	{ 0xdb36dd4a, "bpf_trace_run3" },
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
	{ 0x5034255f, "ect_gen_param_get_table" },
	{ 0xcd133dbe, "ect_get_block" },
	{ 0x87f6e3eb, "of_find_node_by_name" },
	{ 0xc5850110, "printk" },
	{ 0x37a0cba, "kfree" },
	{ 0x9df1a3d9, "thermal_cooling_device_unregister" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0xbb0c86a5, "blocking_notifier_chain_register" },
	{ 0xe79bbd92, "trace_event_raw_init" },
	{ 0x9939f2b0, "trace_event_reg" },
};

MODULE_INFO(depends, "ect_parser,mali_kbase,exynos_thermal");

