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
	{ 0x8e4c29fc, "crypto_unregister_scomp" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x4df8fbc, "lzo1x_decompress_safe" },
	{ 0x79f697e4, "lzorle1x_1_compress" },
	{ 0x15e337f, "crypto_unregister_alg" },
	{ 0x36977ae6, "crypto_register_scomp" },
	{ 0xe35cab54, "crypto_register_alg" },
};

MODULE_INFO(depends, "");

