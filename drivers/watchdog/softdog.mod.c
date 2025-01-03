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
	{ 0x2d3385d3, "system_wq" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xd2728bc0, "param_ops_charp" },
	{ 0xd8339549, "param_ops_int" },
	{ 0x65671f08, "param_ops_bool" },
	{ 0x1115f928, "param_ops_uint" },
	{ 0x3fd1e596, "watchdog_unregister_device" },
	{ 0x939fc2ef, "hrtimer_start_range_ns" },
	{ 0x96c21ce0, "__module_get" },
	{ 0xecd991f, "hrtimer_active" },
	{ 0x732ac580, "queue_work_on" },
	{ 0x1e7bbcb3, "kernel_restart" },
	{ 0xa4304a36, "wake_up_process" },
	{ 0xd9aa98a4, "kthread_create_on_node" },
	{ 0xd0c05159, "emergency_restart" },
	{ 0xf1e046cc, "panic" },
	{ 0xd96ad14c, "secdbg_softdog_show_info" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x2f166344, "module_put" },
	{ 0xcc69bd8c, "hrtimer_cancel" },
	{ 0xc5850110, "printk" },
	{ 0xae0d6e28, "watchdog_register_device" },
	{ 0x3ebd5214, "hrtimer_init" },
	{ 0xf7235039, "watchdog_init_timeout" },
};

MODULE_INFO(depends, "sec_debug_softdog");

