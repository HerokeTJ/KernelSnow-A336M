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
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xac594e02, "__cpu_online_mask" },
	{ 0x8900b200, "kmalloc_caches" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0xb1ddf995, "jiffies_64_to_clock_t" },
	{ 0x404c64dc, "policy_update_call_to_DM" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x732ac580, "queue_work_on" },
	{ 0x4383b8b3, "cal_dfs_set_rate" },
	{ 0xd87a0230, "dbg_snapshot_freq" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x95b2cbd0, "ect_minlock_get_domain" },
	{ 0xcd133dbe, "ect_get_block" },
	{ 0x6ca7c29e, "of_find_property" },
	{ 0x37a0cba, "kfree" },
	{ 0x465746c3, "register_exynos_dm_constraint_table" },
	{ 0x6a7d162c, "of_phandle_iterator_next" },
	{ 0x1d3d2daf, "of_phandle_iterator_init" },
	{ 0x5b89ba37, "register_exynos_dm_freq_scaler" },
	{ 0xb0ee738d, "of_get_child_by_name" },
	{ 0xd611be32, "exynos_dm_data_init" },
	{ 0x6958fdb, "cal_dfs_get_rate_table" },
	{ 0x93f86b78, "cal_dfs_get_lv_num" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x5f9e9913, "of_property_count_elems_of_size" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x1b015d25, "bitmap_parselist" },
	{ 0x79746f10, "of_parse_phandle" },
	{ 0x9cf0dacc, "of_property_read_string" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0xc5850110, "printk" },
	{ 0x69601c70, "of_get_next_child" },
	{ 0x1f45fd05, "DM_CALL" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0xb16aebb4, "cal_dfs_get_rate" },
	{ 0xf424df19, "cal_dfs_get_min_freq" },
	{ 0x177961c3, "cal_dfs_get_max_freq" },
	{ 0xaa3caa56, "sysfs_create_group" },
	{ 0x2ddc06f4, "exynos_cpufreq_register_notifier" },
	{ 0x503a285e, "__platform_driver_register" },
};

MODULE_INFO(depends, "exynos-dm,cmupmucal,dss,ect_parser,exynos-acme");

MODULE_ALIAS("of:N*T*Csamsung,exynos-dsufreq");
MODULE_ALIAS("of:N*T*Csamsung,exynos-dsufreqC*");
