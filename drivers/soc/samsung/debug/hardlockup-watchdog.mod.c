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
	{ 0xac594e02, "__cpu_online_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x280f9f14, "__per_cpu_offset" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x18fb2caf, "cpus_read_unlock" },
	{ 0xa04f945a, "cpus_read_lock" },
	{ 0xcc69bd8c, "hrtimer_cancel" },
	{ 0x939fc2ef, "hrtimer_start_range_ns" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0x76c41756, "hrtimer_forward" },
	{ 0xd653b126, "sched_clock" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x92ad1db9, "cpumask_next" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf1e046cc, "panic" },
	{ 0xd3752c27, "atomic_notifier_call_chain" },
	{ 0x3ebd5214, "hrtimer_init" },
	{ 0x267df662, "smp_call_on_cpu" },
	{ 0x57ad17e9, "__cpuhp_setup_state" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0xc5850110, "printk" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x574add77, "__mutex_init" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0x8eff6041, "_dev_info" },
	{ 0x503a285e, "__platform_driver_register" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Csamsung,hardlockup-watchdog");
MODULE_ALIAS("of:N*T*Csamsung,hardlockup-watchdogC*");
