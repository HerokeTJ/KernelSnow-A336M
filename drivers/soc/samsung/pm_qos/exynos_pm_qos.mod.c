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
	{ 0x4829a47e, "memcpy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0x8900b200, "kmalloc_caches" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0x8b9f70c7, "cpu_hwcaps" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xbe169a2d, "kernel_kobj" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xd740362b, "seq_printf" },
	{ 0x4f731e2b, "single_open" },
	{ 0xef42eddb, "single_release" },
	{ 0xb9997d36, "seq_read" },
	{ 0xad9f2705, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0x23c9891c, "kstrtoint_from_user" },
	{ 0xaf507de1, "__arch_copy_from_user" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x9f5afe9b, "noop_llseek" },
	{ 0x6331d19e, "misc_register" },
	{ 0x10d5b5f2, "sysfs_create_bin_file" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4fc8c1b0, "sysfs_create_file_ns" },
	{ 0x63ef7ca7, "debugfs_create_file" },
	{ 0x177f5d51, "kobject_create_and_add" },
	{ 0x82b308e8, "debugfs_create_dir" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0xbf57e89e, "queue_delayed_work_on" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x963aa2a9, "blocking_notifier_chain_unregister" },
	{ 0xbb0c86a5, "blocking_notifier_chain_register" },
	{ 0xf8beca97, "cancel_delayed_work_sync" },
	{ 0x253af43d, "delayed_work_timer_fn" },
	{ 0x79cf5987, "init_timer_key" },
	{ 0x56470118, "__warn_printk" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0x8317ad7c, "blocking_notifier_call_chain" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0xc5850110, "printk" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
};

MODULE_INFO(depends, "");

