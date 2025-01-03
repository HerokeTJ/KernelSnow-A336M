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
	{ 0x5a9f1d63, "memmove" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0x8b9f70c7, "cpu_hwcaps" },
	{ 0x8900b200, "kmalloc_caches" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x3713f090, "usb_deregister" },
	{ 0x8ef88460, "usb_register_driver" },
	{ 0xd969d6f4, "cancel_work_sync" },
	{ 0xe822527, "usb_deregister_dev" },
	{ 0x2de88551, "cdc_parse_cdc_header" },
	{ 0xca0bf864, "usb_free_urb" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xc518a377, "usb_unpoison_urb" },
	{ 0xb2484436, "usb_poison_urb" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0x37a0cba, "kfree" },
	{ 0x6c6b29fd, "usb_autopm_put_interface" },
	{ 0xd937b3ed, "usb_autopm_get_interface" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x6b2941b2, "__arch_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x1000e51, "schedule" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xf4124677, "mutex_lock_interruptible" },
	{ 0xbbbd99d5, "compat_ptr_ioctl" },
	{ 0x9f5afe9b, "noop_llseek" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x732ac580, "queue_work_on" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x7e007410, "usb_submit_urb" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x8eff6041, "_dev_info" },
	{ 0xfc426e57, "usb_register_dev" },
	{ 0x3e498793, "usb_alloc_urb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x574add77, "__mutex_init" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc09ip*in*");
