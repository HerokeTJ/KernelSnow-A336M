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
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0x8b9f70c7, "cpu_hwcaps" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xbd7d1702, "pinctrl_put" },
	{ 0x79a35362, "pinctrl_lookup_state" },
	{ 0x8326fbf, "pinctrl_get" },
	{ 0x7c02aadb, "of_property_read_string_helper" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0x9cf0dacc, "of_property_read_string" },
	{ 0x982b7d12, "of_get_named_gpio_flags" },
	{ 0xa15d438d, "device_destroy" },
	{ 0xd264c2f0, "fingerprint_unregister" },
	{ 0x2497929, "fingerprint_register" },
	{ 0x20f92f09, "device_create" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0x574add77, "__mutex_init" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x82885f25, "nonseekable_open" },
	{ 0x6b2941b2, "__arch_copy_to_user" },
	{ 0x6c8362b4, "regulator_disable" },
	{ 0xf3bd923d, "regulator_enable" },
	{ 0xfbc84afe, "gpiod_set_raw_value" },
	{ 0x12a38747, "usleep_range" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xaf507de1, "__arch_copy_from_user" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0xb8888b15, "no_llseek" },
	{ 0xbb0a7735, "__register_chrdev" },
	{ 0xaed3d17e, "class_destroy" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0x13a54ed5, "__class_create" },
	{ 0x9a7402a8, "gpiod_get_raw_value" },
	{ 0x2c531865, "gpio_to_desc" },
	{ 0x63baf885, "gpiod_direction_output_raw" },
	{ 0x357b5405, "wakeup_source_unregister" },
	{ 0xfcd3f0fc, "regulator_put" },
	{ 0xfe990052, "gpio_free" },
	{ 0x28230a3f, "wakeup_source_register" },
	{ 0x47229b5c, "gpio_request" },
	{ 0xbdb1494f, "regulator_set_load" },
	{ 0xdbddc967, "regulator_get" },
	{ 0x5c39520d, "pinctrl_select_state" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x732ac580, "queue_work_on" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x79cf5987, "init_timer_key" },
	{ 0xd969d6f4, "cancel_work_sync" },
	{ 0xf15e728e, "del_timer_sync" },
	{ 0x50fad434, "round_jiffies_up" },
	{ 0x72cd0f7f, "mod_timer" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x8fe79d0e, "exynos_pm_qos_remove_request" },
	{ 0x74ebf29f, "exynos_pm_qos_add_request_trace" },
	{ 0xa9941a8b, "__pm_relax" },
	{ 0x2a3901ee, "__pm_stay_awake" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x2e1ca751, "clk_put" },
	{ 0xc5850110, "printk" },
	{ 0x36d574de, "devm_clk_get" },
};

MODULE_INFO(depends, "fingerprint_sysfs,exynos_pm_qos");

