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
	{ 0x549525ef, "handle_nested_irq" },
	{ 0x9a7402a8, "gpiod_get_raw_value" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0xd67517d1, "irq_get_irq_data" },
	{ 0xbf5d553, "irq_set_chip_and_handler_name" },
	{ 0x1a93828e, "gpiod_direction_input" },
	{ 0x2c531865, "gpio_to_desc" },
	{ 0xa471896, "gpiod_to_irq" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x2072ee9b, "request_threaded_irq" },
	{ 0xee0968d4, "handle_level_irq" },
	{ 0x20a789ac, "irq_set_chip_data" },
	{ 0xfe990052, "gpio_free" },
	{ 0x47229b5c, "gpio_request" },
	{ 0xbc7a4422, "_dev_warn" },
	{ 0x8f471ada, "i2c_del_driver" },
	{ 0x6ca7c29e, "of_find_property" },
	{ 0x982b7d12, "of_get_named_gpio_flags" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x631a9eb2, "i2c_unregister_device" },
	{ 0x3ffe901e, "mfd_remove_devices" },
	{ 0x6994009e, "device_init_wakeup" },
	{ 0xd09b936a, "mfd_add_devices" },
	{ 0xef95a78b, "i2c_new_dummy_device" },
	{ 0x574add77, "__mutex_init" },
	{ 0x5db075d0, "__irq_alloc_descs" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0x4f72f07e, "i2c_register_driver" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x20aa1e26, "i2c_smbus_write_word_data" },
	{ 0x32b7680d, "i2c_smbus_write_i2c_block_data" },
	{ 0x610b7c49, "i2c_smbus_write_byte_data" },
	{ 0x2b912c5c, "i2c_smbus_read_word_data" },
	{ 0x5b8aa93e, "i2c_smbus_read_i2c_block_data" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0xc5850110, "printk" },
	{ 0xae87eb36, "i2c_smbus_read_byte_data" },
	{ 0xeb9065d9, "mutex_lock" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:s2mu106");
