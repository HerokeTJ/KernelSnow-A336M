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
	{ 0x1e7bbcb3, "kernel_restart" },
	{ 0xa6257a2f, "complete" },
	{ 0xb0d98d9c, "tz_iwsock_read" },
	{ 0x1d685764, "tz_iwsock_connect" },
	{ 0xce48b456, "tz_iwsock_socket" },
	{ 0x12a38747, "usleep_range" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd6f7a0dc, "tzdev_blocking_notifier_unregister" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0xe8950c00, "stui_cancel_session" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xc3e95005, "tz_iwsock_release" },
	{ 0xa4304a36, "wake_up_process" },
	{ 0xd9aa98a4, "kthread_create_on_node" },
	{ 0x8fd87995, "tzdev_blocking_notifier_register" },
	{ 0xc1ba7c68, "unregister_iwd_functions" },
	{ 0x899f9d77, "register_iwd_functions" },
	{ 0xfcefcffa, "tz_iwsock_write" },
	{ 0xa0e8ea9, "stui_tsp_exit" },
	{ 0xb1f4073f, "stui_tsp_enter" },
	{ 0x1c65a629, "stui_set_touch_type" },
	{ 0xd2ec4650, "stui_tsp_type" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0xbc49ba18, "exynos_tui_set_stui_funcs" },
	{ 0xda077b9f, "exynos_atomic_exit_tui" },
	{ 0x46c3cb93, "exynos_atomic_enter_tui" },
	{ 0x4070dcfc, "exynos_tui_get_panel_info" },
	{ 0x20d2f8c3, "dma_buf_map_attachment" },
	{ 0x23ce83ac, "dma_buf_attach" },
	{ 0x76af8aef, "dma_heap_buffer_alloc" },
	{ 0xeff75c0b, "dma_heap_find" },
	{ 0xf3bf5cdc, "exynos_tui_get_resolution" },
	{ 0x98c2b0fc, "dma_buf_put" },
	{ 0x78ec79c1, "dma_buf_detach" },
	{ 0xe1506dd, "dma_buf_unmap_attachment" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0x8b9f70c7, "cpu_hwcaps" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x6b2941b2, "__arch_copy_to_user" },
	{ 0x60930548, "stui_clear_mask" },
	{ 0xfd42c2bd, "stui_set_mask" },
	{ 0x4a6349d0, "stui_set_mode" },
	{ 0xbc91dbf7, "stui_set_tui_version" },
	{ 0x6274720c, "stui_get_touch_type" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x8900b200, "kmalloc_caches" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0xdcef2da4, "misc_deregister" },
	{ 0x77561cbf, "dma_set_mask" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0x6331d19e, "misc_register" },
	{ 0xbf57e89e, "queue_delayed_work_on" },
	{ 0x37a0cba, "kfree" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0x253af43d, "delayed_work_timer_fn" },
	{ 0x79cf5987, "init_timer_key" },
	{ 0xc5850110, "printk" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0xa185c970, "stui_get_mode" },
	{ 0xeb9065d9, "mutex_lock" },
};

MODULE_INFO(depends, "tzdev,tuihw-inf,sec_common_fn,exynos-drm");

