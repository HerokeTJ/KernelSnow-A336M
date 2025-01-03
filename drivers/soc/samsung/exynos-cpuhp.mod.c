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
	{ 0xbcb22632, "cpu_subsys" },
	{ 0xde7ece30, "__cpu_possible_mask" },
	{ 0x11089ac7, "_ctype" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xac594e02, "__cpu_online_mask" },
	{ 0xd2728bc0, "param_ops_charp" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0xc01c8b87, "sysfs_create_link" },
	{ 0xaa3caa56, "sysfs_create_group" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0xb97220ff, "bitmap_parse" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x98cf60b3, "strlen" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xad4e6259, "remove_cpu" },
	{ 0x7eb808d0, "add_cpu" },
	{ 0x92ad1db9, "cpumask_next" },
	{ 0x1d7b6367, "dbg_snapshot_printk" },
	{ 0x96848186, "scnprintf" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xc5850110, "printk" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0xeb9065d9, "mutex_lock" },
};

MODULE_INFO(depends, "dss");

MODULE_ALIAS("of:N*T*Csamsung,exynos-cpuhp");
MODULE_ALIAS("of:N*T*Csamsung,exynos-cpuhpC*");
