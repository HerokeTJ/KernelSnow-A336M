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
	{ 0x8b9f70c7, "cpu_hwcaps" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xaed3d17e, "class_destroy" },
	{ 0x1030b692, "class_unregister" },
	{ 0x9e1bac16, "cdev_del" },
	{ 0xa15d438d, "device_destroy" },
	{ 0x20f92f09, "device_create" },
	{ 0x2e6debbe, "cdev_add" },
	{ 0x95613f30, "cdev_init" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x13a54ed5, "__class_create" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xaf507de1, "__arch_copy_from_user" },
	{ 0x999e8297, "vfree" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0x6b2941b2, "__arch_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x1000e51, "schedule" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8900b200, "kmalloc_caches" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x6b853d06, "ns_to_kernel_old_timeval" },
	{ 0xd653b126, "sched_clock" },
	{ 0xaa0c318b, "vscnprintf" },
	{ 0x96848186, "scnprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x9166fada, "strncpy" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xe4bbc1dd, "kimage_voffset" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0xc56a41e6, "vabits_actual" },
	{ 0xd8339549, "param_ops_int" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xfe916dc6, "hex_dump_to_buffer" },
	{ 0x773c76ec, "dev_vprintk_emit" },
	{ 0xee8c02e9, "vprintk_emit" },
	{ 0xfeb4700a, "memlog_alloc_printf" },
	{ 0x29250c3f, "memlog_alloc_file" },
	{ 0xb4c313f3, "memlog_get_obj_by_name" },
	{ 0xf8217f92, "memlog_get_desc" },
	{ 0xc4ee5c6c, "memlog_sync_to_file" },
	{ 0xef8f1f82, "memlog_write_printf" },
	{ 0x779a18af, "kstrtoll" },
	{ 0x37cfb920, "scsc_log_collector_write" },
	{ 0xffcca2e3, "scsc_log_collector_unregister_client" },
	{ 0xafe2032f, "scsc_log_collector_register_client" },
	{ 0xc5850110, "printk" },
};

MODULE_INFO(depends, "memlogger,scsc_log_collection");

