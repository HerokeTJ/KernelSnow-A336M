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
	{ 0xbf57e89e, "queue_delayed_work_on" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0xe914e41e, "strcpy" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x253af43d, "delayed_work_timer_fn" },
	{ 0x79cf5987, "init_timer_key" },
	{ 0x87f6e3eb, "of_find_node_by_name" },
	{ 0x8900b200, "kmalloc_caches" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x2276db98, "kstrtoint" },
	{ 0x349cba85, "strchr" },
	{ 0x98cf60b3, "strlen" },
	{ 0x2d751505, "sec_abc_wait_enabled" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0x69601c70, "of_get_next_child" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0xd604c3f, "devm_kfree" },
	{ 0x37a0cba, "kfree" },
	{ 0x543de234, "sec_device_destroy" },
	{ 0x164eb7f6, "device_remove_file" },
	{ 0xe3aa3619, "device_create_file" },
	{ 0x30bbe06f, "sec_device_create" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0x5de7762c, "sec_abc_send_event" },
	{ 0xc5850110, "printk" },
};

MODULE_INFO(depends, "abc,sec_class");

