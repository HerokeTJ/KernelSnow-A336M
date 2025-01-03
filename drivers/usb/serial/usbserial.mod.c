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
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0xc65f0be5, "tty_unregister_device" },
	{ 0x919f9526, "tty_port_register_device" },
	{ 0x9f1f0846, "usb_store_new_id" },
	{ 0xc17e9946, "usb_show_dynids" },
	{ 0xc6a256d1, "driver_unregister" },
	{ 0x83dd6564, "driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x80545e76, "tty_insert_flip_string_fixed_flag" },
	{ 0xa93df441, "__tty_insert_flip_char" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x4bf61645, "tty_hangup" },
	{ 0x469fae87, "tty_ldisc_deref" },
	{ 0x7609590a, "tty_ldisc_ref" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x1000e51, "schedule" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x6c7685af, "tty_flip_buffer_push" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x7e007410, "usb_submit_urb" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xa50a37e8, "usb_kill_urb" },
	{ 0x8900b200, "kmalloc_caches" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x56470118, "__warn_printk" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x68b544a3, "device_del" },
	{ 0xd969d6f4, "cancel_work_sync" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xac939c40, "tty_kref_put" },
	{ 0x9250e1ba, "tty_vhangup" },
	{ 0xa2a86e1d, "tty_port_tty_get" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0x3e498793, "usb_alloc_urb" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x14669c25, "tty_port_destroy" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0xca0bf864, "usb_free_urb" },
	{ 0x530a7aa, "tty_port_tty_wakeup" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x40c63064, "usb_match_one_id" },
	{ 0x8015af83, "usb_match_id" },
	{ 0x574add77, "__mutex_init" },
	{ 0xe9df4cc0, "usb_get_intf" },
	{ 0xb999b45f, "usb_get_dev" },
	{ 0x6cd6b72e, "device_add" },
	{ 0xb02b15cb, "dev_set_name" },
	{ 0xfcf513bb, "device_initialize" },
	{ 0x9a5113a2, "tty_port_init" },
	{ 0x8eff6041, "_dev_info" },
	{ 0xbc7a4422, "_dev_warn" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xcc20708f, "seq_putc" },
	{ 0xd740362b, "seq_printf" },
	{ 0xa2aa781e, "seq_puts" },
	{ 0xedb2e9f7, "tty_port_hangup" },
	{ 0x30e74134, "tty_termios_copy_hw" },
	{ 0x76406461, "tty_port_close" },
	{ 0xb4d16f48, "tty_port_open" },
	{ 0x2f166344, "module_put" },
	{ 0x6c6b29fd, "usb_autopm_put_interface" },
	{ 0x85d8b904, "tty_standard_install" },
	{ 0xd937b3ed, "usb_autopm_get_interface" },
	{ 0x36505ade, "try_module_get" },
	{ 0xe6d6f001, "__tty_alloc_driver" },
	{ 0xa8bcb948, "put_tty_driver" },
	{ 0x9bb56529, "bus_unregister" },
	{ 0xf4a49dea, "tty_unregister_driver" },
	{ 0x63ae7903, "tty_register_driver" },
	{ 0x527ea077, "tty_set_operations" },
	{ 0xc5850110, "printk" },
	{ 0x729df7c4, "bus_register" },
	{ 0xc518a377, "usb_unpoison_urb" },
	{ 0xb2484436, "usb_poison_urb" },
	{ 0x732ac580, "queue_work_on" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xf6f3714c, "usb_put_dev" },
	{ 0xef5d3e52, "usb_put_intf" },
	{ 0xbc44cef7, "put_device" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x37a0cba, "kfree" },
	{ 0x3713f090, "usb_deregister" },
	{ 0x660b5c9e, "driver_attach" },
	{ 0x8ef88460, "usb_register_driver" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0x20978fb9, "idr_find" },
	{ 0xeb9065d9, "mutex_lock" },
};

MODULE_INFO(depends, "");

