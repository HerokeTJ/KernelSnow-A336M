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
	{ 0x19ebf04e, "__tracepoint_rwmmio_post_read" },
	{ 0xa035d76e, "__tracepoint_rwmmio_read" },
	{ 0x6567ed09, "dss_dpm" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0x6980ea4b, "__log_post_read_mmio" },
	{ 0xcf1211a8, "__log_read_mmio" },
	{ 0x340ac79e, "dbg_snapshot_get_header_vaddr" },
	{ 0x74b7e5c8, "dbg_snapshot_log_get_item_by_index" },
	{ 0xbc009701, "dbg_snapshot_log_get_num_items" },
	{ 0x93caa54c, "dbg_snapshot_get_item_by_index" },
	{ 0x832c54b0, "dbg_snapshot_get_num_items" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0xab46e1c4, "dbg_snapshot_set_qd_entry" },
	{ 0x97a4b355, "dbg_snapshot_get_enable" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x8eff6041, "_dev_info" },
	{ 0x5792f848, "strlcpy" },
	{ 0x5a921311, "strncmp" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0x98cf60b3, "strlen" },
};

MODULE_INFO(depends, "dss");

MODULE_ALIAS("of:N*T*Cdebug-snapshot,qdump");
MODULE_ALIAS("of:N*T*Cdebug-snapshot,qdumpC*");
