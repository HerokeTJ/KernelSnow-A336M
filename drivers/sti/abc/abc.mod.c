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
	{ 0xdcb764ad, "memset" },
	{ 0x4829a47e, "memcpy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xa8a4448c, "of_property_read_u32_index" },
	{ 0xb1e12d81, "krealloc" },
	{ 0xd653b126, "sched_clock" },
	{ 0x7c02aadb, "of_property_read_string_helper" },
	{ 0x69601c70, "of_get_next_child" },
	{ 0x2276db98, "kstrtoint" },
	{ 0x87f6e3eb, "of_find_node_by_name" },
	{ 0x8900b200, "kmalloc_caches" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xbf57e89e, "queue_delayed_work_on" },
	{ 0x253af43d, "delayed_work_timer_fn" },
	{ 0x79cf5987, "init_timer_key" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x96848186, "scnprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x98cf60b3, "strlen" },
	{ 0x85df9b6c, "strsep" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0xd604c3f, "devm_kfree" },
	{ 0x543de234, "sec_device_destroy" },
	{ 0xe8415b1d, "sysfs_remove_group" },
	{ 0x574add77, "__mutex_init" },
	{ 0xaa3caa56, "sysfs_create_group" },
	{ 0x30bbe06f, "sec_device_create" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x732ac580, "queue_work_on" },
	{ 0x5792f848, "strlcpy" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x37a0cba, "kfree" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0x229a20fd, "kobject_uevent_env" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5850110, "printk" },
	{ 0x5a921311, "strncmp" },
};

MODULE_INFO(depends, "sec_class");

