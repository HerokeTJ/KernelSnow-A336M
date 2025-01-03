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
	{ 0x4829a47e, "memcpy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0x15af7f4, "system_state" },
	{ 0xfd044c4f, "__tracepoint_android_vh_try_to_freeze_todo" },
	{ 0x8324d153, "__tracepoint_android_vh_try_to_freeze_todo_unfrozen" },
	{ 0xb68447d7, "__tracepoint_android_rvh_report_bug" },
	{ 0x1ed564a9, "__tracepoint_android_rvh_do_sp_pc_abort" },
	{ 0xadec6b55, "__tracepoint_android_rvh_do_mem_abort" },
	{ 0x23501356, "__tracepoint_android_rvh_do_sea" },
	{ 0x33c9af1e, "__tracepoint_android_rvh_die_kernel_fault" },
	{ 0x3eeb0795, "__tracepoint_android_rvh_arm64_serror_panic" },
	{ 0x11c4733a, "__tracepoint_android_rvh_bad_mode" },
	{ 0x48a1e8c, "__tracepoint_android_rvh_do_undefinstr" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0xc56a41e6, "vabits_actual" },
	{ 0xe4bbc1dd, "kimage_voffset" },
	{ 0x74ea651e, "__tracepoint_android_vh_watchdog_timer_softlockup" },
	{ 0x7ceeac9, "panic_notifier_list" },
	{ 0x38611295, "param_ops_long" },
	{ 0xe8d7e643, "stack_trace_save_tsk" },
	{ 0x7fbbd0bb, "android_rvh_probe_register" },
	{ 0xf1e046cc, "panic" },
	{ 0x95e102ab, "tracepoint_probe_register" },
	{ 0xb6261484, "register_die_notifier" },
	{ 0xc487eb56, "stack_trace_save_regs" },
	{ 0x6bd1aa56, "stack_trace_save" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0xd740362b, "seq_printf" },
	{ 0x4f731e2b, "single_open" },
	{ 0xef42eddb, "single_release" },
	{ 0xad9f2705, "seq_lseek" },
	{ 0xb9997d36, "seq_read" },
	{ 0x7a7730bd, "secdbg_base_get_buf_size" },
	{ 0x6ea70799, "secdbg_base_get_buf_base" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
	{ 0xbe2adf78, "proc_set_size" },
	{ 0x20fd21c6, "proc_create" },
	{ 0x38378ba1, "secdbg_base_get_debug_base" },
	{ 0xd653b126, "sched_clock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xc310b981, "strnstr" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x98cf60b3, "strlen" },
	{ 0xa54c0505, "secdbg_base_get_ncva" },
	{ 0xa916b694, "strnlen" },
	{ 0x5a921311, "strncmp" },
	{ 0x96848186, "scnprintf" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x148653, "vsnprintf" },
	{ 0xc5850110, "printk" },
	{ 0x1e6d26a8, "strstr" },
};

MODULE_INFO(depends, "sec_debug_base_early");

