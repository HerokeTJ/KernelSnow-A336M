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
	{ 0x85c6d9bd, "__tracepoint_android_vh_rwsem_write_wait_finish" },
	{ 0x460eeeee, "__tracepoint_android_vh_rwsem_read_wait_finish" },
	{ 0x18bed6ed, "__tracepoint_android_vh_rwsem_write_wait_start" },
	{ 0xdc072410, "__tracepoint_android_vh_rwsem_read_wait_start" },
	{ 0xee6fc031, "__tracepoint_android_vh_rtmutex_wait_finish" },
	{ 0xdaf6aebd, "__tracepoint_android_vh_rtmutex_wait_start" },
	{ 0xe119258f, "__tracepoint_android_vh_mutex_wait_finish" },
	{ 0xacea24f4, "__tracepoint_android_vh_mutex_wait_start" },
	{ 0xd3537ff4, "__tracepoint_android_vh_sched_show_task" },
	{ 0x95e102ab, "tracepoint_probe_register" },
	{ 0x96848186, "scnprintf" },
	{ 0x10be2bb4, "register_dump_one_task_notifier" },
	{ 0xc5850110, "printk" },
};

MODULE_INFO(depends, "dss");

