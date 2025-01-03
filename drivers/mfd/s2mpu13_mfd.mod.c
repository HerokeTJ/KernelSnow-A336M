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
	{ 0x19ebf04e, "__tracepoint_rwmmio_post_read" },
	{ 0xa035d76e, "__tracepoint_rwmmio_read" },
	{ 0x95575c33, "__tracepoint_rwmmio_write" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0x549525ef, "handle_nested_irq" },
	{ 0xbf57e89e, "queue_delayed_work_on" },
	{ 0x6980ea4b, "__log_post_read_mmio" },
	{ 0xcf1211a8, "__log_read_mmio" },
	{ 0x31dfd5cd, "__log_write_mmio" },
	{ 0x56f5ea66, "s2mpu14_call_notifier" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0xd67517d1, "irq_get_irq_data" },
	{ 0xbf5d553, "irq_set_chip_and_handler_name" },
	{ 0x253af43d, "delayed_work_timer_fn" },
	{ 0x79cf5987, "init_timer_key" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x4fdece8c, "dev_driver_string" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x6b4b2933, "__ioremap" },
	{ 0xf8beca97, "cancel_delayed_work_sync" },
	{ 0xedc03953, "iounmap" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xfa8a5bb0, "devm_request_threaded_irq" },
	{ 0xcc23d1e5, "irq_of_parse_and_map" },
	{ 0xee0968d4, "handle_level_irq" },
	{ 0x20a789ac, "irq_set_chip_data" },
	{ 0x8f471ada, "i2c_del_driver" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xad0a8a5a, "of_get_property" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0x6994009e, "device_init_wakeup" },
	{ 0x40e625b5, "devm_mfd_add_devices" },
	{ 0x94acda2b, "devm_i2c_new_dummy_device" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0x574add77, "__mutex_init" },
	{ 0xc2b4de71, "__devm_irq_alloc_descs" },
	{ 0x4f72f07e, "i2c_register_driver" },
	{ 0x4595bea2, "exynos_acpm_update_reg" },
	{ 0x8ef350fe, "exynos_acpm_bulk_write" },
	{ 0x98548e9c, "exynos_acpm_write_reg" },
	{ 0x2bf63783, "exynos_acpm_bulk_read" },
	{ 0xc5850110, "printk" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0x6ea6ad8a, "exynos_acpm_read_reg" },
	{ 0xeb9065d9, "mutex_lock" },
};

MODULE_INFO(depends, "s2mpu14_mfd,exynos_acpm");

MODULE_ALIAS("i2c:s2mpu13");
