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
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xde7ece30, "__cpu_possible_mask" },
	{ 0x8900b200, "kmalloc_caches" },
	{ 0x280f9f14, "__per_cpu_offset" },
	{ 0x3c132ce6, "hardlockup_notifier_list" },
	{ 0x6c37731d, "secdbg_exin_set_hardlockup_ehld" },
	{ 0xcfa5f011, "ehld_get_ctrl_data" },
	{ 0x92ad1db9, "cpumask_next" },
	{ 0x5d2450eb, "secdbg_exin_set_hardlockup_freq" },
	{ 0x2541327f, "dss_get_freq_log_by_cpu_iter" },
	{ 0xd61f629c, "dss_get_len_freq_log_by_cpu" },
	{ 0xcf116d4b, "dss_get_last_freq_log_idx" },
	{ 0xbfb2ba0e, "dss_get_freq_log_by_idx" },
	{ 0xfcd4187b, "dss_get_first_freq_log_idx" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x45355328, "irq_to_desc" },
	{ 0xbd850958, "secdbg_exin_set_hardlockup_data" },
	{ 0xd67517d1, "irq_get_irq_data" },
	{ 0x11b1c8a1, "secdbg_exin_set_hardlockup_type" },
	{ 0x96848186, "scnprintf" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
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
	{ 0xa394019, "hardlockup_watchdog_get_period" },
	{ 0xdad5af74, "hardlockup_watchdog_get_thresh" },
	{ 0x6f0972f3, "dbg_snapshot_set_item_enable" },
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
	{ 0xc5850110, "printk" },
};

MODULE_INFO(depends, "hardlockup-watchdog,sec_debug_extra_info,ehld,dss");

