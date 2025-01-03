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
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0x8b9f70c7, "cpu_hwcaps" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xaf507de1, "__arch_copy_from_user" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0x6b2941b2, "__arch_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe2aa8e76, "generic_file_llseek" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x20fd21c6, "proc_create" },
	{ 0x574add77, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xd653b126, "sched_clock" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x148653, "vsnprintf" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0x96848186, "scnprintf" },
	{ 0x98cf60b3, "strlen" },
	{ 0xeb9065d9, "mutex_lock" },
};

MODULE_INFO(depends, "");

