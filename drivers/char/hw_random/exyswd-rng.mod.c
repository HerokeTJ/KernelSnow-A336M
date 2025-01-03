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
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0x9cb025a4, "dma_free_attrs" },
	{ 0xabfad8bd, "dmam_alloc_attrs" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xf93aae46, "__arm_smccc_smc" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0xf9f177af, "devm_hwrng_register" },
	{ 0xc5850110, "printk" },
	{ 0xe8a28de, "platform_device_unregister" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0xcbfe80e4, "platform_device_register" },
	{ 0xf1e046cc, "panic" },
};

MODULE_INFO(depends, "");

