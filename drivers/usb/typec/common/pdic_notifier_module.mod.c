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
	{ 0xd8339549, "param_ops_int" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0x8b9f70c7, "cpu_hwcaps" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x8900b200, "kmalloc_caches" },
	{ 0x999e8297, "vfree" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x6b2941b2, "__arch_copy_to_user" },
	{ 0xaf507de1, "__arch_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xb8888b15, "no_llseek" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xdcef2da4, "misc_deregister" },
	{ 0x6331d19e, "misc_register" },
	{ 0x30bbe06f, "sec_device_create" },
	{ 0xe8415b1d, "sysfs_remove_group" },
	{ 0xaa3caa56, "sysfs_create_group" },
	{ 0xae3fbde0, "switch_set_state" },
	{ 0x6ab5a8a7, "switch_dev_unregister" },
	{ 0x56e342ec, "switch_dev_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf5a94b83, "__init_rwsem" },
	{ 0x8317ad7c, "blocking_notifier_call_chain" },
	{ 0x64853d2f, "store_usblog_notify" },
	{ 0x229a20fd, "kobject_uevent_env" },
	{ 0x963aa2a9, "blocking_notifier_chain_unregister" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0xbb0c86a5, "blocking_notifier_chain_register" },
	{ 0xc5850110, "printk" },
};

MODULE_INFO(depends, "sec_class,switch_class,usb_notify_layer");

