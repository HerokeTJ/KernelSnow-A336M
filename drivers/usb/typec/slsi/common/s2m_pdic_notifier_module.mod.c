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
	{ 0x6ca7c29e, "of_find_property" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0x87f6e3eb, "of_find_node_by_name" },
	{ 0xbbfcc83e, "power_supply_get_drvdata" },
	{ 0x62e6d81c, "power_supply_register" },
	{ 0xddfe4bf7, "send_otg_notify" },
	{ 0x8d07f3f6, "pdic_send_dock_uevent" },
	{ 0x8d8d55a4, "pdic_send_dock_intent" },
	{ 0xda4b3cfc, "set_sec_uvdm_rx_header" },
	{ 0x752c55c9, "get_checksum" },
	{ 0xf02aa937, "wait_for_completion_interruptible_timeout" },
	{ 0xeba2b203, "set_sec_uvdm_tx_tailer" },
	{ 0xaa412d51, "get_data_size" },
	{ 0xe6ffe864, "set_sec_uvdm_tx_header" },
	{ 0x92e08648, "set_sec_uvdm_header" },
	{ 0x19c3ab0, "set_uvdmset_count" },
	{ 0x152ac01e, "set_endian" },
	{ 0x59adfe33, "set_uvdm_header" },
	{ 0xbbcf39fb, "set_msg_header" },
	{ 0xf8beca97, "cancel_delayed_work_sync" },
	{ 0x175ced1, "power_supply_get_by_name" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xa9941a8b, "__pm_relax" },
	{ 0x2a3901ee, "__pm_stay_awake" },
	{ 0x12a38747, "usleep_range" },
	{ 0xa5939272, "power_supply_put" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x6c60962c, "inc_hw_param" },
	{ 0xe903e3f8, "get_otg_notify" },
	{ 0xbf57e89e, "queue_delayed_work_on" },
	{ 0x732ac580, "queue_work_on" },
	{ 0x4ffccebf, "pdic_notifier_notify" },
	{ 0xe979801d, "pdic_usbstatus_string" },
	{ 0x8fc070f3, "pdic_event_id_string" },
	{ 0xfe85e84c, "pdic_event_dest_string" },
	{ 0x253af43d, "delayed_work_timer_fn" },
	{ 0x79cf5987, "init_timer_key" },
	{ 0xac96441a, "typec_register_port" },
	{ 0x734a9c4d, "typec_get_drvdata" },
	{ 0x37a0cba, "kfree" },
	{ 0x9cad8da6, "typec_unregister_partner" },
	{ 0xe1e2a5b4, "typec_register_partner" },
	{ 0x5f2c6469, "typec_set_data_role" },
	{ 0x33fd62de, "typec_set_pwr_opmode" },
	{ 0x8900b200, "kmalloc_caches" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xd2b0c61e, "pdic_misc_init" },
	{ 0x95a5e27d, "pdic_register_switch_device" },
	{ 0xdef5a27a, "pdic_core_register_chip" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x28230a3f, "wakeup_source_register" },
	{ 0x574add77, "__mutex_init" },
	{ 0xdfef5d08, "get_pdic_device" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0x8eff6041, "_dev_info" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0xf5a94b83, "__init_rwsem" },
	{ 0x8317ad7c, "blocking_notifier_call_chain" },
	{ 0x963aa2a9, "blocking_notifier_chain_unregister" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0xbb0c86a5, "blocking_notifier_chain_register" },
	{ 0xc5850110, "printk" },
};

MODULE_INFO(depends, "usb_notify_layer,pdic_notifier_module");

