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
	{ 0x8900b200, "kmalloc_caches" },
	{ 0x12df4f3, "usb_function_unregister" },
	{ 0xf3a28dd, "usb_function_register" },
	{ 0x15993252, "usb_put_function_instance" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0x98cf60b3, "strlen" },
	{ 0xa3cbf4f3, "gserial_connect" },
	{ 0xdb09248f, "config_ep_by_speed" },
	{ 0x15087bcb, "gserial_disconnect" },
	{ 0x2e09263f, "usb_copy_descriptors" },
	{ 0xc5850110, "printk" },
	{ 0x70832c42, "usb_ep_autoconfig" },
	{ 0xe7b7798d, "usb_interface_id" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0x33bfdca2, "gserial_alloc_line" },
	{ 0xabedbe94, "config_group_init_type_name" },
	{ 0x37a0cba, "kfree" },
	{ 0xfb102838, "usb_add_function" },
	{ 0xac9e3175, "usb_string_id" },
};

MODULE_INFO(depends, "");

