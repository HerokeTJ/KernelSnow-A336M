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
	{ 0xd4034828, "system_freezable_wq" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0xa471896, "gpiod_to_irq" },
	{ 0xbf57e89e, "queue_delayed_work_on" },
	{ 0x2c531865, "gpio_to_desc" },
	{ 0x9a7402a8, "gpiod_get_raw_value" },
	{ 0x5838f6c9, "rtc_valid_tm" },
	{ 0xd4ff9483, "s2mpu13_bulk_read" },
	{ 0x8a25ae5d, "pm_wakeup_ws_event" },
	{ 0xfbd12ee6, "rtc_update_irq" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0x239a718f, "s2mpu13_bulk_write" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0x12a38747, "usleep_range" },
	{ 0x8eff6041, "_dev_info" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0x357b5405, "wakeup_source_unregister" },
	{ 0x2269b80c, "devm_free_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x253af43d, "delayed_work_timer_fn" },
	{ 0x79cf5987, "init_timer_key" },
	{ 0xfd8cab20, "__rtc_register_device" },
	{ 0x2bedc5ef, "devm_rtc_allocate_device" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xfa8a5bb0, "devm_request_threaded_irq" },
	{ 0x28230a3f, "wakeup_source_register" },
	{ 0x6994009e, "device_init_wakeup" },
	{ 0x574add77, "__mutex_init" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0x545ee6a, "s2mpu13_write_reg" },
	{ 0xb7c565ba, "s2mpu13_read_reg" },
	{ 0x6df45d68, "s2mpu13_update_reg" },
	{ 0xc5850110, "printk" },
};

MODULE_INFO(depends, "s2mpu13_mfd");

