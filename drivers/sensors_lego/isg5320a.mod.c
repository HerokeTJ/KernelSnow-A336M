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
	{ 0x8900b200, "kmalloc_caches" },
	{ 0x8f471ada, "i2c_del_driver" },
	{ 0xd969d6f4, "cancel_work_sync" },
	{ 0xfda3f5d5, "sensors_unregister" },
	{ 0x357b5405, "wakeup_source_unregister" },
	{ 0x732ac580, "queue_work_on" },
	{ 0xbf57e89e, "queue_delayed_work_on" },
	{ 0x2276db98, "kstrtoint" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf8beca97, "cancel_delayed_work_sync" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x46045dd7, "kstrtou8" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x3b938c8d, "input_event" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0xa9941a8b, "__pm_relax" },
	{ 0x2a3901ee, "__pm_stay_awake" },
	{ 0xa471896, "gpiod_to_irq" },
	{ 0x7ee96f3, "gpiod_get_raw_value_cansleep" },
	{ 0xf184be6, "i2c_transfer" },
	{ 0x12a38747, "usleep_range" },
	{ 0x2c531865, "gpio_to_desc" },
	{ 0x1a93828e, "gpiod_direction_input" },
	{ 0x47229b5c, "gpio_request" },
	{ 0x64cd05cd, "of_property_read_variable_u8_array" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0x982b7d12, "of_get_named_gpio_flags" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0x37a0cba, "kfree" },
	{ 0xfe990052, "gpio_free" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xdf5b2f63, "input_unregister_device" },
	{ 0xaff8ee16, "sensors_remove_symlink" },
	{ 0xe8415b1d, "sysfs_remove_group" },
	{ 0xe67c5c43, "hall_notifier_register" },
	{ 0x47109311, "manager_notifier_register" },
	{ 0x253af43d, "delayed_work_timer_fn" },
	{ 0x79cf5987, "init_timer_key" },
	{ 0x28230a3f, "wakeup_source_register" },
	{ 0x90d98a9a, "sensors_register" },
	{ 0xaa3caa56, "sysfs_create_group" },
	{ 0x1664946e, "sensors_create_symlink" },
	{ 0xff775d7a, "input_register_device" },
	{ 0x574add77, "__mutex_init" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2072ee9b, "request_threaded_irq" },
	{ 0xd329e1c6, "input_free_device" },
	{ 0x5bfaa8d0, "input_set_capability" },
	{ 0xe3db3c44, "input_allocate_device" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc5850110, "printk" },
	{ 0x4f72f07e, "i2c_register_driver" },
};

MODULE_INFO(depends, "sensor_core,hall_ic_notifier,usb_typec_manager");

MODULE_ALIAS("i2c:ISG5320A");
