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
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x95575c33, "__tracepoint_rwmmio_write" },
	{ 0xd994ecee, "cpu_all_bits" },
	{ 0x19ebf04e, "__tracepoint_rwmmio_post_read" },
	{ 0xa035d76e, "__tracepoint_rwmmio_read" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0x79525c69, "amba_driver_unregister" },
	{ 0x3dbec7e0, "dma_async_device_unregister" },
	{ 0x2269b80c, "devm_free_irq" },
	{ 0x5d4ef795, "of_dma_controller_free" },
	{ 0x37a0cba, "kfree" },
	{ 0xd8ed0ca2, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xac3099d, "__pm_runtime_use_autosuspend" },
	{ 0xd740362b, "seq_printf" },
	{ 0xa2aa781e, "seq_puts" },
	{ 0x4f731e2b, "single_open" },
	{ 0xef42eddb, "single_release" },
	{ 0xb9997d36, "seq_read" },
	{ 0xad9f2705, "seq_lseek" },
	{ 0x63ef7ca7, "debugfs_create_file" },
	{ 0xbce531fc, "dma_get_slave_channel" },
	{ 0x87b8798d, "sg_next" },
	{ 0x8637ac5d, "__pm_runtime_resume" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x9cb025a4, "dma_free_attrs" },
	{ 0xff8e54c1, "dma_alloc_attrs" },
	{ 0x2364c85a, "tasklet_init" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0xaad910ab, "dmaengine_unmap_put" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xc5850110, "printk" },
	{ 0xfa8a5bb0, "devm_request_threaded_irq" },
	{ 0xedb7b09a, "__devm_reset_control_get" },
	{ 0xad0a8a5a, "of_get_property" },
	{ 0x6ca7c29e, "of_find_property" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0xbdc9a589, "dma_set_coherent_mask" },
	{ 0x77561cbf, "dma_set_mask" },
	{ 0x6c4b6684, "reset_control_assert" },
	{ 0x5b0864e7, "pm_runtime_set_autosuspend_delay" },
	{ 0x4eeda700, "pm_runtime_irq_safe" },
	{ 0xec01ee07, "of_dma_controller_register" },
	{ 0x9a9dd4b1, "dma_async_device_register" },
	{ 0xbc7a4422, "_dev_warn" },
	{ 0xb2210d64, "reset_control_deassert" },
	{ 0x8949766d, "dev_err_probe" },
	{ 0x33d29b07, "devm_ioremap_resource" },
	{ 0x31dfd5cd, "__log_write_mmio" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x2a7b4b03, "irq_set_affinity_hint" },
	{ 0x8081ce78, "pm_runtime_enable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xa7c8e259, "__pm_runtime_disable" },
	{ 0xf085eb5c, "amba_driver_register" },
	{ 0x6980ea4b, "__log_post_read_mmio" },
	{ 0xcf1211a8, "__log_read_mmio" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x23e1a5b7, "dma_async_tx_descriptor_init" },
	{ 0x2d7c2250, "dma_unmap_resource" },
	{ 0x6be11a94, "dma_map_resource" },
	{ 0xedc03953, "iounmap" },
	{ 0x6b4b2933, "__ioremap" },
	{ 0x8eff6041, "_dev_info" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x5ed4c6ae, "_dev_err" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("amba:d???41330");
