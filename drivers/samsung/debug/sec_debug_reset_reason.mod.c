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
	{ 0xdcb764ad, "memset" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0x38611295, "param_ops_long" },
	{ 0xd8339549, "param_ops_int" },
	{ 0x3c80c06c, "kstrtoull" },
	{ 0xec18aba0, "get_bk_item_val_as_string" },
	{ 0x5a921311, "strncmp" },
	{ 0x9166fada, "strncpy" },
	{ 0x98cf60b3, "strlen" },
	{ 0x148653, "vsnprintf" },
	{ 0xd740362b, "seq_printf" },
	{ 0xa916b694, "strnlen" },
	{ 0x6aaf6c71, "get_bk_item_val" },
	{ 0xa2aa781e, "seq_puts" },
	{ 0x4f731e2b, "single_open" },
	{ 0xef42eddb, "single_release" },
	{ 0xad9f2705, "seq_lseek" },
	{ 0xb9997d36, "seq_read" },
	{ 0x7c02aadb, "of_property_read_string_helper" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x87f6e3eb, "of_find_node_by_name" },
	{ 0x20fd21c6, "proc_create" },
	{ 0xc5850110, "printk" },
};

MODULE_INFO(depends, "sec_debug_extra_info");

