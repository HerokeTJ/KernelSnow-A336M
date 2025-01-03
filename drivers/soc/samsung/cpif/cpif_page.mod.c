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
	{ 0xa6f6226c, "kasan_flag_enabled" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xcfd14bde, "__alloc_pages_nodemask" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x7b0a3e84, "cpif_memlog_log_obj" },
	{ 0xef8f1f82, "memlog_write_printf" },
	{ 0x8950aa66, "cpif_memlog_log_enabled" },
	{ 0xc5850110, "printk" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x5a095c99, "__free_pages" },
};

MODULE_INFO(depends, "cpif_memlogger,memlogger");

