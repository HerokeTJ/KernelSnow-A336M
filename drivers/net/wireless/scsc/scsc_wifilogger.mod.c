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
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x98cf60b3, "strlen" },
	{ 0x56470118, "__warn_printk" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0x8b9f70c7, "cpu_hwcaps" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x732ac580, "queue_work_on" },
	{ 0x79cf5987, "init_timer_key" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x72cd0f7f, "mod_timer" },
	{ 0xd653b126, "sched_clock" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x6b2941b2, "__arch_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xf15e728e, "del_timer_sync" },
	{ 0xd969d6f4, "cancel_work_sync" },
	{ 0xd2366449, "scsc_printk_tag_lvl" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8900b200, "kmalloc_caches" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x57a8f71, "mxman_unregister_firmware_notifier" },
	{ 0x5a921311, "strncmp" },
	{ 0x7b147c70, "mxman_register_firmware_notifier" },
	{ 0x574add77, "__mutex_init" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0x3f808496, "mxman_get_driver_version" },
	{ 0x13135a08, "mxman_get_fw_version" },
	{ 0xb2990777, "scsc_printk_tag" },
};

MODULE_INFO(depends, "scsc_logring,scsc_mx");

