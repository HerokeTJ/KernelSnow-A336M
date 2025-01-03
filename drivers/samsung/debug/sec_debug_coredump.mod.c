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
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0x6a4cdd36, "dbg_snapshot_get_item_vaddr" },
	{ 0xb99cbedb, "dump_align" },
	{ 0xc5737e39, "dump_emit" },
	{ 0x1c85e87e, "dbg_snapshot_is_minized_kevents" },
	{ 0x23d5730f, "dbg_snapshot_get_item_enable" },
	{ 0x57fd4bff, "register_coredump_hook_notes_write" },
	{ 0xf3ec7b1a, "register_coredump_hook_notes_size" },
};

MODULE_INFO(depends, "dss");

