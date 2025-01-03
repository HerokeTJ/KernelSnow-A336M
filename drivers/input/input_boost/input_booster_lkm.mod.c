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
	{ 0xc4a8b336, "class_create_file_ns" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xbf57e89e, "queue_delayed_work_on" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xaed3d17e, "class_destroy" },
	{ 0x13a54ed5, "__class_create" },
	{ 0xa8a4448c, "of_property_read_u32_index" },
	{ 0x69601c70, "of_get_next_child" },
	{ 0x65f9af5a, "of_find_compatible_node" },
	{ 0x85df9b6c, "strsep" },
	{ 0x5792f848, "strlcpy" },
	{ 0xad0a8a5a, "of_get_property" },
	{ 0xaa3caa56, "sysfs_create_group" },
	{ 0x20f92f09, "device_create" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x574add77, "__mutex_init" },
	{ 0x253af43d, "delayed_work_timer_fn" },
	{ 0x79cf5987, "init_timer_key" },
	{ 0xda571594, "cancel_delayed_work" },
	{ 0x8900b200, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x4c863dd4, "device_unregister" },
	{ 0xf7ea698b, "ib_notifier_unregister" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0xbd9d04d2, "device_register" },
	{ 0xb02b15cb, "dev_set_name" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x7a457ff, "ib_notifier_register" },
	{ 0x732ac580, "queue_work_on" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xc5850110, "printk" },
	{ 0xbc7a4422, "_dev_warn" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x8fe79d0e, "exynos_pm_qos_remove_request" },
	{ 0x74ebf29f, "exynos_pm_qos_add_request_trace" },
	{ 0xa7a00749, "exynos_pm_qos_update_request" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0x282ab73a, "ufc_update_request" },
	{ 0xeb9065d9, "mutex_lock" },
};

MODULE_INFO(depends, "exynos_pm_qos,exynos-ufcc");

