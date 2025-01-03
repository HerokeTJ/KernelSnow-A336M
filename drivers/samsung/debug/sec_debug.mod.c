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
	{ 0x82ae67dd, "__tracepoint_android_rvh_dequeue_task_idle" },
	{ 0x650a8c4, "__tracepoint_android_rvh_schedule_bug" },
	{ 0x7fbbd0bb, "android_rvh_probe_register" },
	{ 0xe4bbc1dd, "kimage_voffset" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0x8b9f70c7, "cpu_hwcaps" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xa6f6226c, "kasan_flag_enabled" },
	{ 0x1115f928, "param_ops_uint" },
	{ 0xd740362b, "seq_printf" },
	{ 0x4f731e2b, "single_open" },
	{ 0xef42eddb, "single_release" },
	{ 0xad9f2705, "seq_lseek" },
	{ 0xb9997d36, "seq_read" },
	{ 0xaf507de1, "__arch_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x5a095c99, "__free_pages" },
	{ 0xa795dc09, "adjust_managed_page_count" },
	{ 0x9f0ec720, "memblock_free" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0x986f7ca8, "of_find_node_opts_by_path" },
	{ 0x89568686, "secdbg_mode_enter_upload" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0x87f6e3eb, "of_find_node_by_name" },
	{ 0x69ad2f20, "kstrtouint" },
	{ 0x1610bd2a, "param_get_uint" },
	{ 0x25fcbe84, "sec_set_reboot_magic" },
	{ 0x20fd21c6, "proc_create" },
	{ 0x280f9f14, "__per_cpu_offset" },
	{ 0x6b95284e, "runqueues" },
	{ 0x3c132ce6, "hardlockup_notifier_list" },
	{ 0xc56a41e6, "vabits_actual" },
	{ 0x7ceeac9, "panic_notifier_list" },
	{ 0x5abf8d30, "secdbg_base_set_info_hard_lockup" },
	{ 0x71e68591, "exynos_pmu_write" },
	{ 0x5a921311, "strncmp" },
	{ 0xf42b9584, "register_kernel_break_hook" },
	{ 0xb6261484, "register_die_notifier" },
	{ 0xc5850110, "printk" },
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
};

MODULE_INFO(depends, "sec_debug_mode,sec_reboot,hardlockup-watchdog,sec_debug_base_early,exynos-pmu-if");

