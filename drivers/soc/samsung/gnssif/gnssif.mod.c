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
	{ 0xdcb764ad, "memset" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0x2c531865, "gpio_to_desc" },
	{ 0x9a7402a8, "gpiod_get_raw_value" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x2072ee9b, "request_threaded_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x9166fada, "strncpy" },
	{ 0x9218f181, "exynos_pmu_read" },
	{ 0xf93aae46, "__arm_smccc_smc" },
	{ 0x6869a197, "cal_gnss_active_clear" },
	{ 0x92edc1e4, "cal_gnss_init" },
	{ 0x587d93b4, "cal_gnss_status" },
	{ 0x53967169, "cal_gnss_reset_release" },
	{ 0x37b1bb2b, "cal_gnss_reset_assert" },
	{ 0x1dc7fa5f, "devm_ioremap" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0xc56a41e6, "vabits_actual" },
	{ 0x19ebf04e, "__tracepoint_rwmmio_post_read" },
	{ 0xa035d76e, "__tracepoint_rwmmio_read" },
	{ 0x95575c33, "__tracepoint_rwmmio_write" },
	{ 0x3e3bad0a, "__tasklet_hi_schedule" },
	{ 0x250f3ecf, "__netdev_alloc_skb" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x1270d593, "vmap" },
	{ 0xbf57e89e, "queue_delayed_work_on" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x6980ea4b, "__log_post_read_mmio" },
	{ 0xcf1211a8, "__log_read_mmio" },
	{ 0x31dfd5cd, "__log_write_mmio" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x253af43d, "delayed_work_timer_fn" },
	{ 0x79cf5987, "init_timer_key" },
	{ 0x2364c85a, "tasklet_init" },
	{ 0xe7900234, "exynos_soc_info" },
	{ 0x5a921311, "strncmp" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xf02aa937, "wait_for_completion_interruptible_timeout" },
	{ 0x2c69bc6e, "gnss_mbox_set_sr" },
	{ 0xba2d02a9, "gnss_mbox_get_sr" },
	{ 0x9a5ba2f9, "gnss_mbox_set_interrupt" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xd5171d4f, "gnss_mbox_clear_all_interrupt" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x7454ca26, "gnss_mbox_sw_reset" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0x82be9ad2, "gnss_mbox_unregister_irq" },
	{ 0xaa3caa56, "sysfs_create_group" },
	{ 0xde7874de, "itmon_notifier_chain_register" },
	{ 0x9c7a662b, "gnss_mbox_register_irq" },
	{ 0x2003709b, "platform_get_irq_byname" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0x8b9f70c7, "cpu_hwcaps" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x28230a3f, "wakeup_source_register" },
	{ 0xa4033df7, "dbg_snapshot_expire_watchdog" },
	{ 0xe27ed167, "skb_queue_purge" },
	{ 0xaf507de1, "__arch_copy_from_user" },
	{ 0xbcf85bc0, "__alloc_skb" },
	{ 0x890c62fc, "skb_put" },
	{ 0x6b2941b2, "__arch_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x590942c6, "skb_queue_head" },
	{ 0x6632d00d, "skb_dequeue" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xca920659, "skb_queue_tail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xc87c29e6, "__dev_kfree_skb_any" },
	{ 0x30d4bf39, "skb_trim" },
	{ 0xb5ab3a92, "skb_pull" },
	{ 0x3801bb9b, "skb_clone" },
	{ 0x8a25ae5d, "pm_wakeup_ws_event" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xa9941a8b, "__pm_relax" },
	{ 0x6331d19e, "misc_register" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x36d574de, "devm_clk_get" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0xea5339e4, "of_reserved_mem_lookup" },
	{ 0x79746f10, "of_parse_phandle" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0x9cf0dacc, "of_property_read_string" },
	{ 0xd604c3f, "devm_kfree" },
	{ 0xd026d214, "sysfs_create_groups" },
	{ 0xc5850110, "printk" },
	{ 0x503a285e, "__platform_driver_register" },
};

MODULE_INFO(depends, "exynos-pmu-if,cmupmucal,exynos-chipid_v2,gnss_mbox,exynos-itmon,dss");

MODULE_ALIAS("of:N*T*Csamsung,exynos-gnss");
MODULE_ALIAS("of:N*T*Csamsung,exynos-gnssC*");
