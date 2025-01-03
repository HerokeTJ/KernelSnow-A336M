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
	{ 0xd8339549, "param_ops_int" },
	{ 0x3713f090, "usb_deregister" },
	{ 0xdf5b2f63, "input_unregister_device" },
	{ 0x3b938c8d, "input_event" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0xa50a37e8, "usb_kill_urb" },
	{ 0x7e007410, "usb_submit_urb" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xd329e1c6, "input_free_device" },
	{ 0x79b7eb86, "usb_free_coherent" },
	{ 0xca0bf864, "usb_free_urb" },
	{ 0xff775d7a, "input_register_device" },
	{ 0x837ac1f4, "input_set_abs_params" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x3e498793, "usb_alloc_urb" },
	{ 0xe2ceddab, "usb_alloc_coherent" },
	{ 0xe3db3c44, "input_allocate_device" },
	{ 0x8ef88460, "usb_register_driver" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v084Ep1001d*dc*dsc*dp*ic*isc*ip*in*");
