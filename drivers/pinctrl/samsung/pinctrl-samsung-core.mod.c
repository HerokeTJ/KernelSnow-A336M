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
	{ 0x2d3385d3, "system_wq" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0x82e30947, "pinctrl_remove_gpio_range" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xb7983b27, "irq_create_mapping_affinity" },
	{ 0x60fe6854, "gpiochip_get_data" },
	{ 0x55a9ebb2, "gpiochip_generic_free" },
	{ 0xb87c0c9f, "gpiochip_generic_request" },
	{ 0x30062a8, "devm_gpiochip_add_data_with_key" },
	{ 0x92ea19f, "pin_get_name" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x7c02aadb, "of_property_read_string_helper" },
	{ 0xb1e12d81, "krealloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x1c9248ef, "of_prop_next_string" },
	{ 0xd740362b, "seq_printf" },
	{ 0x71d59aa9, "pinctrl_dev_get_drvdata" },
	{ 0xf7670ccd, "pinctrl_add_gpio_range" },
	{ 0xc0cb77dc, "devm_pinctrl_register" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x882c7dd6, "of_device_get_match_data" },
	{ 0x5110cd07, "of_alias_get_id" },
	{ 0x841c2a67, "of_node_name_eq" },
	{ 0x1dc7fa5f, "devm_ioremap" },
	{ 0x2e29445c, "platform_get_resource" },
	{ 0x98cf60b3, "strlen" },
	{ 0x5a921311, "strncmp" },
	{ 0x253af43d, "delayed_work_timer_fn" },
	{ 0xbf57e89e, "queue_delayed_work_on" },
	{ 0x9b91176c, "pinctrl_force_sleep" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0xb9c425de, "register_syscore_ops" },
	{ 0x95575c33, "__tracepoint_rwmmio_write" },
	{ 0x19ebf04e, "__tracepoint_rwmmio_post_read" },
	{ 0xa035d76e, "__tracepoint_rwmmio_read" },
	{ 0x30897ed2, "irq_find_mapping" },
	{ 0x3dfeaa4, "regmap_update_bits_base" },
	{ 0xbc7a4422, "_dev_warn" },
	{ 0x4ec54e78, "bitmap_to_arr32" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0xbf5d553, "irq_set_chip_and_handler_name" },
	{ 0x20a789ac, "irq_set_chip_data" },
	{ 0xc7783f5b, "irq_domain_xlate_twocell" },
	{ 0x73d2ee76, "__irq_domain_add" },
	{ 0x918a23c0, "gpiochip_unlock_as_irq" },
	{ 0x1af638e6, "gpiochip_lock_as_irq" },
	{ 0xee0968d4, "handle_level_irq" },
	{ 0x474af077, "handle_edge_irq" },
	{ 0xc5850110, "printk" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x31dfd5cd, "__log_write_mmio" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x6980ea4b, "__log_post_read_mmio" },
	{ 0xcf1211a8, "__log_read_mmio" },
	{ 0x7ceaf0d5, "generic_handle_irq" },
	{ 0xfa8a5bb0, "devm_request_threaded_irq" },
	{ 0xea78f66e, "regmap_write" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0x8eff6041, "_dev_info" },
	{ 0x482954a5, "syscon_regmap_lookup_by_phandle" },
	{ 0x89122253, "irq_set_chained_handler_and_data" },
	{ 0xcc23d1e5, "irq_of_parse_and_map" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0x6ca7c29e, "of_find_property" },
	{ 0x488eb4e2, "of_match_node" },
	{ 0x69601c70, "of_get_next_child" },
	{ 0x53833461, "irq_domain_remove" },
	{ 0x68c058f2, "devm_kmemdup" },
	{ 0x5ed4c6ae, "_dev_err" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Csamsung,exynos5433-pinctrl");
MODULE_ALIAS("of:N*T*Csamsung,exynos5433-pinctrlC*");
MODULE_ALIAS("of:N*T*Csamsung,exynos7-pinctrl");
MODULE_ALIAS("of:N*T*Csamsung,exynos7-pinctrlC*");
MODULE_ALIAS("of:N*T*Csamsung,exynos9820-pinctrl");
MODULE_ALIAS("of:N*T*Csamsung,exynos9820-pinctrlC*");
MODULE_ALIAS("of:N*T*Csamsung,exynos2100-pinctrl");
MODULE_ALIAS("of:N*T*Csamsung,exynos2100-pinctrlC*");
MODULE_ALIAS("of:N*T*Csamsung,s5e9925-pinctrl");
MODULE_ALIAS("of:N*T*Csamsung,s5e9925-pinctrlC*");
MODULE_ALIAS("of:N*T*Csamsung,s5e9925_evt0-pinctrl");
MODULE_ALIAS("of:N*T*Csamsung,s5e9925_evt0-pinctrlC*");
MODULE_ALIAS("of:N*T*Csamsung,s5e8825-pinctrl");
MODULE_ALIAS("of:N*T*Csamsung,s5e8825-pinctrlC*");
