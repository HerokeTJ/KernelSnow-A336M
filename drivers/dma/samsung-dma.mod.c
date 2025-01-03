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
	{ 0x9688de8b, "memstart_addr" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x8394775e, "pl330_dma_debug" },
	{ 0x8715fbd9, "pl330_dma_getposition" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0xa6e3400, "__pl330_prep_dma_cyclic" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0x67d55d75, "dma_release_channel" },
	{ 0x662c3c79, "dma_request_chan" },
	{ 0xc5850110, "printk" },
};

MODULE_INFO(depends, "pl330");

