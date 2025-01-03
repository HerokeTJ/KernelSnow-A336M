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
	{ 0x2d3385d3, "system_wq" },
	{ 0x3713f090, "usb_deregister" },
	{ 0x2276db98, "kstrtoint" },
	{ 0x3c80c06c, "kstrtoull" },
	{ 0xf6f3714c, "usb_put_dev" },
	{ 0xc405a128, "usb_set_device_state" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd97c0fff, "usb_alloc_dev" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x8eff6041, "_dev_info" },
	{ 0x4735ac17, "flush_work" },
	{ 0xb2484436, "usb_poison_urb" },
	{ 0x732ac580, "queue_work_on" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0x8eae8dfd, "usb_find_common_endpoints" },
	{ 0xca0bf864, "usb_free_urb" },
	{ 0x576b5d72, "usbpd_wait_entermode" },
	{ 0x7612db88, "register_lvs" },
	{ 0x7e007410, "usb_submit_urb" },
	{ 0x3e498793, "usb_alloc_urb" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0xa1b06bb7, "usb_control_msg" },
	{ 0xc5850110, "printk" },
	{ 0x8ef88460, "usb_register_driver" },
};

MODULE_INFO(depends, "if_cb_manager");

