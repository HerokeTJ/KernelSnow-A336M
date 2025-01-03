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
	{ 0xa7c8e259, "__pm_runtime_disable" },
	{ 0x871df5fa, "__pm_runtime_idle" },
	{ 0x8637ac5d, "__pm_runtime_resume" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xaf507de1, "__arch_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0x896f768, "simple_open" },
	{ 0xfeea81cb, "default_llseek" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x5243bc7e, "debugfs_remove" },
	{ 0x8081ce78, "pm_runtime_enable" },
	{ 0x63ef7ca7, "debugfs_create_file" },
	{ 0x82b308e8, "debugfs_create_dir" },
	{ 0xc5850110, "printk" },
	{ 0x503a285e, "__platform_driver_register" },
};

MODULE_INFO(depends, "");

