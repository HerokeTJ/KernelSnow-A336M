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
	{ 0x9688de8b, "memstart_addr" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0x8b9f70c7, "cpu_hwcaps" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x94961283, "vunmap" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x1270d593, "vmap" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xaf507de1, "__arch_copy_from_user" },
	{ 0x6b2941b2, "__arch_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x9e1bac16, "cdev_del" },
	{ 0xaed3d17e, "class_destroy" },
	{ 0x20f92f09, "device_create" },
	{ 0x13a54ed5, "__class_create" },
	{ 0x2e6debbe, "cdev_add" },
	{ 0x95613f30, "cdev_init" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x280f9f14, "__per_cpu_offset" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x1115f928, "param_ops_uint" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0xf1e046cc, "panic" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0x96848186, "scnprintf" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x164eb7f6, "device_remove_file" },
	{ 0xe3aa3619, "device_create_file" },
	{ 0x543de234, "sec_device_destroy" },
	{ 0x30bbe06f, "sec_device_create" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0x5a921311, "strncmp" },
	{ 0x9cf0dacc, "of_property_read_string" },
	{ 0x69601c70, "of_get_next_child" },
	{ 0x87f6e3eb, "of_find_node_by_name" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0xd604c3f, "devm_kfree" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0x6228c21f, "smp_call_function_single" },
	{ 0xc5850110, "printk" },
};

MODULE_INFO(depends, "sec_class");

MODULE_ALIAS("of:N*T*Csamsung,kq-mesh");
MODULE_ALIAS("of:N*T*Csamsung,kq-meshC*");
