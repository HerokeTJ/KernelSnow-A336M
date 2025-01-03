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
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0x8b9f70c7, "cpu_hwcaps" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x8900b200, "kmalloc_caches" },
	{ 0xd8339549, "param_ops_int" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xaf507de1, "__arch_copy_from_user" },
	{ 0x2276db98, "kstrtoint" },
	{ 0x6b2941b2, "__arch_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe2aa8e76, "generic_file_llseek" },
	{ 0xb4ce1251, "secdbg_exin_set_aud" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0x3650068f, "proc_remove" },
	{ 0xf474fdcb, "kfree_const" },
	{ 0xa79bc746, "proc_create_data" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xa47da9dd, "debugfs_create_symlink" },
	{ 0x18c67997, "proc_mkdir" },
	{ 0x574add77, "__mutex_init" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0x98cf60b3, "strlen" },
	{ 0x4fdece8c, "dev_driver_string" },
	{ 0x96848186, "scnprintf" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x999e8297, "vfree" },
	{ 0x20bb3709, "snd_ctl_boolean_mono_info" },
	{ 0x732ac580, "queue_work_on" },
	{ 0xd653b126, "sched_clock" },
	{ 0x229a20fd, "kobject_uevent_env" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x89568686, "secdbg_mode_enter_upload" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x9a916a85, "snd_soc_add_card_controls" },
	{ 0x8eff6041, "_dev_info" },
	{ 0xbc7a4422, "_dev_warn" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0x148653, "vsnprintf" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0xc5850110, "printk" },
	{ 0xeb9065d9, "mutex_lock" },
};

MODULE_INFO(depends, "sec_debug_extra_info,sec_debug_mode");

MODULE_ALIAS("of:N*T*Csamsung,audio-debug");
MODULE_ALIAS("of:N*T*Csamsung,audio-debugC*");
