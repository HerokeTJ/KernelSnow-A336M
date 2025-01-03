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
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0x8b9f70c7, "cpu_hwcaps" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x8900b200, "kmalloc_caches" },
	{ 0xe27ed167, "skb_queue_purge" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0xaf507de1, "__arch_copy_from_user" },
	{ 0xa851973a, "raw_notifier_call_chain" },
	{ 0x37a0cba, "kfree" },
	{ 0xc87c29e6, "__dev_kfree_skb_any" },
	{ 0x6b2941b2, "__arch_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x590942c6, "skb_queue_head" },
	{ 0xb5ab3a92, "skb_pull" },
	{ 0x6632d00d, "skb_dequeue" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0x6331d19e, "misc_register" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xbcf85bc0, "__alloc_skb" },
	{ 0xd06524ba, "raw_notifier_chain_unregister" },
	{ 0xdc9fa232, "raw_notifier_chain_register" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xca920659, "skb_queue_tail" },
	{ 0x2e381158, "skb_push" },
	{ 0x890c62fc, "skb_put" },
	{ 0xc5850110, "printk" },
};

MODULE_INFO(depends, "");

