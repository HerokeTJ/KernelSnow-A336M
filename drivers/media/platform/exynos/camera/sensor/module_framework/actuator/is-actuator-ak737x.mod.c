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
	{ 0x8900b200, "kmalloc_caches" },
	{ 0x4f72f07e, "i2c_register_driver" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0x6ca7c29e, "of_find_property" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3b8959c2, "v4l2_i2c_subdev_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x929b17, "is_get_is_core" },
	{ 0xc0df6ec8, "is_get_sysfs_actuator" },
	{ 0x85765004, "is_get_debug_sensor" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0x709980c6, "is_sensor_addr8_read8" },
	{ 0x1d6687b5, "is_sensor_addr8_write8" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0x12a38747, "usleep_range" },
	{ 0xad0a8a5a, "of_get_property" },
	{ 0xef8f1f82, "memlog_write_printf" },
	{ 0xde04b58d, "is_debug_get" },
	{ 0xc5850110, "printk" },
};

MODULE_INFO(depends, "fimc-is,memlogger");

MODULE_ALIAS("of:N*T*Csamsung,exynos-is-actuator-ak737x");
MODULE_ALIAS("of:N*T*Csamsung,exynos-is-actuator-ak737xC*");
