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
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0x8900b200, "kmalloc_caches" },
	{ 0x19ebf04e, "__tracepoint_rwmmio_post_read" },
	{ 0xa035d76e, "__tracepoint_rwmmio_read" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0xa9fd43f3, "kernfs_find_and_get_ns" },
	{ 0xbc44cef7, "put_device" },
	{ 0xbd9d04d2, "device_register" },
	{ 0xb02b15cb, "dev_set_name" },
	{ 0x177f5d51, "kobject_create_and_add" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5850110, "printk" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0xecd1be91, "subsys_system_register" },
	{ 0x986f7ca8, "of_find_node_opts_by_path" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xf6ceff9a, "of_address_to_resource" },
	{ 0x8eff6041, "_dev_info" },
	{ 0x735c68ca, "soc_device_register" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x9cf0dacc, "of_property_read_string" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0x6980ea4b, "__log_post_read_mmio" },
	{ 0xcf1211a8, "__log_read_mmio" },
	{ 0xf93aae46, "__arm_smccc_smc" },
	{ 0xdc33c5a9, "of_iomap" },
	{ 0xf1e046cc, "panic" },
	{ 0x54cf30ec, "of_find_matching_node_and_match" },
};

MODULE_INFO(depends, "");

