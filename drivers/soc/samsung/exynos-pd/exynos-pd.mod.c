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
	{ 0x8900b200, "kmalloc_caches" },
	{ 0xfdee4fc, "of_root" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0x114d3d60, "exynos_usbdrd_ldo_external_control" },
	{ 0x90cd4355, "exynos_update_ip_idle_status" },
	{ 0x5d1f2d9a, "itmon_pd_sync" },
	{ 0x8dbdc6f5, "secdbg_exin_set_epd" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0x610c4e73, "pm_genpd_init" },
	{ 0x93acb5ce, "otg_is_connect" },
	{ 0x8833e7f, "vts_is_on" },
	{ 0xc9926b68, "abox_is_on" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0x52344ac2, "cal_register_pd_lookup_cmu_id" },
	{ 0x5119a0e4, "pm_genpd_add_subdomain" },
	{ 0x79746f10, "of_parse_phandle" },
	{ 0x1ce84976, "of_genpd_add_provider_simple" },
	{ 0x574add77, "__mutex_init" },
	{ 0x6a5c3098, "exynos_get_idle_ip_index" },
	{ 0x8dec4c4b, "cal_pd_set_first_on" },
	{ 0x8eff6041, "_dev_info" },
	{ 0x18247c96, "cal_pd_set_smc_id" },
	{ 0xf1dcb5c1, "cal_pd_control" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0x6ca7c29e, "of_find_property" },
	{ 0xc5850110, "printk" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0xad727c11, "cal_pd_status" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x68bc512b, "of_find_device_by_node" },
	{ 0x5cf87584, "of_device_is_available" },
	{ 0x65f9af5a, "of_find_compatible_node" },
};

MODULE_INFO(depends, "phy-exynos-usbdrd-super,exynos-cpupm,exynos-itmon,sec_debug_extra_info,dwc3-exynos-usb,snd-soc-samsung-vts,snd-soc-samsung-abox,cmupmucal");

MODULE_ALIAS("of:N*T*Csamsung,exynos-pd");
MODULE_ALIAS("of:N*T*Csamsung,exynos-pdC*");
