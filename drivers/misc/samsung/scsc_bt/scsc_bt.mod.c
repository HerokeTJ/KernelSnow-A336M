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
	{ 0x2d3385d3, "system_wq" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0xef6405b3, "scsc_service_pm_qos_update_request" },
	{ 0xc4f47221, "mod_delayed_work_on" },
	{ 0x732ac580, "queue_work_on" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0x253af43d, "delayed_work_timer_fn" },
	{ 0x79cf5987, "init_timer_key" },
	{ 0x5f03c4ae, "scsc_service_pm_qos_add_request" },
	{ 0x8a51de09, "scsc_service_pm_qos_remove_request" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0x8b9f70c7, "cpu_hwcaps" },
	{ 0x8a25ae5d, "pm_wakeup_ws_event" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xaf507de1, "__arch_copy_from_user" },
	{ 0x4771260c, "scsc_log_collector_schedule_collection" },
	{ 0x6b2941b2, "__arch_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x1000e51, "schedule" },
	{ 0x5450bea0, "scsc_service_force_panic" },
	{ 0x11089ac7, "_ctype" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xe7900234, "exynos_soc_info" },
	{ 0x8900b200, "kmalloc_caches" },
	{ 0x65671f08, "param_ops_bool" },
	{ 0xd8339549, "param_ops_int" },
	{ 0x68c84b24, "param_ops_string" },
	{ 0x1e2688d7, "param_ops_ullong" },
	{ 0x357b5405, "wakeup_source_unregister" },
	{ 0xa15d438d, "device_destroy" },
	{ 0x92b7c4e9, "scsc_mx_module_unregister_client_module" },
	{ 0xbc44cef7, "put_device" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xd740362b, "seq_printf" },
	{ 0xa2aa781e, "seq_puts" },
	{ 0x4f731e2b, "single_open" },
	{ 0xef42eddb, "single_release" },
	{ 0xad9f2705, "seq_lseek" },
	{ 0xb9997d36, "seq_read" },
	{ 0x28230a3f, "wakeup_source_register" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x7b756088, "scsc_mx_module_register_client_module" },
	{ 0x9e1bac16, "cdev_del" },
	{ 0x20f92f09, "device_create" },
	{ 0x2e6debbe, "cdev_add" },
	{ 0x95613f30, "cdev_init" },
	{ 0x13a54ed5, "__class_create" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xa79bc746, "proc_create_data" },
	{ 0x18c67997, "proc_mkdir" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3c80c06c, "kstrtoull" },
	{ 0xe914e41e, "strcpy" },
	{ 0xa916b694, "strnlen" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd05ab94c, "scsc_service_mifintrbit_bit_set" },
	{ 0x69ad2f20, "kstrtouint" },
	{ 0xf1a89579, "scsc_service_mifintrbit_free_fromhost" },
	{ 0x3ee66d5, "scsc_service_mifintrbit_unregister_tohost" },
	{ 0x8e339407, "scsc_mx_service_service_failed" },
	{ 0xfa24922c, "scsc_mx_service_stop" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc062b1e7, "scsc_mx_service_close" },
	{ 0x1ae2a520, "scsc_mx_service_mifram_free" },
	{ 0xffcca2e3, "scsc_log_collector_unregister_client" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0x91c7008d, "scsc_service_mifintrbit_bit_clear" },
	{ 0x48c2b057, "scsc_service_mifintrbit_alloc_fromhost" },
	{ 0x8f30061a, "scsc_service_mifintrbit_register_tohost" },
	{ 0xa9941a8b, "__pm_relax" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x2a3901ee, "__pm_stay_awake" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0x96848186, "scnprintf" },
	{ 0x7f998318, "scsc_mx_phandle_property_read_u32" },
	{ 0x75d37431, "mx140_file_request_conf" },
	{ 0x37cfb920, "scsc_log_collector_write" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0x54f79951, "get_device" },
	{ 0x8a27b998, "scsc_mx_get_device" },
	{ 0xfa68248, "scsc_mx_service_start" },
	{ 0x404a0c68, "scsc_mx_service_mif_addr_to_phys" },
	{ 0xb3d68917, "scsc_mx_service_get_bt_audio_abox" },
	{ 0x4d96416d, "scsc_mx_service_mif_ptr_to_addr" },
	{ 0xa6a4410c, "scsc_mx_service_mif_addr_to_ptr" },
	{ 0x659f7c4d, "scsc_mx_service_mifram_alloc" },
	{ 0x656e91a1, "mxman_recovery_disabled" },
	{ 0x37a0cba, "kfree" },
	{ 0x5a71a326, "scsc_mx_service_open_boot_data" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0xb2990777, "scsc_printk_tag" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x6eaf83ac, "mx140_file_release_conf" },
};

MODULE_INFO(depends, "scsc_mx,scsc_log_collection,exynos-chipid_v2,scsc_logring");

MODULE_ALIAS("of:N*T*Csamsung,scsc_bt_qos");
MODULE_ALIAS("of:N*T*Csamsung,scsc_bt_qosC*");

MODULE_INFO(srcversion, "CAEA705169BCE210A53D421");
