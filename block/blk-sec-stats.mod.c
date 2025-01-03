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
	{ 0x280f9f14, "__per_cpu_offset" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xde7ece30, "__cpu_possible_mask" },
	{ 0xbe169a2d, "kernel_kobj" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xae4b2889, "kmem_cache_destroy" },
	{ 0x2276db98, "kstrtoint" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xd419eeb6, "kmem_cache_free" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x96848186, "scnprintf" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x92ad1db9, "cpumask_next" },
	{ 0x91b9ec8d, "kobject_put" },
	{ 0xaa3caa56, "sysfs_create_group" },
	{ 0x612f3d20, "kmem_cache_create" },
	{ 0x177f5d51, "kobject_create_and_add" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x4ba1ee76, "kmem_cache_alloc" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x9166fada, "strncpy" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xc8dd823c, "blkdev_put" },
	{ 0x1aa5f837, "blkdev_get_by_dev" },
	{ 0xc5850110, "printk" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "6D52FE3052CF959E704A469");
