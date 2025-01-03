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
	{ 0x4829a47e, "memcpy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0x280f9f14, "__per_cpu_offset" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa714dd23, "contig_page_data" },
	{ 0x8900b200, "kmalloc_caches" },
	{ 0x23f6655a, "failure_tracking" },
	{ 0xacfe4142, "page_pinner_inited" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa6f6226c, "kasan_flag_enabled" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x63547718, "__cpuhp_remove_state" },
	{ 0x5ec05ca1, "kern_unmount" },
	{ 0x57ad17e9, "__cpuhp_setup_state" },
	{ 0xb0730485, "init_pseudo" },
	{ 0xab16b734, "kill_anon_super" },
	{ 0xc679d809, "kern_mount" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x1000e51, "schedule" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xf3e64fe1, "iput" },
	{ 0x4735ac17, "flush_work" },
	{ 0x3e9bf49a, "unregister_shrinker" },
	{ 0x11269594, "register_shrinker" },
	{ 0x40235c98, "_raw_write_unlock" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x5000845d, "page_mapping" },
	{ 0xe68efe41, "_raw_write_lock" },
	{ 0x32b04e72, "alloc_anon_inode" },
	{ 0xae4b2889, "kmem_cache_destroy" },
	{ 0x612f3d20, "kmem_cache_create" },
	{ 0x689632ca, "wait_on_page_bit" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0xba0d0a4a, "__SetPageMovable" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0x336a06, "__page_pinner_migration_failed" },
	{ 0x1022e36e, "__put_page" },
	{ 0x12641630, "__ClearPageMovable" },
	{ 0x732ac580, "queue_work_on" },
	{ 0xc5aaf2e4, "unlock_page" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xd419eeb6, "kmem_cache_free" },
	{ 0xcfd14bde, "__alloc_pages_nodemask" },
	{ 0x620ed178, "inc_zone_page_state" },
	{ 0x5a095c99, "__free_pages" },
	{ 0xae15f73e, "dec_zone_page_state" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x4ba1ee76, "kmem_cache_alloc" },
	{ 0x37a0cba, "kfree" },
	{ 0xc5850110, "printk" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x43b0c9c3, "preempt_schedule" },
};

MODULE_INFO(depends, "");

