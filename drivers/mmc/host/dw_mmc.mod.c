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
	{ 0x4829a47e, "memcpy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0x8900b200, "kmalloc_caches" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x95575c33, "__tracepoint_rwmmio_write" },
	{ 0x19ebf04e, "__tracepoint_rwmmio_post_read" },
	{ 0xa035d76e, "__tracepoint_rwmmio_read" },
	{ 0x6c8362b4, "regulator_disable" },
	{ 0xf3bd923d, "regulator_enable" },
	{ 0x698a75a0, "mmc_regulator_set_ocr" },
	{ 0xc36939c3, "mmc_remove_host" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x2276db98, "kstrtoint" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4fc8c1b0, "sysfs_create_file_ns" },
	{ 0xc5850110, "printk" },
	{ 0xba679ade, "debugfs_create_x64" },
	{ 0xd8ed0ca2, "__pm_runtime_suspend" },
	{ 0x8637ac5d, "__pm_runtime_resume" },
	{ 0xd740362b, "seq_printf" },
	{ 0x4f731e2b, "single_open" },
	{ 0xef42eddb, "single_release" },
	{ 0xb9997d36, "seq_read" },
	{ 0xad9f2705, "seq_lseek" },
	{ 0x4bef7eba, "debugfs_create_u32" },
	{ 0x63ef7ca7, "debugfs_create_file" },
	{ 0x5110cd07, "of_alias_get_id" },
	{ 0x69601c70, "of_get_next_child" },
	{ 0x48022310, "mmc_regulator_set_vqmmc" },
	{ 0xfdca5507, "mmc_gpio_get_ro" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xf8beca97, "cancel_delayed_work_sync" },
	{ 0xcee80cec, "mmc_free_host" },
	{ 0xa880e138, "mmc_add_host" },
	{ 0x6107d599, "mmc_of_parse" },
	{ 0x131f404, "mmc_regulator_get_supply" },
	{ 0x1ade7b26, "mmc_alloc_host" },
	{ 0x732ac580, "queue_work_on" },
	{ 0x290f2ad7, "sg_miter_next" },
	{ 0xc43bf18, "sdio_signal_irq" },
	{ 0xfa8a5bb0, "devm_request_threaded_irq" },
	{ 0xa7a00749, "exynos_pm_qos_update_request" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x302d9b76, "mmc_gpio_get_cd" },
	{ 0xd9148399, "mmc_detect_change" },
	{ 0xa77c6467, "sg_miter_stop" },
	{ 0x67d55d75, "dma_release_channel" },
	{ 0xb175f0a, "dma_sync_sg_for_device" },
	{ 0x662c3c79, "dma_request_chan" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x335a4cc9, "dma_unmap_sg_attrs" },
	{ 0xa5aafd87, "dma_sync_sg_for_cpu" },
	{ 0xabfad8bd, "dmam_alloc_attrs" },
	{ 0x57ec862f, "device_property_read_string_array" },
	{ 0xbdc9a589, "dma_set_coherent_mask" },
	{ 0x77561cbf, "dma_set_mask" },
	{ 0xbf57e89e, "queue_delayed_work_on" },
	{ 0x90b51f72, "dma_map_sg_attrs" },
	{ 0x87b8798d, "sg_next" },
	{ 0xea1aa32a, "sg_miter_start" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x72cd0f7f, "mod_timer" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x92acfde7, "mmc_request_done" },
	{ 0xaa4008af, "del_timer" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xd653b126, "sched_clock" },
	{ 0x90cd4355, "exynos_update_ip_idle_status" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0x3e7bc22f, "device_property_read_u32_array" },
	{ 0xedb7b09a, "__devm_reset_control_get" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0x6ca7c29e, "of_find_property" },
	{ 0x70bcd326, "device_property_present" },
	{ 0xad0a8a5a, "of_get_property" },
	{ 0x31dfd5cd, "__log_write_mmio" },
	{ 0x6980ea4b, "__log_post_read_mmio" },
	{ 0xcf1211a8, "__log_read_mmio" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd09be6b4, "mmc_can_gpio_cd" },
	{ 0xf15e728e, "del_timer_sync" },
	{ 0x8fe79d0e, "exynos_pm_qos_remove_request" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x74ebf29f, "exynos_pm_qos_add_request_trace" },
	{ 0x253af43d, "delayed_work_timer_fn" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x2364c85a, "tasklet_init" },
	{ 0x8eff6041, "_dev_info" },
	{ 0x56470118, "__warn_printk" },
	{ 0x79cf5987, "init_timer_key" },
	{ 0x6a5c3098, "exynos_get_idle_ip_index" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0xb2210d64, "reset_control_deassert" },
	{ 0x12a38747, "usleep_range" },
	{ 0x6c4b6684, "reset_control_assert" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xbc7a4422, "_dev_warn" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x36d574de, "devm_clk_get" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb43f9365, "ktime_get" },
};

MODULE_INFO(depends, "exynos_pm_qos,exynos-cpupm");

