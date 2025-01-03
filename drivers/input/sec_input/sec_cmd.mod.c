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
	{ 0xdcb764ad, "memset" },
	{ 0x4829a47e, "memcpy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0xf02aa937, "wait_for_completion_interruptible_timeout" },
	{ 0x9166fada, "strncpy" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xd653b126, "sched_clock" },
	{ 0x7629e057, "sec_debug_tsp_command_history" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0x2276db98, "kstrtoint" },
	{ 0xa916b694, "strnlen" },
	{ 0x5a921311, "strncmp" },
	{ 0x349cba85, "strchr" },
	{ 0x732ac580, "queue_work_on" },
	{ 0x229a20fd, "kobject_uevent_env" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x1148c0ea, "flush_delayed_work" },
	{ 0xf8beca97, "cancel_delayed_work_sync" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xe8415b1d, "sysfs_remove_group" },
	{ 0x37a0cba, "kfree" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x543de234, "sec_device_destroy" },
	{ 0xaa3caa56, "sysfs_create_group" },
	{ 0x30bbe06f, "sec_device_create" },
	{ 0x253af43d, "delayed_work_timer_fn" },
	{ 0x79cf5987, "init_timer_key" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0x574add77, "__mutex_init" },
	{ 0x98cf60b3, "strlen" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0xc5850110, "printk" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0xeb9065d9, "mutex_lock" },
};

MODULE_INFO(depends, "sec_tsp_log,sec_class");

