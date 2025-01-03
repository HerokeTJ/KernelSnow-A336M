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
	{ 0x8900b200, "kmalloc_caches" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0x8b9f70c7, "cpu_hwcaps" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xd8339549, "param_ops_int" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0xa7c8e259, "__pm_runtime_disable" },
	{ 0xdcef2da4, "misc_deregister" },
	{ 0x871df5fa, "__pm_runtime_idle" },
	{ 0x37a0cba, "kfree" },
	{ 0x8637ac5d, "__pm_runtime_resume" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b2941b2, "__arch_copy_to_user" },
	{ 0xaf507de1, "__arch_copy_from_user" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0x8081ce78, "pm_runtime_enable" },
	{ 0x6331d19e, "misc_register" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xbf57e89e, "queue_delayed_work_on" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xf8beca97, "cancel_delayed_work_sync" },
	{ 0x253af43d, "delayed_work_timer_fn" },
	{ 0x79cf5987, "init_timer_key" },
	{ 0x98c2b0fc, "dma_buf_put" },
	{ 0x6a6d5fb3, "dma_buf_get" },
	{ 0x12a38747, "usleep_range" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xc5850110, "printk" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Csamsung,exynos-repeater");
MODULE_ALIAS("of:N*T*Csamsung,exynos-repeaterC*");
