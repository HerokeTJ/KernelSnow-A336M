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
	{ 0x8900b200, "kmalloc_caches" },
	{ 0x83f4b224, "i2c_adapter_type" },
	{ 0xc515b69b, "i2c_bus_type" },
	{ 0x992d6679, "bus_unregister_notifier" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x49bdf906, "i2c_put_adapter" },
	{ 0x80c7ed81, "i2c_get_adapter" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xc2dfd5f7, "i2c_smbus_xfer" },
	{ 0xf184be6, "i2c_transfer" },
	{ 0xaf507de1, "__arch_copy_from_user" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0x642751ed, "i2c_verify_client" },
	{ 0xcc179d8b, "device_for_each_child" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x6b2941b2, "__arch_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xb86fd3a1, "i2c_transfer_buffer_flags" },
	{ 0x37a0cba, "kfree" },
	{ 0xb8888b15, "no_llseek" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0x832f346c, "cdev_device_add" },
	{ 0xb02b15cb, "dev_set_name" },
	{ 0xfcf513bb, "device_initialize" },
	{ 0x95613f30, "cdev_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xbc44cef7, "put_device" },
	{ 0x4537a658, "cdev_device_del" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xaed3d17e, "class_destroy" },
	{ 0x32580653, "i2c_for_each_dev" },
	{ 0xc6b00d2e, "bus_register_notifier" },
	{ 0x13a54ed5, "__class_create" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0xc5850110, "printk" },
};

MODULE_INFO(depends, "");

