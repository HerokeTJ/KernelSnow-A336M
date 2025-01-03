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
	{ 0x19ebf04e, "__tracepoint_rwmmio_post_read" },
	{ 0xa035d76e, "__tracepoint_rwmmio_read" },
	{ 0x95575c33, "__tracepoint_rwmmio_write" },
	{ 0xe422656c, "exynos_eint_wake_mask_array" },
	{ 0xfdee4fc, "of_root" },
	{ 0x8900b200, "kmalloc_caches" },
	{ 0xa9941a8b, "__pm_relax" },
	{ 0xbf27df8c, "simple_attr_open" },
	{ 0xeb895e94, "simple_attr_release" },
	{ 0xd9bf06e9, "simple_attr_write" },
	{ 0x4a788936, "simple_attr_read" },
	{ 0xe2aa8e76, "generic_file_llseek" },
	{ 0x63ef7ca7, "debugfs_create_file" },
	{ 0x82b308e8, "debugfs_create_dir" },
	{ 0x2c531865, "gpio_to_desc" },
	{ 0xa471896, "gpiod_to_irq" },
	{ 0xb6ec8e7c, "exynos_eint_to_pin_num" },
	{ 0x45355328, "irq_to_desc" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x6980ea4b, "__log_post_read_mmio" },
	{ 0xcf1211a8, "__log_read_mmio" },
	{ 0x9218f181, "exynos_pmu_read" },
	{ 0x91e25445, "cal_pm_exit" },
	{ 0xc477f0e6, "cal_pm_earlywakeup" },
	{ 0x990e7b2e, "exynos_flexpmu_dbg_clr_wakeup_req" },
	{ 0x31dfd5cd, "__log_write_mmio" },
	{ 0x93acb5ce, "otg_is_connect" },
	{ 0x71e68591, "exynos_pmu_write" },
	{ 0xaf006eca, "cal_pm_enter" },
	{ 0xc899254d, "exynos_flexpmu_dbg_set_sleep_req" },
	{ 0x270496d6, "acpm_get_early_wakeup_count" },
	{ 0x4ce2c94c, "acpm_get_mif_request" },
	{ 0x37901e18, "acpm_get_apsocdn_count" },
	{ 0x3be3d208, "acpm_get_mifdn_count" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0x37a0cba, "kfree" },
	{ 0x7c02aadb, "of_property_read_string_helper" },
	{ 0x69601c70, "of_get_next_child" },
	{ 0x87f6e3eb, "of_find_node_by_name" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0x5f9e9913, "of_property_count_elems_of_size" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0xb9c425de, "register_syscore_ops" },
	{ 0x2a3901ee, "__pm_stay_awake" },
	{ 0x28230a3f, "wakeup_source_register" },
	{ 0xdc33c5a9, "of_iomap" },
	{ 0x65f9af5a, "of_find_compatible_node" },
	{ 0xc5850110, "printk" },
};

MODULE_INFO(depends, "pinctrl-samsung-core,exynos-pmu-if,cmupmucal,exynos-flexpmu-dbg,dwc3-exynos-usb");

