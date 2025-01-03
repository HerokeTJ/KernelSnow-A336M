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
	{ 0x4f72f07e, "i2c_register_driver" },
	{ 0x31a18fc8, "sensor_cis_compensate_gain_for_extremely_br" },
	{ 0xdf5baf2b, "sensor_cis_do_div64" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9cf0dacc, "of_property_read_string" },
	{ 0x918b47d0, "sensor_cis_probe" },
	{ 0x12a38747, "usleep_range" },
	{ 0x1206ff9, "sensor_cis_calc_dgain_permile" },
	{ 0x4aa99839, "sensor_cis_calc_again_permile" },
	{ 0x8ca62082, "sensor_cis_calc_again_code" },
	{ 0x929b17, "is_get_is_core" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe5f6536a, "sensor_cis_check_rev" },
	{ 0xaf700b7f, "sensor_cis_dump_registers" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0xb22cad38, "sensor_cis_calc_dgain_code" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x85765004, "is_get_debug_sensor" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0x709980c6, "is_sensor_addr8_read8" },
	{ 0x1d6687b5, "is_sensor_addr8_write8" },
	{ 0x900eab7c, "sensor_cis_set_registers_addr8" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0xef8f1f82, "memlog_write_printf" },
	{ 0xde04b58d, "is_debug_get" },
	{ 0xc5850110, "printk" },
};

MODULE_INFO(depends, "fimc-is,memlogger");

MODULE_ALIAS("of:N*T*Csamsung,exynos-is-cis-gc02m1");
MODULE_ALIAS("of:N*T*Csamsung,exynos-is-cis-gc02m1C*");
MODULE_ALIAS("of:N*T*Csamsung,exynos-is-cis-gc02m1-macro");
MODULE_ALIAS("of:N*T*Csamsung,exynos-is-cis-gc02m1-macroC*");
