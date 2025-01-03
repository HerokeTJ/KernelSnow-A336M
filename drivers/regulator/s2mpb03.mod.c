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
	{ 0x8f471ada, "i2c_del_driver" },
	{ 0x8eff6041, "_dev_info" },
	{ 0x46045dd7, "kstrtou8" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd8e43ff7, "pmic_device_destroy" },
	{ 0x164eb7f6, "device_remove_file" },
	{ 0xe3aa3619, "device_create_file" },
	{ 0xd992b90f, "pmic_device_create" },
	{ 0x4fdece8c, "dev_driver_string" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0xd2040a8b, "rdev_get_drvdata" },
	{ 0xed6c051a, "regulator_map_voltage_linear" },
	{ 0x9e6cb2a8, "regulator_list_voltage_linear" },
	{ 0x6ca7c29e, "of_find_property" },
	{ 0xe9c56740, "of_get_regulator_init_data" },
	{ 0xbc7a4422, "_dev_warn" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x69601c70, "of_get_next_child" },
	{ 0x87f6e3eb, "of_find_node_by_name" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0x9212e3ba, "devm_regulator_register" },
	{ 0x574add77, "__mutex_init" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0x4f72f07e, "i2c_register_driver" },
	{ 0x32b7680d, "i2c_smbus_write_i2c_block_data" },
	{ 0x610b7c49, "i2c_smbus_write_byte_data" },
	{ 0x2b912c5c, "i2c_smbus_read_word_data" },
	{ 0x5b8aa93e, "i2c_smbus_read_i2c_block_data" },
	{ 0xc5850110, "printk" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0xae87eb36, "i2c_smbus_read_byte_data" },
	{ 0xeb9065d9, "mutex_lock" },
};

MODULE_INFO(depends, "pmic_class");

