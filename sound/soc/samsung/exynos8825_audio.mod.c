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
	{ 0x7ce1303, "snd_soc_pm_ops" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0x357b5405, "wakeup_source_unregister" },
	{ 0x4b60b8a3, "snd_soc_of_put_dai_link_codecs" },
	{ 0x732ac580, "queue_work_on" },
	{ 0x7c02aadb, "of_property_read_string_helper" },
	{ 0x6ca7c29e, "of_find_property" },
	{ 0xeb00f526, "snd_soc_of_get_dai_link_codecs" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0xd604c3f, "devm_kfree" },
	{ 0x3fe387fd, "snd_soc_of_get_dai_name" },
	{ 0xb0ee738d, "of_get_child_by_name" },
	{ 0x79746f10, "of_parse_phandle" },
	{ 0x7166c2cf, "snd_soc_of_parse_audio_routing" },
	{ 0x8ae120c, "devm_kasprintf" },
	{ 0xc5c6ec01, "snd_soc_of_parse_daifmt" },
	{ 0xbc7a4422, "_dev_warn" },
	{ 0x69601c70, "of_get_next_child" },
	{ 0x28230a3f, "wakeup_source_register" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0x28cc9c07, "snd_soc_dapm_put_enum_double" },
	{ 0x6c4e91f4, "snd_soc_dapm_get_enum_double" },
	{ 0xffaea249, "snd_soc_info_enum_double" },
	{ 0xa9941a8b, "__pm_relax" },
	{ 0x2a3901ee, "__pm_stay_awake" },
	{ 0x8eff6041, "_dev_info" },
	{ 0x20bb3709, "snd_ctl_boolean_mono_info" },
	{ 0xb44a9feb, "snd_soc_dapm_put_pin_switch" },
	{ 0x326a1f87, "snd_soc_dapm_get_pin_switch" },
	{ 0x86a6366c, "snd_soc_dapm_info_pin_switch" },
	{ 0xfa3a8dc8, "snd_soc_dai_set_channel_map" },
	{ 0xb5e7684c, "snd_soc_dai_set_bclk_ratio" },
	{ 0x37a373e9, "register_tfa98xx_bigdata_cb" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x35ee909c, "abox_hw_params_fixup_helper" },
	{ 0x3322eaad, "snd_soc_dapm_sync" },
	{ 0xc67460a3, "snd_soc_dapm_ignore_suspend" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0x9558ca00, "devm_snd_soc_register_card" },
};

MODULE_INFO(depends, "snd-soc-tfa98xx,snd-soc-samsung-abox");

MODULE_ALIAS("of:N*T*Csamsung,exynos8825-audio");
MODULE_ALIAS("of:N*T*Csamsung,exynos8825-audioC*");
