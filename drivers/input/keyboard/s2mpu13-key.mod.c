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
	{ 0xeff5879f, "pmic_key_is_pwron" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0xdf5b2f63, "input_unregister_device" },
	{ 0xf8beca97, "cancel_delayed_work_sync" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xbf57e89e, "queue_delayed_work_on" },
	{ 0x687d2163, "pm_stay_awake" },
	{ 0xfa8a5bb0, "devm_request_threaded_irq" },
	{ 0xffe8b403, "pm_relax" },
	{ 0x5bfaa8d0, "input_set_capability" },
	{ 0x253af43d, "delayed_work_timer_fn" },
	{ 0x79cf5987, "init_timer_key" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8a25ae5d, "pm_wakeup_ws_event" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x3b938c8d, "input_event" },
	{ 0x8eff6041, "_dev_info" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0xad0a8a5a, "of_get_property" },
	{ 0x69601c70, "of_get_next_child" },
	{ 0xbc7a4422, "_dev_warn" },
	{ 0x87f6e3eb, "of_find_node_by_name" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xf6560645, "pmic_read_pwrkey_status" },
	{ 0xff775d7a, "input_register_device" },
	{ 0x6994009e, "device_init_wakeup" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0x3871fd85, "devm_input_allocate_device" },
	{ 0xc5850110, "printk" },
	{ 0x503a285e, "__platform_driver_register" },
};

MODULE_INFO(depends, "sec_hard_reset_hook,s2mpu13_regulator");

MODULE_ALIAS("of:N*T*Cs2mpu13-power-keys");
MODULE_ALIAS("of:N*T*Cs2mpu13-power-keysC*");
