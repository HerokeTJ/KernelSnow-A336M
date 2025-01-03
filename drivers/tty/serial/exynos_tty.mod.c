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
	{ 0x366307a, "console_suspend_enabled" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0x8b9f70c7, "cpu_hwcaps" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x8900b200, "kmalloc_caches" },
	{ 0x7ceeac9, "panic_notifier_list" },
	{ 0xc7da062f, "iomem_resource" },
	{ 0x95575c33, "__tracepoint_rwmmio_write" },
	{ 0x19ebf04e, "__tracepoint_rwmmio_post_read" },
	{ 0xa035d76e, "__tracepoint_rwmmio_read" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0x8a358b9f, "uart_resume_port" },
	{ 0x409bbb8e, "uart_suspend_port" },
	{ 0xf44a4b9c, "uart_unregister_driver" },
	{ 0xc60d521f, "uart_remove_one_port" },
	{ 0x164eb7f6, "device_remove_file" },
	{ 0x6b2941b2, "__arch_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0xbf57e89e, "queue_delayed_work_on" },
	{ 0xfa8a5bb0, "devm_request_threaded_irq" },
	{ 0x20f420a, "dma_map_page_attrs" },
	{ 0x4fdece8c, "dev_driver_string" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0x1954c444, "dma_get_slave_caps" },
	{ 0x662c3c79, "dma_request_chan" },
	{ 0xd604c3f, "devm_kfree" },
	{ 0x36d574de, "devm_clk_get" },
	{ 0xaf189c2c, "platform_get_irq" },
	{ 0x1dc7fa5f, "devm_ioremap" },
	{ 0x2e29445c, "platform_get_resource" },
	{ 0x488eb4e2, "of_match_node" },
	{ 0x3dfeaa4, "regmap_update_bits_base" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0xbdc9a589, "dma_set_coherent_mask" },
	{ 0x77561cbf, "dma_set_mask" },
	{ 0x20fd21c6, "proc_create" },
	{ 0x18c67997, "proc_mkdir" },
	{ 0xe3aa3619, "device_create_file" },
	{ 0x54db86b9, "uart_add_one_port" },
	{ 0x6ca7c29e, "of_find_property" },
	{ 0x79a35362, "pinctrl_lookup_state" },
	{ 0xaa48f219, "devm_pinctrl_get" },
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
	{ 0xad0a8a5a, "of_get_property" },
	{ 0x3d2aa62, "regmap_read" },
	{ 0x482954a5, "syscon_regmap_lookup_by_phandle" },
	{ 0xbc7a4422, "_dev_warn" },
	{ 0x5110cd07, "of_alias_get_id" },
	{ 0x5c39520d, "pinctrl_select_state" },
	{ 0xca39ba0, "__request_region" },
	{ 0x1848221d, "__release_region" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x97051f87, "uart_update_timeout" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x8b45fcdf, "uart_get_baud_rate" },
	{ 0xc30b6f92, "dma_unmap_page_attrs" },
	{ 0x67d55d75, "dma_release_channel" },
	{ 0x37a0cba, "kfree" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x581b212b, "console_stop" },
	{ 0x8eff6041, "_dev_info" },
	{ 0xa41eebb5, "uart_try_toggle_sysrq" },
	{ 0x7647726c, "handle_sysrq" },
	{ 0x4a17ed66, "sysrq_mask" },
	{ 0x437a7076, "do_SAK" },
	{ 0xac939c40, "tty_kref_put" },
	{ 0x6c7685af, "tty_flip_buffer_push" },
	{ 0xa2a86e1d, "tty_port_tty_get" },
	{ 0x2072ee9b, "request_threaded_irq" },
	{ 0x80545e76, "tty_insert_flip_string_fixed_flag" },
	{ 0xf13303e4, "uart_write_wakeup" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0x25386806, "dma_sync_single_for_device" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0x2441982e, "dma_sync_single_for_cpu" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xd653b126, "sched_clock" },
	{ 0x96848186, "scnprintf" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc002464f, "uart_set_options" },
	{ 0x4f72a987, "uart_parse_options" },
	{ 0x31dfd5cd, "__log_write_mmio" },
	{ 0x87ff7df9, "uart_console_write" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0x9cc4f70a, "register_pm_notifier" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0x28356034, "exynos_cpupm_notifier_register" },
	{ 0xc5850110, "printk" },
	{ 0x20fdd28c, "uart_register_driver" },
	{ 0x6980ea4b, "__log_post_read_mmio" },
	{ 0xcf1211a8, "__log_read_mmio" },
};

MODULE_INFO(depends, "exynos-cpupm");

MODULE_ALIAS("platform:exynos-uart");
MODULE_ALIAS("of:N*T*Csamsung,exynos-uart");
MODULE_ALIAS("of:N*T*Csamsung,exynos-uartC*");
