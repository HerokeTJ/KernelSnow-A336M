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
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xf2a4ad58, "of_css" },
	{ 0xf3d8b077, "blkcg_policy_unregister" },
	{ 0x2679bfca, "blkcg_policy_register" },
	{ 0x95e0f7e4, "blkcg_deactivate_policy" },
	{ 0xffb4345b, "blkcg_activate_policy" },
	{ 0xa073b9e2, "css_next_descendant_pre" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd1cca611, "blkcg_root" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x8900b200, "kmalloc_caches" },
	{ 0xd740362b, "seq_printf" },
	{ 0xc8bca6d2, "__blk_mq_debugfs_rq_show" },
	{ 0xe7d4daac, "seq_list_next" },
	{ 0xff1e9dd8, "seq_list_start" },
	{ 0x4e51dbae, "blk_mq_debugfs_rq_show" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x43b8c5cb, "blk_sec_stats_account_io_done" },
	{ 0x13202795, "elv_rqhash_add" },
	{ 0x19af450, "blk_mq_sched_request_inserted" },
	{ 0x17afa218, "blk_mq_sched_try_insert_merge" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xac14d997, "kthread_blkcg" },
	{ 0x56d57f6e, "blkg_lookup_slowpath" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x9166fada, "strncpy" },
	{ 0xca9360b5, "rb_next" },
	{ 0xf7313ca0, "elv_rqhash_del" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xd9f7891e, "elv_rb_add" },
	{ 0x58cd1230, "elv_rb_del" },
	{ 0x7cb51b56, "elv_bio_merge_ok" },
	{ 0xb4e100f6, "elv_rb_find" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x7d191424, "blk_mq_free_request" },
	{ 0x54a4d172, "blk_mq_sched_try_merge" },
	{ 0x7b4c9ba9, "sbitmap_queue_min_shallow_depth" },
	{ 0xdb479145, "blk_sec_stats_account_exit" },
	{ 0x37a0cba, "kfree" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0x7c79b2db, "blk_sec_stats_account_init" },
	{ 0x91b9ec8d, "kobject_put" },
	{ 0x6d68e325, "elevator_alloc" },
	{ 0x9d3db8c7, "elv_rb_latter_request" },
	{ 0xa79f8e06, "elv_rb_former_request" },
	{ 0x706340da, "elv_unregister" },
	{ 0x5ad87c4d, "elv_register" },
};

MODULE_INFO(depends, "blk-sec-stats");

