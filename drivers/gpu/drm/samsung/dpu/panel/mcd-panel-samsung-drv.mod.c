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
	{ 0x4829a47e, "memcpy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0xb95983fd, "commit_retry" },
	{ 0x22e8d5c0, "bypass_display" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x465155e1, "g_errlog_obj" },
	{ 0xebc21f76, "g_log_obj" },
	{ 0xd8339549, "param_ops_int" },
	{ 0x350a2bcf, "mipi_dsi_driver_unregister" },
	{ 0xd2abbef6, "mipi_dsi_driver_register_full" },
	{ 0x9166fada, "strncpy" },
	{ 0x9863de77, "drm_panel_enable" },
	{ 0xfacb5d9d, "dsim_atomic_activate" },
	{ 0xd01c0c9a, "drm_panel_prepare" },
	{ 0x9a7e7bca, "drm_panel_unprepare" },
	{ 0x2d32c60e, "is_tui_trans" },
	{ 0xffd760a2, "drm_panel_disable" },
	{ 0xdf4223aa, "drm_connector_update_edid_property" },
	{ 0x9b95c885, "drm_mode_match" },
	{ 0xf60cde93, "mcd_decon_get_bts_fps" },
	{ 0xd9b4753, "drm_mode_equal" },
	{ 0x20d81059, "up_write" },
	{ 0x28ed2847, "down_write" },
	{ 0x45e5cb8, "drm_panel_get_modes" },
	{ 0xa0bf9ddc, "drm_object_attach_property" },
	{ 0x7e41ec60, "exynos_drm_connector_get_properties" },
	{ 0x28779e52, "drm_printf" },
	{ 0xd3e3f411, "drm_connector_cleanup" },
	{ 0xc7735678, "drm_connector_unregister" },
	{ 0x560eaaab, "drm_kms_helper_hotplug_event" },
	{ 0x12c63a8, "drm_connector_attach_encoder" },
	{ 0x66672bd4, "drm_connector_register" },
	{ 0x5f12bab0, "exynos_drm_connector_init" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xbf57e89e, "queue_delayed_work_on" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0x474ccd31, "exynos_panel_find_panel_mode" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x365acda7, "set_normalized_timespec64" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x486c3798, "mipi_dsi_dcs_read" },
	{ 0xbc7a4422, "_dev_warn" },
	{ 0x5232e23a, "mipi_dsi_dcs_write_buffer" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xaa5b60af, "exynos_panel_desc_destroy" },
	{ 0xdc2887c6, "devm_backlight_device_unregister" },
	{ 0x5714b3a, "drm_bridge_remove" },
	{ 0x8a1c4969, "drm_panel_remove" },
	{ 0xf6d5096e, "mipi_dsi_detach" },
	{ 0xfbd4e41c, "mipi_dsi_attach" },
	{ 0x2412377, "drm_bridge_add" },
	{ 0xeacb5bb2, "drm_panel_add" },
	{ 0xdfd57ea6, "drm_panel_init" },
	{ 0x68bc512b, "of_find_device_by_node" },
	{ 0x65f9af5a, "of_find_compatible_node" },
	{ 0x574add77, "__mutex_init" },
	{ 0xf5a94b83, "__init_rwsem" },
	{ 0xe9c5dd99, "exynos_panel_desc_create_from_panel_display_modes" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x253af43d, "delayed_work_timer_fn" },
	{ 0x79cf5987, "init_timer_key" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x6b50e951, "up_read" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xcc2c561, "drm_crtc_vblank_put" },
	{ 0xf38ad121, "drm_crtc_wait_one_vblank" },
	{ 0x802f7a1e, "drm_crtc_vblank_get" },
	{ 0x12a38747, "usleep_range" },
	{ 0x3355da1c, "down_read" },
	{ 0x973741eb, "mipi_dsi_compression_mode" },
	{ 0x65668ae, "mipi_dsi_picture_parameter_set" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0xd54ecd1c, "dsim_host_cmdset_transfer" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0xf1b5340a, "drm_mode_vrefresh" },
	{ 0xd7e54fb, "drm_mode_probed_add" },
	{ 0xc5850110, "printk" },
	{ 0xf457c7f9, "drm_mode_duplicate" },
	{ 0xef8f1f82, "memlog_write_printf" },
};

MODULE_INFO(depends, "exynos-drm,mcd-panel-samsung-helper,memlogger");

MODULE_ALIAS("of:N*T*Csamsung,mcd-panel-samsung-drv");
MODULE_ALIAS("of:N*T*Csamsung,mcd-panel-samsung-drvC*");
