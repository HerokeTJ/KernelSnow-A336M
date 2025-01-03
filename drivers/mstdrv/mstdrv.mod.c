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
	{ 0xaed3d17e, "class_destroy" },
	{ 0xbf57e89e, "queue_delayed_work_on" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf8beca97, "cancel_delayed_work_sync" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x982b7d12, "of_get_named_gpio_flags" },
	{ 0xa15d438d, "device_destroy" },
	{ 0x37a0cba, "kfree" },
	{ 0xe3aa3619, "device_create_file" },
	{ 0x20f92f09, "device_create" },
	{ 0x13a54ed5, "__class_create" },
	{ 0x253af43d, "delayed_work_timer_fn" },
	{ 0x79cf5987, "init_timer_key" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0x2c531865, "gpio_to_desc" },
	{ 0x9a7402a8, "gpiod_get_raw_value" },
	{ 0x1eab2f9a, "TEEC_FinalizeContext" },
	{ 0x1e4f4e8, "TEEC_CloseSession" },
	{ 0x7f65e7b6, "TEEC_InvokeCommand" },
	{ 0xbca5b811, "TEEC_OpenSession" },
	{ 0x4c96b8bb, "TEEC_InitializeContext" },
	{ 0x12a38747, "usleep_range" },
	{ 0xc5850110, "printk" },
};

MODULE_INFO(depends, "tzdev");


MODULE_INFO(srcversion, "8626A559EC55964EC150928");
