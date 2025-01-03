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
	{ 0xdcb764ad, "memset" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0x480c3073, "iommu_report_device_fault" },
	{ 0x51e77c97, "pfn_valid" },
	{ 0x6d63d464, "secdbg_exin_set_sysmmu" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf93aae46, "__arm_smccc_smc" },
	{ 0xf1e046cc, "panic" },
	{ 0x9cf0dacc, "of_property_read_string" },
	{ 0xcdd6770e, "iommu_group_for_each_dev" },
	{ 0xb1454ef1, "platform_bus_type" },
	{ 0x95575c33, "__tracepoint_rwmmio_write" },
	{ 0xe4bbc1dd, "kimage_voffset" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0xc56a41e6, "vabits_actual" },
	{ 0x8900b200, "kmalloc_caches" },
	{ 0x19ebf04e, "__tracepoint_rwmmio_post_read" },
	{ 0xa035d76e, "__tracepoint_rwmmio_read" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xa6f6226c, "kasan_flag_enabled" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0xa7c8e259, "__pm_runtime_disable" },
	{ 0xae4b2889, "kmem_cache_destroy" },
	{ 0xfcf513bb, "device_initialize" },
	{ 0xcbd12fd2, "bus_set_iommu" },
	{ 0x612f3d20, "kmem_cache_create" },
	{ 0x54915ecc, "devres_alloc_node" },
	{ 0xb1e12d81, "krealloc" },
	{ 0x215b8cfc, "devres_add" },
	{ 0x8971746e, "iommu_device_unlink" },
	{ 0x98bb9c36, "iommu_fwspec_add_ids" },
	{ 0xaf40724, "iommu_alloc_resv_region" },
	{ 0xad0a8a5a, "of_get_property" },
	{ 0x29ba86d8, "of_n_size_cells" },
	{ 0xc298fad8, "of_n_addr_cells" },
	{ 0xbc44cef7, "put_device" },
	{ 0xea08eb76, "of_find_node_with_property" },
	{ 0xc66b77b1, "iommu_group_set_iommudata" },
	{ 0x68bc512b, "of_find_device_by_node" },
	{ 0x79746f10, "of_parse_phandle" },
	{ 0xce5d44ea, "iommu_group_get" },
	{ 0x9d615d17, "iommu_fwspec_free" },
	{ 0x68426428, "device_link_del" },
	{ 0x92babff, "device_link_add" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0x56470118, "__warn_printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x55639ff8, "of_get_dma_window" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xd653b126, "sched_clock" },
	{ 0x31dfd5cd, "__log_write_mmio" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xd55ad93b, "iommu_group_get_iommudata" },
	{ 0x25386806, "dma_sync_single_for_device" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0xd419eeb6, "kmem_cache_free" },
	{ 0x37a0cba, "kfree" },
	{ 0xddf3ef3c, "iommu_put_dma_cookie" },
	{ 0xf55e2664, "iommu_get_dma_cookie" },
	{ 0x4ba1ee76, "kmem_cache_alloc" },
	{ 0xc5850110, "printk" },
	{ 0x5f9e9913, "of_property_count_elems_of_size" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0x6ca7c29e, "of_find_property" },
	{ 0xa8a4448c, "of_property_read_u32_index" },
	{ 0x871df5fa, "__pm_runtime_idle" },
	{ 0x6980ea4b, "__log_post_read_mmio" },
	{ 0xcf1211a8, "__log_read_mmio" },
	{ 0x8637ac5d, "__pm_runtime_resume" },
	{ 0xcfd14bde, "__alloc_pages_nodemask" },
	{ 0x5a095c99, "__free_pages" },
	{ 0x282a7b02, "split_page" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0x664bcf31, "iommu_device_sysfs_remove" },
	{ 0x793e0685, "iommu_device_unregister" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0xcc8b1822, "iommu_device_register" },
	{ 0xf0e147e0, "iommu_device_sysfs_add" },
	{ 0x8081ce78, "pm_runtime_enable" },
	{ 0x8eff6041, "_dev_info" },
	{ 0x36d574de, "devm_clk_get" },
	{ 0xfa8a5bb0, "devm_request_threaded_irq" },
	{ 0xaf189c2c, "platform_get_irq" },
	{ 0x33d29b07, "devm_ioremap_resource" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0x2e29445c, "platform_get_resource" },
	{ 0x503a285e, "__platform_driver_register" },
};

MODULE_INFO(depends, "sec_debug_extra_info");

