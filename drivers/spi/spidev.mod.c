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
	{ 0x8900b200, "kmalloc_caches" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0x8b9f70c7, "cpu_hwcaps" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x1115f928, "param_ops_uint" },
	{ 0xc6a256d1, "driver_unregister" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xa15d438d, "device_destroy" },
	{ 0x20f92f09, "device_create" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0x574add77, "__mutex_init" },
	{ 0xef4b763b, "of_device_is_compatible" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x81196244, "stream_open" },
	{ 0xbc44cef7, "put_device" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x54f79951, "get_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x92680418, "spi_setup" },
	{ 0xaf507de1, "__arch_copy_from_user" },
	{ 0x6b2941b2, "__arch_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x56470118, "__warn_printk" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xaa554c78, "spi_sync" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0xb8888b15, "no_llseek" },
	{ 0xbb0a7735, "__register_chrdev" },
	{ 0xaed3d17e, "class_destroy" },
	{ 0x8957f882, "__spi_register_driver" },
	{ 0x13a54ed5, "__class_create" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Crohm,dh2228fv");
MODULE_ALIAS("of:N*T*Crohm,dh2228fvC*");
MODULE_ALIAS("of:N*T*Clineartechnology,ltc2488");
MODULE_ALIAS("of:N*T*Clineartechnology,ltc2488C*");
MODULE_ALIAS("of:N*T*Cge,achc");
MODULE_ALIAS("of:N*T*Cge,achcC*");
MODULE_ALIAS("of:N*T*Csemtech,sx1301");
MODULE_ALIAS("of:N*T*Csemtech,sx1301C*");
MODULE_ALIAS("of:N*T*Clwn,bk4");
MODULE_ALIAS("of:N*T*Clwn,bk4C*");
MODULE_ALIAS("of:N*T*Cdh,dhcom-board");
MODULE_ALIAS("of:N*T*Cdh,dhcom-boardC*");
MODULE_ALIAS("of:N*T*Cmenlo,m53cpld");
MODULE_ALIAS("of:N*T*Cmenlo,m53cpldC*");
