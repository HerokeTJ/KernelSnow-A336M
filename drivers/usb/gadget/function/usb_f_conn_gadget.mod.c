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
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x8900b200, "kmalloc_caches" },
	{ 0x12df4f3, "usb_function_unregister" },
	{ 0x1aec8cdd, "usb_ep_disable" },
	{ 0x2dbea237, "usb_ep_enable" },
	{ 0xdb09248f, "config_ep_by_speed" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x1d6766db, "usb_ep_free_request" },
	{ 0x880d48e4, "usb_ep_alloc_request" },
	{ 0x70832c42, "usb_ep_autoconfig" },
	{ 0xe7b7798d, "usb_interface_id" },
	{ 0xf3a28dd, "usb_function_register" },
	{ 0x15993252, "usb_put_function_instance" },
	{ 0x779a7b20, "create_function_device" },
	{ 0x6331d19e, "misc_register" },
	{ 0xbd462b55, "__kfifo_init" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b2941b2, "__arch_copy_to_user" },
	{ 0xaf507de1, "__arch_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xd4616fc7, "usb_ep_queue" },
	{ 0x4578f528, "__kfifo_to_user" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x1000e51, "schedule" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x999e8297, "vfree" },
	{ 0xdcef2da4, "misc_deregister" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0x98cf60b3, "strlen" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xabedbe94, "config_group_init_type_name" },
	{ 0xc5850110, "printk" },
	{ 0x37a0cba, "kfree" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
};

MODULE_INFO(depends, "");

