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
	{ 0x6dc37ff, "exynos_reboot_ops" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0x429c3f9c, "reboot_mode" },
	{ 0x60a32ea9, "pm_power_off" },
	{ 0x7ceeac9, "panic_notifier_list" },
	{ 0x349cba85, "strchr" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0x3dfeaa4, "regmap_update_bits_base" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x2c02e456, "exynos_mach_restart" },
	{ 0xd3752c27, "atomic_notifier_call_chain" },
	{ 0x653b8176, "exynos_reboot_pwrkey_status" },
	{ 0x976385ac, "exynos_reboot_print_socinfo" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0xc29bf967, "strspn" },
	{ 0x98cf60b3, "strlen" },
	{ 0xe914e41e, "strcpy" },
	{ 0x3c80c06c, "kstrtoull" },
	{ 0x5c7892cd, "cache_flush_all" },
	{ 0x5a921311, "strncmp" },
	{ 0x1f5babc6, "sec_abc_get_enabled" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9af913b8, "hard_reset_delay" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0x8eff6041, "_dev_info" },
	{ 0xd9d8fd16, "register_restart_handler" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
	{ 0x482954a5, "syscon_regmap_lookup_by_phandle" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0xea78f66e, "regmap_write" },
	{ 0xc5850110, "printk" },
	{ 0x3d2aa62, "regmap_read" },
};

MODULE_INFO(depends, "exynos-reboot,dss,abc,sec_hard_reset_hook");

