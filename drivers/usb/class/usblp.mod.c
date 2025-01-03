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
	{ 0xd8339549, "param_ops_int" },
	{ 0xf4db35bc, "stpcpy" },
	{ 0x3713f090, "usb_deregister" },
	{ 0x842f046d, "usb_poison_anchored_urbs" },
	{ 0xe822527, "usb_deregister_dev" },
	{ 0x6c6b29fd, "usb_autopm_put_interface" },
	{ 0xd937b3ed, "usb_autopm_get_interface" },
	{ 0xe34cd4c7, "usb_find_interface" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xaf507de1, "__arch_copy_from_user" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x6b2941b2, "__arch_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xca0bf864, "usb_free_urb" },
	{ 0x399a458c, "usb_unanchor_urb" },
	{ 0x7e007410, "usb_submit_urb" },
	{ 0xc9677e82, "usb_anchor_urb" },
	{ 0x3e498793, "usb_alloc_urb" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x1000e51, "schedule" },
	{ 0xf4124677, "mutex_lock_interruptible" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0x9f5afe9b, "noop_llseek" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xa1b06bb7, "usb_control_msg" },
	{ 0xc5eb1739, "usb_set_interface" },
	{ 0xc5850110, "printk" },
	{ 0x8eae8dfd, "usb_find_common_endpoints" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0xef5d3e52, "usb_put_intf" },
	{ 0x37a0cba, "kfree" },
	{ 0x8eff6041, "_dev_info" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0xfc426e57, "usb_register_dev" },
	{ 0xe9df4cc0, "usb_get_intf" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x574add77, "__mutex_init" },
	{ 0x8ef88460, "usb_register_driver" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v*p*d*dc07dsc01dp01ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc07dsc01dp02ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc07dsc01dp03ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic07isc01ip01in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic07isc01ip02in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic07isc01ip03in*");
MODULE_ALIAS("usb:v04B8p0202d*dc*dsc*dp*ic*isc*ip*in*");
