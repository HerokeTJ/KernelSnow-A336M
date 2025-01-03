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
	{ 0xdcb764ad, "memset" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0x19ebf04e, "__tracepoint_rwmmio_post_read" },
	{ 0xa035d76e, "__tracepoint_rwmmio_read" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0xfe5d4bb2, "sys_tz" },
	{ 0x6980ea4b, "__log_post_read_mmio" },
	{ 0xcf1211a8, "__log_read_mmio" },
	{ 0xfeea81cb, "default_llseek" },
	{ 0xd653b126, "sched_clock" },
	{ 0x6b4b2933, "__ioremap" },
	{ 0x564bf9de, "acpm_get_nfc_log_buf" },
	{ 0x3650068f, "proc_remove" },
	{ 0xbe2adf78, "proc_set_size" },
	{ 0x20fd21c6, "proc_create" },
	{ 0x148653, "vsnprintf" },
	{ 0xfff5afc, "time64_to_tm" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0x8b9f70c7, "cpu_hwcaps" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x8900b200, "kmalloc_caches" },
	{ 0xd8339549, "param_ops_int" },
	{ 0x8f471ada, "i2c_del_driver" },
	{ 0x357b5405, "wakeup_source_unregister" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc4a8b336, "class_create_file_ns" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xa471896, "gpiod_to_irq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xfbc84afe, "gpiod_set_raw_value" },
	{ 0x2a3901ee, "__pm_stay_awake" },
	{ 0xd98115d2, "gpiod_set_raw_value_cansleep" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0xaf507de1, "__arch_copy_from_user" },
	{ 0x6b2941b2, "__arch_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xb86fd3a1, "i2c_transfer_buffer_flags" },
	{ 0x5c39520d, "pinctrl_select_state" },
	{ 0x79a35362, "pinctrl_lookup_state" },
	{ 0xaa48f219, "devm_pinctrl_get" },
	{ 0x982b7d12, "of_get_named_gpio_flags" },
	{ 0x28230a3f, "wakeup_source_register" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0xb770a9bd, "clk_get" },
	{ 0xdbddc967, "regulator_get" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0xd604c3f, "devm_kfree" },
	{ 0xdcef2da4, "misc_deregister" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xfe990052, "gpio_free" },
	{ 0x13a54ed5, "__class_create" },
	{ 0x6331d19e, "misc_register" },
	{ 0x86f16c20, "devm_pinctrl_put" },
	{ 0x4f72f07e, "i2c_register_driver" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xa9941a8b, "__pm_relax" },
	{ 0x63baf885, "gpiod_direction_output_raw" },
	{ 0xf3bd923d, "regulator_enable" },
	{ 0x8a25ae5d, "pm_wakeup_ws_event" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x1a93828e, "gpiod_direction_input" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0x7ee96f3, "gpiod_get_raw_value_cansleep" },
	{ 0x2c531865, "gpio_to_desc" },
	{ 0x9a7402a8, "gpiod_get_raw_value" },
	{ 0x2f1fa27c, "regulator_is_enabled" },
	{ 0x12a38747, "usleep_range" },
	{ 0x6ca7c29e, "of_find_property" },
	{ 0xad0a8a5a, "of_get_property" },
	{ 0x37a0cba, "kfree" },
	{ 0x2072ee9b, "request_threaded_irq" },
	{ 0x47229b5c, "gpio_request" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x574add77, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0xeb9065d9, "mutex_lock" },
};

MODULE_INFO(depends, "exynos_acpm");

MODULE_ALIAS("i2c:sec-nfc");
