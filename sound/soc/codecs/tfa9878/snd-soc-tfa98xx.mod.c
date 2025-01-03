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
	{ 0xaafdc258, "strcasecmp" },
	{ 0x9cf39ec9, "audio_register_surface_temperature_cb" },
	{ 0x272daee5, "audio_register_curr_temperature_cb" },
	{ 0x82ea1fa1, "audio_register_excursion_overcount_cb" },
	{ 0xa0b5e79c, "audio_register_excursion_max_cb" },
	{ 0xcd6828ab, "audio_register_temperature_overcount_cb" },
	{ 0x1dfe817a, "audio_register_temperature_keep_max_cb" },
	{ 0xcceff169, "audio_register_temperature_max_cb" },
	{ 0xda571594, "cancel_delayed_work" },
	{ 0x12a38747, "usleep_range" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x11089ac7, "_ctype" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x7b0192da, "kstrtou16" },
	{ 0xd419eeb6, "kmem_cache_free" },
	{ 0x4ba1ee76, "kmem_cache_alloc" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0x8b9f70c7, "cpu_hwcaps" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x8900b200, "kmalloc_caches" },
	{ 0xd8339549, "param_ops_int" },
	{ 0xd2728bc0, "param_ops_charp" },
	{ 0x263c3152, "bcmp" },
	{ 0xae4b2889, "kmem_cache_destroy" },
	{ 0x8f471ada, "i2c_del_driver" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x5243bc7e, "debugfs_remove" },
	{ 0xfe990052, "gpio_free" },
	{ 0xe2956764, "snd_soc_unregister_component" },
	{ 0xe2a9fbdd, "sysfs_remove_bin_file" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x6b2941b2, "__arch_copy_to_user" },
	{ 0xaf507de1, "__arch_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x896f768, "simple_open" },
	{ 0xfeea81cb, "default_llseek" },
	{ 0xbf27df8c, "simple_attr_open" },
	{ 0xeb895e94, "simple_attr_release" },
	{ 0xd9bf06e9, "simple_attr_write" },
	{ 0x4a788936, "simple_attr_read" },
	{ 0xe2aa8e76, "generic_file_llseek" },
	{ 0x63ef7ca7, "debugfs_create_file" },
	{ 0x82b308e8, "debugfs_create_dir" },
	{ 0xa471896, "gpiod_to_irq" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc67460a3, "snd_soc_dapm_ignore_suspend" },
	{ 0x6fe199e0, "snd_soc_dapm_add_routes" },
	{ 0x8448df58, "snd_soc_dapm_new_controls" },
	{ 0xc310b981, "strnstr" },
	{ 0x5a921311, "strncmp" },
	{ 0x4841bdee, "strnchr" },
	{ 0x5792f848, "strlcpy" },
	{ 0xf0b33873, "snd_soc_add_component_controls" },
	{ 0x96848186, "scnprintf" },
	{ 0x4f5ffcdb, "snd_soc_component_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x7d3e320e, "request_firmware_nowait" },
	{ 0xddaab433, "snd_soc_component_init_regmap" },
	{ 0x253af43d, "delayed_work_timer_fn" },
	{ 0x79cf5987, "init_timer_key" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x98cf60b3, "strlen" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xeec87728, "snd_pcm_hw_constraint_list" },
	{ 0x1c514236, "snd_pcm_hw_constraint_mask64" },
	{ 0xbf57e89e, "queue_delayed_work_on" },
	{ 0xf8beca97, "cancel_delayed_work_sync" },
	{ 0x2c531865, "gpio_to_desc" },
	{ 0xd98115d2, "gpiod_set_raw_value_cansleep" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0x982b7d12, "of_get_named_gpio_flags" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0xe3aa3619, "device_create_file" },
	{ 0x10d5b5f2, "sysfs_create_bin_file" },
	{ 0x8eff6041, "_dev_info" },
	{ 0xfa8a5bb0, "devm_request_threaded_irq" },
	{ 0x34511c76, "snd_soc_register_component" },
	{ 0x403f9529, "gpio_request_one" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x574add77, "__mutex_init" },
	{ 0xd60bcef6, "__devm_regmap_init_i2c" },
	{ 0x4f72f07e, "i2c_register_driver" },
	{ 0x612f3d20, "kmem_cache_create" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xa5939272, "power_supply_put" },
	{ 0xbb72d6b4, "power_supply_get_property" },
	{ 0x175ced1, "power_supply_get_by_name" },
	{ 0xb86fd3a1, "i2c_transfer_buffer_flags" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xf184be6, "i2c_transfer" },
	{ 0x3d2aa62, "regmap_read" },
	{ 0xf9a482f9, "msleep" },
	{ 0xea78f66e, "regmap_write" },
	{ 0xc5850110, "printk" },
};

MODULE_INFO(depends, "sec_audio_sysfs");

MODULE_ALIAS("i2c:tfa98xx");
