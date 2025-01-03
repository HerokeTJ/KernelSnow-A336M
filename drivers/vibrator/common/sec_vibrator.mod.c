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
	{ 0x8900b200, "kmalloc_caches" },
	{ 0x349cba85, "strchr" },
	{ 0xefd0ee57, "sysfs_remove_file_ns" },
	{ 0x98cf60b3, "strlen" },
	{ 0x2e2b40d2, "strncat" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x69ad2f20, "kstrtouint" },
	{ 0x4fc8c1b0, "sysfs_create_file_ns" },
	{ 0xe0875eb1, "kstrtobool" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x175ced1, "power_supply_get_by_name" },
	{ 0xa5939272, "power_supply_put" },
	{ 0xae6080fa, "kthread_flush_worker" },
	{ 0xcc69bd8c, "hrtimer_cancel" },
	{ 0x2276db98, "kstrtoint" },
	{ 0xed269ad2, "__hrtimer_get_remaining" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0xecd991f, "hrtimer_active" },
	{ 0xc643be43, "kthread_queue_work" },
	{ 0x939fc2ef, "hrtimer_start_range_ns" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0xaed3d17e, "class_destroy" },
	{ 0xa15d438d, "device_destroy" },
	{ 0xe8415b1d, "sysfs_remove_group" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xaa3caa56, "sysfs_create_group" },
	{ 0x20f92f09, "device_create" },
	{ 0x13a54ed5, "__class_create" },
	{ 0x3ebd5214, "hrtimer_init" },
	{ 0xa4304a36, "wake_up_process" },
	{ 0x955b0e2e, "kthread_worker_fn" },
	{ 0xd9aa98a4, "kthread_create_on_node" },
	{ 0x4616a1da, "__kthread_init_worker" },
	{ 0x574add77, "__mutex_init" },
	{ 0xc5850110, "printk" },
};

MODULE_INFO(depends, "");

