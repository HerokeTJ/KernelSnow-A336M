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
	{ 0x4829a47e, "memcpy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0x8900b200, "kmalloc_caches" },
	{ 0x95575c33, "__tracepoint_rwmmio_write" },
	{ 0x19ebf04e, "__tracepoint_rwmmio_post_read" },
	{ 0xa035d76e, "__tracepoint_rwmmio_read" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0x682c06ff, "i3c_master_unregister" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x9a7ee19f, "i3c_generic_ibi_recycle_slot" },
	{ 0x29131c93, "i3c_master_disec_locked" },
	{ 0x76fe3e05, "i3c_generic_ibi_free_pool" },
	{ 0x9256784e, "i3c_generic_ibi_alloc_pool" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x9c443f42, "i3c_master_enec_locked" },
	{ 0x37d1f1b2, "i3c_master_defslvs_locked" },
	{ 0x19e78db7, "i3c_master_add_i3c_dev_locked" },
	{ 0xd7263d68, "i3c_master_entdaa_locked" },
	{ 0x37a0cba, "kfree" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x5cd7229f, "i3c_master_set_info" },
	{ 0x63513af3, "i3c_master_get_free_addr" },
	{ 0x31dfd5cd, "__log_write_mmio" },
	{ 0x7f6f6b80, "i3c_master_queue_ibi" },
	{ 0xb133f9ea, "i3c_generic_ibi_get_free_slot" },
	{ 0x732ac580, "queue_work_on" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xa6257a2f, "complete" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x6980ea4b, "__log_post_read_mmio" },
	{ 0xcf1211a8, "__log_read_mmio" },
	{ 0xfa8a5bb0, "devm_request_threaded_irq" },
	{ 0xf936af1, "i3c_master_do_daa" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0xad0a8a5a, "of_get_property" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0x785009dd, "i3c_master_register" },
	{ 0xaf189c2c, "platform_get_irq" },
	{ 0x36d574de, "devm_clk_get" },
	{ 0x33d29b07, "devm_ioremap_resource" },
	{ 0x2e29445c, "platform_get_resource" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0x8eff6041, "_dev_info" },
	{ 0x503a285e, "__platform_driver_register" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Csamsung,exynos-i3c-hci");
MODULE_ALIAS("of:N*T*Csamsung,exynos-i3c-hciC*");
