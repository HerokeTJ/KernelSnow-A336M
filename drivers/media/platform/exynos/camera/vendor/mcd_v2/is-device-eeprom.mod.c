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
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0x4fdece8c, "dev_driver_string" },
	{ 0x37a0cba, "kfree" },
	{ 0xa5762724, "is_vendor_rom_parse_dt" },
	{ 0xc5850110, "printk" },
	{ 0x929b17, "is_get_is_core" },
	{ 0xb82e877b, "is_get_is_dev" },
	{ 0x4f72f07e, "i2c_register_driver" },
};

MODULE_INFO(depends, "fimc-is");

