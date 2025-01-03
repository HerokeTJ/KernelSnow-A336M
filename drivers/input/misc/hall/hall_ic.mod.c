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
	{ 0x2d3385d3, "system_wq" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x357b5405, "wakeup_source_unregister" },
	{ 0xdf5b2f63, "input_unregister_device" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x8a25ae5d, "pm_wakeup_ws_event" },
	{ 0xa9941a8b, "__pm_relax" },
	{ 0xf8beca97, "cancel_delayed_work_sync" },
	{ 0xe8950c00, "stui_cancel_session" },
	{ 0xa185c970, "stui_get_mode" },
	{ 0x229a20fd, "kobject_uevent_env" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x4fc8c1b0, "sysfs_create_file_ns" },
	{ 0x98cf60b3, "strlen" },
	{ 0x5a921311, "strncmp" },
	{ 0x2072ee9b, "request_threaded_irq" },
	{ 0x253af43d, "delayed_work_timer_fn" },
	{ 0x79cf5987, "init_timer_key" },
	{ 0x28230a3f, "wakeup_source_register" },
	{ 0x30bbe06f, "sec_device_create" },
	{ 0x3b938c8d, "input_event" },
	{ 0xbf57e89e, "queue_delayed_work_on" },
	{ 0xff775d7a, "input_register_device" },
	{ 0x5bfaa8d0, "input_set_capability" },
	{ 0xe3db3c44, "input_allocate_device" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xa471896, "gpiod_to_irq" },
	{ 0x1a93828e, "gpiod_direction_input" },
	{ 0x982b7d12, "of_get_named_gpio_flags" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0xad0a8a5a, "of_get_property" },
	{ 0x69601c70, "of_get_next_child" },
	{ 0x574add77, "__mutex_init" },
	{ 0x6994009e, "device_init_wakeup" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0x2c531865, "gpio_to_desc" },
	{ 0x7ee96f3, "gpiod_get_raw_value_cansleep" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0x4d70996f, "hall_notifier_notify" },
	{ 0xc5850110, "printk" },
	{ 0xeb9065d9, "mutex_lock" },
};

MODULE_INFO(depends, "tuihw-inf,sec_class,hall_ic_notifier");

MODULE_ALIAS("of:N*T*Chall_ic");
MODULE_ALIAS("of:N*T*Chall_icC*");
