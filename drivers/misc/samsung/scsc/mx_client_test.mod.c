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
	{ 0x2d3385d3, "system_wq" },
	{ 0x8900b200, "kmalloc_caches" },
	{ 0xd8339549, "param_ops_int" },
	{ 0xa15d438d, "device_destroy" },
	{ 0x92b7c4e9, "scsc_mx_module_unregister_client_module" },
	{ 0x779a18af, "kstrtoll" },
	{ 0xaf507de1, "__arch_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x9e1bac16, "cdev_del" },
	{ 0xaed3d17e, "class_destroy" },
	{ 0x20f92f09, "device_create" },
	{ 0x13a54ed5, "__class_create" },
	{ 0x2e6debbe, "cdev_add" },
	{ 0x95613f30, "cdev_init" },
	{ 0xe2d07004, "cdev_alloc" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x7b756088, "scsc_mx_module_register_client_module" },
	{ 0x253af43d, "delayed_work_timer_fn" },
	{ 0xbf57e89e, "queue_delayed_work_on" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0xfa24922c, "scsc_mx_service_stop" },
	{ 0xc062b1e7, "scsc_mx_service_close" },
	{ 0xfa68248, "scsc_mx_service_start" },
	{ 0x15d00017, "scsc_mx_service_open" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0xf8beca97, "cancel_delayed_work_sync" },
	{ 0xc5850110, "printk" },
	{ 0x37a0cba, "kfree" },
	{ 0xb2990777, "scsc_printk_tag" },
};

MODULE_INFO(depends, "scsc_mx,scsc_logring");

