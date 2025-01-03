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
	{ 0x9688de8b, "memstart_addr" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0x4735ac17, "flush_work" },
	{ 0xf93aae46, "__arm_smccc_smc" },
	{ 0xc5850110, "printk" },
	{ 0x732ac580, "queue_work_on" },
	{ 0xfa8a5bb0, "devm_request_threaded_irq" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x1270d593, "vmap" },
	{ 0x8eff6041, "_dev_info" },
	{ 0x2269b80c, "devm_free_irq" },
	{ 0x3c62daf, "debugfs_create_bool" },
	{ 0x82b308e8, "debugfs_create_dir" },
	{ 0xd67517d1, "irq_get_irq_data" },
	{ 0x94961283, "vunmap" },
	{ 0xcc23d1e5, "irq_of_parse_and_map" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0xea5339e4, "of_reserved_mem_lookup" },
	{ 0x79746f10, "of_parse_phandle" },
	{ 0x503a285e, "__platform_driver_register" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Csamsung,exynos-seclog");
MODULE_ALIAS("of:N*T*Csamsung,exynos-seclogC*");
