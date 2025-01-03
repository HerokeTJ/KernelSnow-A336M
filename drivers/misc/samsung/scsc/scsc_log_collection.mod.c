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
	{ 0x723d2d0b, "remap_pfn_range" },
	{ 0x3744cf36, "vmalloc_to_pfn" },
	{ 0xaed3d17e, "class_destroy" },
	{ 0xa15d438d, "device_destroy" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x9e1bac16, "cdev_del" },
	{ 0x20f92f09, "device_create" },
	{ 0x2e6debbe, "cdev_add" },
	{ 0x95613f30, "cdev_init" },
	{ 0x13a54ed5, "__class_create" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0x8b9f70c7, "cpu_hwcaps" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xaf507de1, "__arch_copy_from_user" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x96848186, "scnprintf" },
	{ 0xfb24a559, "PDE_DATA" },
	{ 0xe2aa8e76, "generic_file_llseek" },
	{ 0x3c651057, "remove_proc_entry" },
	{ 0xcccf4a5e, "proc_set_user" },
	{ 0xa79bc746, "proc_create_data" },
	{ 0x18c67997, "proc_mkdir" },
	{ 0x8900b200, "kmalloc_caches" },
	{ 0xc56a41e6, "vabits_actual" },
	{ 0x68c84b24, "param_ops_string" },
	{ 0x732ac580, "queue_work_on" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xe0875eb1, "kstrtobool" },
	{ 0x4735ac17, "flush_work" },
	{ 0x37a0cba, "kfree" },
	{ 0xcba4abe3, "list_sort" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x999e8297, "vfree" },
	{ 0x574add77, "__mutex_init" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xc5850110, "printk" },
};

MODULE_INFO(depends, "");

