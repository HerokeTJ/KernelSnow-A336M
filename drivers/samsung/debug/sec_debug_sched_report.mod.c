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
	{ 0x6b95284e, "runqueues" },
	{ 0x280f9f14, "__per_cpu_offset" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xde7ece30, "__cpu_possible_mask" },
	{ 0x7ceeac9, "panic_notifier_list" },
	{ 0x74b7e5c8, "dbg_snapshot_log_get_item_by_index" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xcba4abe3, "list_sort" },
	{ 0x2955d511, "dss_get_task_log_by_cpu_iter" },
	{ 0x72f18257, "dss_get_task_log_by_idx" },
	{ 0x9de631bb, "dss_get_last_task_log_idx" },
	{ 0x560c64f9, "dss_get_len_task_log_by_cpu" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xe31b95f, "dss_get_irq_log_by_cpu_iter" },
	{ 0x86aee7a8, "dss_get_len_irq_log_by_cpu" },
	{ 0x77e59488, "dss_get_last_irq_log_idx" },
	{ 0xe763e4c, "dss_get_irq_log_by_idx" },
	{ 0xb18d41e5, "dss_get_first_irq_log_idx" },
	{ 0xd653b126, "sched_clock" },
	{ 0x9166fada, "strncpy" },
	{ 0xaec248f9, "dss_get_last_task_log" },
	{ 0x92c678e5, "dss_get_last_irq_log" },
	{ 0xbfc7f0c7, "dss_get_last_cpuidle_log" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x92ad1db9, "cpumask_next" },
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
	{ 0xc5850110, "printk" },
	{ 0x96848186, "scnprintf" },
};

MODULE_INFO(depends, "dss");

