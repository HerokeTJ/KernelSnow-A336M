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
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0xe8a28de, "platform_device_unregister" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0x87f6e3eb, "of_find_node_by_name" },
	{ 0xcc179d8b, "device_for_each_child" },
	{ 0xe59e7d7b, "of_platform_populate" },
	{ 0x38193182, "__devm_iio_device_register" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0xcf93e481, "devm_iio_device_alloc" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0x34976353, "acpm_ipc_release_channel" },
	{ 0xc5850110, "printk" },
	{ 0xf5f585ea, "acpm_ipc_send_data" },
	{ 0xa7e888c3, "acpm_ipc_request_channel" },
};

MODULE_INFO(depends, "exynos_acpm");

MODULE_ALIAS("of:N*T*Cs2mpu13-gpadc");
MODULE_ALIAS("of:N*T*Cs2mpu13-gpadcC*");
