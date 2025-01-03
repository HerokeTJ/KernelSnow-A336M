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
	{ 0x2d60cdc3, "scsc_mif_mmap_unregister" },
	{ 0xd265b329, "gdb_transport_unregister_client" },
	{ 0xaed3d17e, "class_destroy" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x4d39b94f, "gdb_transport_register_client" },
	{ 0x695c60de, "scsc_mif_mmap_register" },
	{ 0x13a54ed5, "__class_create" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xaf507de1, "__arch_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x53dc8be3, "gdb_transport_send" },
	{ 0x37a0cba, "kfree" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x1000e51, "schedule" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x4578f528, "__kfifo_to_user" },
	{ 0x779a18af, "kstrtoll" },
	{ 0xa15d438d, "device_destroy" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3df93a8d, "gdb_transport_register_channel_handler" },
	{ 0x9e1bac16, "cdev_del" },
	{ 0x20f92f09, "device_create" },
	{ 0x2e6debbe, "cdev_add" },
	{ 0x95613f30, "cdev_init" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0x723d2d0b, "remap_pfn_range" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0xb2990777, "scsc_printk_tag" },
};

MODULE_INFO(depends, "scsc_platform_mif,scsc_mx,scsc_logring");

