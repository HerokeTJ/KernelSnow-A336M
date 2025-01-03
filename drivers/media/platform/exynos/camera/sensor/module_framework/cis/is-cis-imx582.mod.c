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
	{ 0xdcb764ad, "memset" },
	{ 0x4829a47e, "memcpy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0x4f72f07e, "i2c_register_driver" },
	{ 0xa6542c9e, "sensor_cis_wait_streamon" },
	{ 0x7c0033f9, "sensor_cis_wait_streamoff" },
	{ 0x31a18fc8, "sensor_cis_compensate_gain_for_extremely_br" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9cf0dacc, "of_property_read_string" },
	{ 0x918b47d0, "sensor_cis_probe" },
	{ 0xdc0bceda, "is_sensor_write16_array" },
	{ 0x1206ff9, "sensor_cis_calc_dgain_permile" },
	{ 0x8d4da99, "is_sensor_write8_array" },
	{ 0xb22cad38, "sensor_cis_calc_dgain_code" },
	{ 0xa204ea60, "is_sensor_write16" },
	{ 0x4a959196, "sensor_cis_set_registers" },
	{ 0x85765004, "is_get_debug_sensor" },
	{ 0xaf700b7f, "sensor_cis_dump_registers" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xb945c55a, "is_sensor_read16" },
	{ 0xe20adbbb, "is_sensor_write8_sequential" },
	{ 0xe4f891dd, "is_sec_get_cal_buf" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0xdd7b4752, "is_sensor_read8" },
	{ 0xe7055ca1, "is_sensor_write8" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0xef8f1f82, "memlog_write_printf" },
	{ 0xde04b58d, "is_debug_get" },
	{ 0xc5850110, "printk" },
};

MODULE_INFO(depends, "fimc-is,memlogger");

MODULE_ALIAS("of:N*T*Csamsung,exynos-is-cis-imx582");
MODULE_ALIAS("of:N*T*Csamsung,exynos-is-cis-imx582C*");
