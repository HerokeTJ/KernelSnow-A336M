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
	{ 0xfdee4fc, "of_root" },
	{ 0xb2ba8ddb, "exynos_cal_pd_bts_sync" },
	{ 0x7c02aadb, "of_property_read_string_helper" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0xad727c11, "cal_pd_status" },
	{ 0x1098d94c, "register_btsops" },
	{ 0x5cf87584, "of_device_is_available" },
	{ 0x33d29b07, "devm_ioremap_resource" },
	{ 0xf6ceff9a, "of_address_to_resource" },
	{ 0x69601c70, "of_get_next_child" },
	{ 0xb9c425de, "register_syscore_ops" },
	{ 0x74ebf29f, "exynos_pm_qos_add_request_trace" },
	{ 0x574add77, "__mutex_init" },
	{ 0xd604c3f, "devm_kfree" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xbb4f4766, "simple_write_to_buffer" },
	{ 0xd740362b, "seq_printf" },
	{ 0x4f731e2b, "single_open" },
	{ 0xef42eddb, "single_release" },
	{ 0xb9997d36, "seq_read" },
	{ 0xad9f2705, "seq_lseek" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0xa7a00749, "exynos_pm_qos_update_request" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x63ef7ca7, "debugfs_create_file" },
	{ 0x82b308e8, "debugfs_create_dir" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0xc5850110, "printk" },
	{ 0xbc7a4422, "_dev_warn" },
	{ 0xefae1c39, "_dev_notice" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0xbcf94680, "devm_kstrdup" },
	{ 0xe2d5255a, "strcmp" },
};

MODULE_INFO(depends, "cmupmucal,exynos-btsops8825,exynos_pm_qos");

MODULE_ALIAS("of:N*T*Csamsung,exynos-bts");
MODULE_ALIAS("of:N*T*Csamsung,exynos-btsC*");
