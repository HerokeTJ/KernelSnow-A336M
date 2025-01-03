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
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0x8900b200, "kmalloc_caches" },
	{ 0x280f9f14, "__per_cpu_offset" },
	{ 0x6b95284e, "runqueues" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5980aaff, "__tracepoint_android_vh_wq_lockup_pool" },
	{ 0xdbeeece6, "tracepoint_probe_unregister" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0xd653b126, "sched_clock" },
	{ 0x72f18257, "dss_get_task_log_by_idx" },
	{ 0x50e21daa, "secdbg_stra_show_callstack_auto" },
	{ 0x6228c21f, "smp_call_function_single" },
	{ 0xcba4abe3, "list_sort" },
	{ 0x2955d511, "dss_get_task_log_by_cpu_iter" },
	{ 0x9de631bb, "dss_get_last_task_log_idx" },
	{ 0x96848186, "scnprintf" },
	{ 0x74b7e5c8, "dbg_snapshot_log_get_item_by_index" },
	{ 0x560c64f9, "dss_get_len_task_log_by_cpu" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x95e102ab, "tracepoint_probe_register" },
	{ 0x5a921311, "strncmp" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5850110, "printk" },
};

MODULE_INFO(depends, "dss,sec_debug_stacktrace");

