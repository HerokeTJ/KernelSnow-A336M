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
	{ 0x52195345, "__tracepoint_device_pm_callback_end" },
	{ 0xe9b1039b, "__tracepoint_device_pm_callback_start" },
	{ 0xfede9222, "__tracepoint_suspend_resume" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x1115f928, "param_ops_uint" },
	{ 0xdbeeece6, "tracepoint_probe_unregister" },
	{ 0xaa4008af, "del_timer" },
	{ 0x7681946c, "unregister_pm_notifier" },
	{ 0xd653b126, "sched_clock" },
	{ 0x95e102ab, "tracepoint_probe_register" },
	{ 0x4fdece8c, "dev_driver_string" },
	{ 0xaa0c318b, "vscnprintf" },
	{ 0xf1e046cc, "panic" },
	{ 0xd3752c27, "atomic_notifier_call_chain" },
	{ 0xf15e728e, "del_timer_sync" },
	{ 0x65744673, "add_timer" },
	{ 0x72cd0f7f, "mod_timer" },
	{ 0x79cf5987, "init_timer_key" },
	{ 0x9cc4f70a, "register_pm_notifier" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0x9bb56529, "bus_unregister" },
	{ 0xc6a256d1, "driver_unregister" },
	{ 0x4c863dd4, "device_unregister" },
	{ 0xc5850110, "printk" },
	{ 0xbd9d04d2, "device_register" },
	{ 0x83dd6564, "driver_register" },
	{ 0x729df7c4, "bus_register" },
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
};

MODULE_INFO(depends, "");

