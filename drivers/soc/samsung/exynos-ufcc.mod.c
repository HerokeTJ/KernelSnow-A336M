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
	{ 0x2d3385d3, "system_wq" },
	{ 0xbcb22632, "cpu_subsys" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xac594e02, "__cpu_online_mask" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x8900b200, "kmalloc_caches" },
	{ 0xde7ece30, "__cpu_possible_mask" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0x117959e2, "__freq_qos_tracer_add_request" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xbf57e89e, "queue_delayed_work_on" },
	{ 0xf8beca97, "cancel_delayed_work_sync" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0xc01c8b87, "sysfs_create_link" },
	{ 0xef1d7977, "kobject_init_and_add" },
	{ 0x7557e528, "cpufreq_cpu_put" },
	{ 0x253af43d, "delayed_work_timer_fn" },
	{ 0x79cf5987, "init_timer_key" },
	{ 0x6ca7c29e, "of_find_property" },
	{ 0x5f9e9913, "of_property_count_elems_of_size" },
	{ 0x7c02aadb, "of_property_read_string_helper" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xb0ee738d, "of_get_child_by_name" },
	{ 0x73f8428f, "__emstune_add_request" },
	{ 0xa781675f, "ecs_request_register" },
	{ 0x499e212, "of_find_node_by_type" },
	{ 0x92ad1db9, "cpumask_next" },
	{ 0x1b015d25, "bitmap_parselist" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x28356034, "exynos_cpupm_notifier_register" },
	{ 0x37a0cba, "kfree" },
	{ 0xaa3caa56, "sysfs_create_group" },
	{ 0x9cf0dacc, "of_property_read_string" },
	{ 0x69601c70, "of_get_next_child" },
	{ 0x87f6e3eb, "of_find_node_by_name" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0x2133b6e3, "ecs_request" },
	{ 0x1c202291, "emstune_update_request" },
	{ 0x2eec24ef, "freq_qos_update_request" },
	{ 0xc5850110, "printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0xefeb0f57, "cpufreq_cpu_get" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
};

MODULE_INFO(depends, "freq-qos-tracer,ems,exynos-cpupm");

MODULE_ALIAS("of:N*T*Csamsung,exynos-ufcc");
MODULE_ALIAS("of:N*T*Csamsung,exynos-ufccC*");
