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
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0x6ea6ad8a, "exynos_acpm_read_reg" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0x98548e9c, "exynos_acpm_write_reg" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd8e43ff7, "pmic_device_destroy" },
	{ 0x164eb7f6, "device_remove_file" },
	{ 0xe3aa3619, "device_create_file" },
	{ 0xd992b90f, "pmic_device_create" },
	{ 0x4fdece8c, "dev_driver_string" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0x3be49688, "rdev_get_id" },
	{ 0xd2040a8b, "rdev_get_drvdata" },
	{ 0xed6c051a, "regulator_map_voltage_linear" },
	{ 0x9e6cb2a8, "regulator_list_voltage_linear" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0xe9c56740, "of_get_regulator_init_data" },
	{ 0xbc7a4422, "_dev_warn" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x69601c70, "of_get_next_child" },
	{ 0x87f6e3eb, "of_find_node_by_name" },
	{ 0xa8a4448c, "of_property_read_u32_index" },
	{ 0xad0a8a5a, "of_get_property" },
	{ 0x9212e3ba, "devm_regulator_register" },
	{ 0x574add77, "__mutex_init" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0x89bb5e08, "s2mpu14_update_reg" },
	{ 0x4eac7b81, "s2mpu14_read_reg" },
	{ 0xd584baf6, "s2mpu14_write_reg" },
	{ 0xc5850110, "printk" },
};

MODULE_INFO(depends, "exynos_acpm,pmic_class,s2mpu14_mfd");

MODULE_ALIAS("platform:s2mpu14-regulator");
