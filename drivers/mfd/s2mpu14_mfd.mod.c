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
	{ 0x253af43d, "delayed_work_timer_fn" },
	{ 0x79cf5987, "init_timer_key" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x4fdece8c, "dev_driver_string" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xbb0c86a5, "blocking_notifier_chain_register" },
	{ 0xbf57e89e, "queue_delayed_work_on" },
	{ 0x8317ad7c, "blocking_notifier_call_chain" },
	{ 0x8f471ada, "i2c_del_driver" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xad0a8a5a, "of_get_property" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0x6994009e, "device_init_wakeup" },
	{ 0x40e625b5, "devm_mfd_add_devices" },
	{ 0x94acda2b, "devm_i2c_new_dummy_device" },
	{ 0x574add77, "__mutex_init" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0x4f72f07e, "i2c_register_driver" },
	{ 0x4595bea2, "exynos_acpm_update_reg" },
	{ 0x8ef350fe, "exynos_acpm_bulk_write" },
	{ 0x98548e9c, "exynos_acpm_write_reg" },
	{ 0x2bf63783, "exynos_acpm_bulk_read" },
	{ 0xc5850110, "printk" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0x6ea6ad8a, "exynos_acpm_read_reg" },
	{ 0xeb9065d9, "mutex_lock" },
};

MODULE_INFO(depends, "exynos_acpm");

MODULE_ALIAS("i2c:s2mpu14");
