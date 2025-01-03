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
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0x8b9f70c7, "cpu_hwcaps" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x19ebf04e, "__tracepoint_rwmmio_post_read" },
	{ 0xa035d76e, "__tracepoint_rwmmio_read" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0x8900b200, "kmalloc_caches" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0xdcef2da4, "misc_deregister" },
	{ 0x6c8362b4, "regulator_disable" },
	{ 0x871df5fa, "__pm_runtime_idle" },
	{ 0x5a921311, "strncmp" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x6980ea4b, "__log_post_read_mmio" },
	{ 0xcf1211a8, "__log_read_mmio" },
	{ 0x8637ac5d, "__pm_runtime_resume" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xf93aae46, "__arm_smccc_smc" },
	{ 0x12a38747, "usleep_range" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xfbc84afe, "gpiod_set_raw_value" },
	{ 0xf3bd923d, "regulator_enable" },
	{ 0xffe8b403, "pm_relax" },
	{ 0x687d2163, "pm_stay_awake" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x9166fada, "strncpy" },
	{ 0x2e72ceb5, "d_path" },
	{ 0xfa54a0d7, "get_task_exe_file" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0x8081ce78, "pm_runtime_enable" },
	{ 0x2c531865, "gpio_to_desc" },
	{ 0x63baf885, "gpiod_direction_output_raw" },
	{ 0x982b7d12, "of_get_named_gpio_flags" },
	{ 0x6b4b2933, "__ioremap" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x6994009e, "device_init_wakeup" },
	{ 0x6331d19e, "misc_register" },
	{ 0x90cd4355, "exynos_update_ip_idle_status" },
	{ 0x6a5c3098, "exynos_get_idle_ip_index" },
	{ 0x42f1b276, "devm_gpio_request" },
	{ 0x743dff5c, "devm_regulator_get_optional" },
	{ 0x574add77, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x503a285e, "__platform_driver_register" },
};

MODULE_INFO(depends, "exynos-cpupm");

