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
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xd2728bc0, "param_ops_charp" },
	{ 0xe0875eb1, "kstrtobool" },
	{ 0x96848186, "scnprintf" },
	{ 0xa9fd43f3, "kernfs_find_and_get_ns" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xf02aa937, "wait_for_completion_interruptible_timeout" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x5f9e9913, "of_property_count_elems_of_size" },
	{ 0x7c02aadb, "of_property_read_string_helper" },
	{ 0x982b7d12, "of_get_named_gpio_flags" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0x6ca7c29e, "of_find_property" },
	{ 0x8bdf6c84, "input_mt_init_slots" },
	{ 0x837ac1f4, "input_set_abs_params" },
	{ 0x3b938c8d, "input_event" },
	{ 0x732ac580, "queue_work_on" },
	{ 0x8a25ae5d, "pm_wakeup_ws_event" },
	{ 0x9a7402a8, "gpiod_get_raw_value" },
	{ 0x2c531865, "gpio_to_desc" },
	{ 0xa471896, "gpiod_to_irq" },
	{ 0xe8415b1d, "sysfs_remove_group" },
	{ 0xaa3caa56, "sysfs_create_group" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0xf4124677, "mutex_lock_interruptible" },
	{ 0xc5850110, "printk" },
	{ 0xfe990052, "gpio_free" },
	{ 0xdbddc967, "regulator_get" },
	{ 0x37a0cba, "kfree" },
	{ 0x47229b5c, "gpio_request" },
	{ 0x613844ff, "devm_gpio_request_one" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xd969d6f4, "cancel_work_sync" },
	{ 0xa1e8e8ba, "vbus_notifier_unregister" },
	{ 0x93aa88cf, "manager_notifier_unregister" },
	{ 0xd9362e5f, "vbus_notifier_register" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x47109311, "manager_notifier_register" },
	{ 0x2f1fa27c, "regulator_is_enabled" },
	{ 0x6c8362b4, "regulator_disable" },
	{ 0xf3bd923d, "regulator_enable" },
	{ 0x5c39520d, "pinctrl_select_state" },
	{ 0x79a35362, "pinctrl_lookup_state" },
	{ 0xff775d7a, "input_register_device" },
	{ 0x3871fd85, "devm_input_allocate_device" },
	{ 0x3fcaa46c, "input_mt_report_slot_state" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0xbb72d6b4, "power_supply_get_property" },
	{ 0x175ced1, "power_supply_get_by_name" },
	{ 0xf9a482f9, "msleep" },
	{ 0x12a38747, "usleep_range" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x45355328, "irq_to_desc" },
	{ 0x8eff6041, "_dev_info" },
	{ 0xfd7d7073, "sec_debug_tsp_log_msg" },
	{ 0x4fdece8c, "dev_driver_string" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0x907fa746, "get_lcd_info" },
};

MODULE_INFO(depends, "vbus_notifier,usb_typec_manager,sec_tsp_log,mcd-panel");

