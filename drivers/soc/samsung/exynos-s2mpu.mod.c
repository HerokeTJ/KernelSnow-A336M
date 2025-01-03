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
	{ 0xe4bbc1dd, "kimage_voffset" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0xc56a41e6, "vabits_actual" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0x8fe79d0e, "exynos_pm_qos_remove_request" },
	{ 0x6ca7c29e, "of_find_property" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xa4033df7, "dbg_snapshot_expire_watchdog" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0x574add77, "__mutex_init" },
	{ 0x74ebf29f, "exynos_pm_qos_add_request_trace" },
	{ 0x8eff6041, "_dev_info" },
	{ 0x9cf0dacc, "of_property_read_string" },
	{ 0xe3aa3619, "device_create_file" },
	{ 0xfa8a5bb0, "devm_request_threaded_irq" },
	{ 0xcc23d1e5, "irq_of_parse_and_map" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0x7c02aadb, "of_property_read_string_helper" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0xea5339e4, "of_reserved_mem_lookup" },
	{ 0x79746f10, "of_parse_phandle" },
	{ 0x65f9af5a, "of_find_compatible_node" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0xa7a00749, "exynos_pm_qos_update_request" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0x50f85302, "__arm_smccc_hvc" },
	{ 0x5a921311, "strncmp" },
	{ 0xc5850110, "printk" },
};

MODULE_INFO(depends, "exynos_pm_qos,dss");

MODULE_ALIAS("of:N*T*Csamsung,exynos-s2mpu");
MODULE_ALIAS("of:N*T*Csamsung,exynos-s2mpuC*");
