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
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe3aa3619, "device_create_file" },
	{ 0x30bbe06f, "sec_device_create" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x8948c619, "kobject_uevent" },
	{ 0xc5850110, "printk" },
	{ 0x9c6febfc, "add_uevent_var" },
	{ 0xd653b126, "sched_clock" },
	{ 0x732ac580, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x95575c33, "__tracepoint_rwmmio_write" },
	{ 0x19ebf04e, "__tracepoint_rwmmio_post_read" },
	{ 0xa035d76e, "__tracepoint_rwmmio_read" },
	{ 0x263c3152, "bcmp" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0x85b05b79, "dw_mci_runtime_resume" },
	{ 0xd319d5e3, "dw_mci_runtime_suspend" },
	{ 0xed52c306, "pm_runtime_force_resume" },
	{ 0xd69360d3, "pm_runtime_force_suspend" },
	{ 0xf697059d, "dw_mci_pltfm_remove" },
	{ 0xa7c8e259, "__pm_runtime_disable" },
	{ 0x5ec1d781, "__pm_runtime_set_status" },
	{ 0xd6da61f, "dw_mci_pltfm_register" },
	{ 0x8081ce78, "pm_runtime_enable" },
	{ 0x488eb4e2, "of_match_node" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0x39a968c1, "cal_pll_mmc_set_ssc" },
	{ 0x4f247bb1, "cal_pll_mmc_check" },
	{ 0x9a7402a8, "gpiod_get_raw_value" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xfa8a5bb0, "devm_request_threaded_irq" },
	{ 0x2c531865, "gpio_to_desc" },
	{ 0xa471896, "gpiod_to_irq" },
	{ 0x47229b5c, "gpio_request" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x5c39520d, "pinctrl_select_state" },
	{ 0xb6225276, "mmc_wait_for_req" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0x982b7d12, "of_get_named_gpio_flags" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0x5110cd07, "of_alias_get_id" },
	{ 0x482954a5, "syscon_regmap_lookup_by_phandle" },
	{ 0x79a35362, "pinctrl_lookup_state" },
	{ 0xaa48f219, "devm_pinctrl_get" },
	{ 0xad0a8a5a, "of_get_property" },
	{ 0xef4b763b, "of_device_is_compatible" },
	{ 0xbc7a4422, "_dev_warn" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x8eff6041, "_dev_info" },
	{ 0x3dfeaa4, "regmap_update_bits_base" },
	{ 0x6ca7c29e, "of_find_property" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0xb0ee738d, "of_get_child_by_name" },
	{ 0x31dfd5cd, "__log_write_mmio" },
	{ 0x6980ea4b, "__log_post_read_mmio" },
	{ 0xcf1211a8, "__log_read_mmio" },
	{ 0x5ed4c6ae, "_dev_err" },
};

MODULE_INFO(depends, "sec_class,dw_mmc,dw_mmc-pltfm,cmupmucal");

MODULE_ALIAS("of:N*T*Csamsung,exynos-dw-mshc");
MODULE_ALIAS("of:N*T*Csamsung,exynos-dw-mshcC*");
