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
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0x8b9f70c7, "cpu_hwcaps" },
	{ 0xaf507de1, "__arch_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x95575c33, "__tracepoint_rwmmio_write" },
	{ 0x4150a3aa, "vb2_plane_cookie" },
	{ 0xdc783b70, "v4l2_m2m_next_buf" },
	{ 0x31dfd5cd, "__log_write_mmio" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xffdfd145, "v4l2_m2m_qbuf" },
	{ 0xd82fa258, "v4l2_m2m_get_vq" },
	{ 0xbc7a4422, "_dev_warn" },
	{ 0x9166fada, "strncpy" },
	{ 0x8aa2828c, "v4l2_ctrl_log_status" },
	{ 0xb0151eb7, "v4l2_m2m_ioctl_streamoff" },
	{ 0x194194bf, "v4l2_m2m_ioctl_streamon" },
	{ 0x1650b837, "v4l2_m2m_ioctl_dqbuf" },
	{ 0x7214ae03, "v4l2_m2m_ioctl_querybuf" },
	{ 0xfa07348f, "v4l2_m2m_ioctl_reqbufs" },
	{ 0xbef09d5c, "v4l2_ctrl_new_custom" },
	{ 0x663d2402, "v4l2_ctrl_new_std_menu" },
	{ 0x3da5d575, "v4l2_ctrl_new_std" },
	{ 0x48598beb, "v4l2_ctrl_handler_init_class" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x97404e38, "vb2_dma_sg_memops" },
	{ 0x8900b200, "kmalloc_caches" },
	{ 0x19ebf04e, "__tracepoint_rwmmio_post_read" },
	{ 0xa035d76e, "__tracepoint_rwmmio_read" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0xa7a00749, "exynos_pm_qos_update_request" },
	{ 0xf847428f, "iommu_unregister_device_fault_handler" },
	{ 0x8fe79d0e, "exynos_pm_qos_remove_request" },
	{ 0x1413a585, "exynos_pm_qos_request_active" },
	{ 0x52a1f6ef, "__video_register_device" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x8637ac5d, "__pm_runtime_resume" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x72cd0f7f, "mod_timer" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x815588a6, "clk_enable" },
	{ 0xc5850110, "printk" },
	{ 0x8b075cad, "v4l2_m2m_buf_queue" },
	{ 0xaab5c4bc, "vb2_wait_for_all_buffers" },
	{ 0x78ec79c1, "dma_buf_detach" },
	{ 0xe1506dd, "dma_buf_unmap_attachment" },
	{ 0x20d2f8c3, "dma_buf_map_attachment" },
	{ 0x23ce83ac, "dma_buf_attach" },
	{ 0x6a6d5fb3, "dma_buf_get" },
	{ 0xb43f5074, "vb2_ops_wait_finish" },
	{ 0x4517b427, "vb2_ops_wait_prepare" },
	{ 0xe690b40a, "vb2_queue_init" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0x4207749, "video_devdata" },
	{ 0x37a0cba, "kfree" },
	{ 0xb007f7ca, "v4l2_fh_exit" },
	{ 0x8a86946c, "v4l2_fh_del" },
	{ 0xb955ffde, "v4l2_ctrl_handler_free" },
	{ 0x4b7ae0c, "v4l2_m2m_ctx_release" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xd9db2e55, "v4l2_fh_add" },
	{ 0x49354d39, "v4l2_m2m_ctx_init" },
	{ 0x35d6e3e8, "v4l2_fh_init" },
	{ 0x2ab37d60, "v4l2_m2m_fop_mmap" },
	{ 0x7207d3a9, "video_ioctl2" },
	{ 0xa61b18c9, "v4l2_m2m_fop_poll" },
	{ 0xe690bb6b, "v4l2_device_unregister" },
	{ 0xc6fca5ad, "v4l2_m2m_release" },
	{ 0x730f2eae, "v4l2_m2m_init" },
	{ 0x284b3c6c, "video_device_release" },
	{ 0x574add77, "__mutex_init" },
	{ 0x96848186, "scnprintf" },
	{ 0xa0b2d8ce, "video_device_alloc" },
	{ 0x6cd98629, "v4l2_device_register" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0x2e1ca751, "clk_put" },
	{ 0x36d574de, "devm_clk_get" },
	{ 0x171bbe32, "vb2_buffer_done" },
	{ 0xd0d42e4c, "v4l2_m2m_buf_remove" },
	{ 0x871df5fa, "__pm_runtime_idle" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x6980ea4b, "__log_post_read_mmio" },
	{ 0xcf1211a8, "__log_read_mmio" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x589c9e9f, "v4l2_m2m_job_finish" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xaa4008af, "del_timer" },
	{ 0x459e133f, "v4l2_m2m_get_curr_priv" },
	{ 0xfa8a5bb0, "devm_request_threaded_irq" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0x79cf5987, "init_timer_key" },
	{ 0xf3e79ed8, "iommu_register_device_fault_handler" },
	{ 0x74ebf29f, "exynos_pm_qos_add_request_trace" },
	{ 0x8081ce78, "pm_runtime_enable" },
	{ 0x8eff6041, "_dev_info" },
	{ 0x5110cd07, "of_alias_get_id" },
	{ 0x488eb4e2, "of_match_node" },
	{ 0x33d29b07, "devm_ioremap_resource" },
	{ 0x2e29445c, "platform_get_resource" },
	{ 0x77561cbf, "dma_set_mask" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x1000e51, "schedule" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
};

MODULE_INFO(depends, "videobuf2-dma-sg,exynos_pm_qos");

MODULE_ALIAS("of:N*T*Csamsung,exynos-jpeg");
MODULE_ALIAS("of:N*T*Csamsung,exynos-jpegC*");
MODULE_ALIAS("of:N*T*Csamsung,exynos8890-jpeg");
MODULE_ALIAS("of:N*T*Csamsung,exynos8890-jpegC*");
MODULE_ALIAS("of:N*T*Csamsung,exynos7870-jpeg");
MODULE_ALIAS("of:N*T*Csamsung,exynos7870-jpegC*");
MODULE_ALIAS("of:N*T*Csamsung,exynos7420-jpeg");
MODULE_ALIAS("of:N*T*Csamsung,exynos7420-jpegC*");
MODULE_ALIAS("of:N*T*Csamsung,exynos3475-jpeg");
MODULE_ALIAS("of:N*T*Csamsung,exynos3475-jpegC*");
