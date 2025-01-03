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
	{ 0xc427c067, "init_net" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0x8b9f70c7, "cpu_hwcaps" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x98cf60b3, "strlen" },
	{ 0xe81e4e9b, "dev_get_by_name" },
	{ 0x5792f848, "strlcpy" },
	{ 0xaf507de1, "__arch_copy_from_user" },
	{ 0x6b2941b2, "__arch_copy_to_user" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x6331d19e, "misc_register" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf9a482f9, "msleep" },
	{ 0x943208f4, "netif_napi_add" },
	{ 0xb0420543, "register_netdev" },
	{ 0x281e7f55, "alloc_netdev_mqs" },
	{ 0xe7900234, "exynos_soc_info" },
	{ 0x62ad2053, "cpu_bit_bitmap" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x19ebf04e, "__tracepoint_rwmmio_post_read" },
	{ 0xa035d76e, "__tracepoint_rwmmio_read" },
	{ 0xe4bbc1dd, "kimage_voffset" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0xc56a41e6, "vabits_actual" },
	{ 0x95575c33, "__tracepoint_rwmmio_write" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0x2276db98, "kstrtoint" },
	{ 0x3c80c06c, "kstrtoull" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x96848186, "scnprintf" },
	{ 0x5a921311, "strncmp" },
	{ 0xfa8a5bb0, "devm_request_threaded_irq" },
	{ 0x2003709b, "platform_get_irq_byname" },
	{ 0xbdc9a589, "dma_set_coherent_mask" },
	{ 0x77561cbf, "dma_set_mask" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x8d21af02, "cpif_page_init_tmp_page" },
	{ 0x3c6afb5d, "cpif_page_pool_create" },
	{ 0xff8e54c1, "dma_alloc_attrs" },
	{ 0xf77555cd, "__memcpy_toio" },
	{ 0x5d112304, "__memcpy_fromio" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x6980ea4b, "__log_post_read_mmio" },
	{ 0xcf1211a8, "__log_read_mmio" },
	{ 0xfd08e9b6, "dev_queue_xmit" },
	{ 0xc30b6f92, "dma_unmap_page_attrs" },
	{ 0xc87c29e6, "__dev_kfree_skb_any" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xe2b85dd7, "__napi_alloc_skb" },
	{ 0x250f3ecf, "__netdev_alloc_skb" },
	{ 0x8ceb5594, "build_skb" },
	{ 0xe224c122, "cpif_page_alloc" },
	{ 0x20f420a, "dma_map_page_attrs" },
	{ 0x4fdece8c, "dev_driver_string" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x31dfd5cd, "__log_write_mmio" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xf1e046cc, "panic" },
	{ 0xde2e4fad, "devm_iounmap" },
	{ 0xd604c3f, "devm_kfree" },
	{ 0xd026d214, "sysfs_create_groups" },
	{ 0xde7874de, "itmon_notifier_chain_register" },
	{ 0xca1a569f, "exynos_s2mpu_notifier_call_register" },
	{ 0x6a5c3098, "exynos_get_idle_ip_index" },
	{ 0x2723dd3b, "devm_platform_ioremap_resource_byname" },
	{ 0x2a7b4b03, "irq_set_affinity_hint" },
	{ 0x90cd4355, "exynos_update_ip_idle_status" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x56b7e3b1, "__napi_schedule" },
	{ 0xd2891832, "napi_schedule_prep" },
	{ 0xd90bf8f, "napi_complete_done" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0x890c62fc, "skb_put" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x7b0a3e84, "cpif_memlog_log_obj" },
	{ 0xef8f1f82, "memlog_write_printf" },
	{ 0x8950aa66, "cpif_memlog_log_enabled" },
	{ 0xc5850110, "printk" },
};

MODULE_INFO(depends, "exynos-chipid_v2,cpif_page,exynos-itmon,exynos-s2mpu,exynos-cpupm,cpif_memlogger,memlogger");

MODULE_ALIAS("of:N*T*Csamsung,exynos-dit");
MODULE_ALIAS("of:N*T*Csamsung,exynos-ditC*");
