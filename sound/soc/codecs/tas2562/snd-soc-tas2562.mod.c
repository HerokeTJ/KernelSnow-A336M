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
	{ 0xdcb764ad, "memset" },
	{ 0x4829a47e, "memcpy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0x8b9f70c7, "cpu_hwcaps" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x6b2941b2, "__arch_copy_to_user" },
	{ 0xaf507de1, "__arch_copy_from_user" },
	{ 0xdcef2da4, "misc_deregister" },
	{ 0x6331d19e, "misc_register" },
	{ 0x175ced1, "power_supply_get_by_name" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x2276db98, "kstrtoint" },
	{ 0xe45c19a7, "ti_smartpa_read" },
	{ 0xe14b6add, "ti_smartpa_write" },
	{ 0x8900b200, "kmalloc_caches" },
	{ 0x8f471ada, "i2c_del_driver" },
	{ 0xf8beca97, "cancel_delayed_work_sync" },
	{ 0xfe990052, "gpio_free" },
	{ 0xa471896, "gpiod_to_irq" },
	{ 0x1a93828e, "gpiod_direction_input" },
	{ 0x3dfeaa4, "regmap_update_bits_base" },
	{ 0xbaad388d, "regmap_bulk_write" },
	{ 0x56b78be4, "regmap_bulk_read" },
	{ 0x3d2aa62, "regmap_read" },
	{ 0xea78f66e, "regmap_write" },
	{ 0x2c531865, "gpio_to_desc" },
	{ 0x63baf885, "gpiod_direction_output_raw" },
	{ 0x982b7d12, "of_get_named_gpio_flags" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0x2072ee9b, "request_threaded_irq" },
	{ 0x253af43d, "delayed_work_timer_fn" },
	{ 0x79cf5987, "init_timer_key" },
	{ 0x574add77, "__mutex_init" },
	{ 0x47229b5c, "gpio_request" },
	{ 0xd60bcef6, "__devm_regmap_init_i2c" },
	{ 0x4f72f07e, "i2c_register_driver" },
	{ 0x37a0cba, "kfree" },
	{ 0xaed3d17e, "class_destroy" },
	{ 0xa15d438d, "device_destroy" },
	{ 0xe8415b1d, "sysfs_remove_group" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0xaa3caa56, "sysfs_create_group" },
	{ 0x20f92f09, "device_create" },
	{ 0x13a54ed5, "__class_create" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x45355328, "irq_to_desc" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xbf57e89e, "queue_delayed_work_on" },
	{ 0xc5850110, "printk" },
	{ 0xf0b33873, "snd_soc_add_component_controls" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0xffaea249, "snd_soc_info_enum_double" },
	{ 0x3424c843, "snd_soc_put_volsw" },
	{ 0x901f7173, "snd_soc_get_volsw" },
	{ 0xf643f1fa, "snd_soc_info_volsw" },
	{ 0xa2ef36e7, "dev_printk" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0xe2956764, "snd_soc_unregister_component" },
	{ 0x7f902e84, "devm_snd_soc_register_component" },
	{ 0x8eff6041, "_dev_info" },
	{ 0x5ed4c6ae, "_dev_err" },
};

MODULE_INFO(depends, "abox_adaptation");

MODULE_ALIAS("i2c:tas2562");
MODULE_ALIAS("of:N*T*Cti,tas2562");
MODULE_ALIAS("of:N*T*Cti,tas2562C*");
