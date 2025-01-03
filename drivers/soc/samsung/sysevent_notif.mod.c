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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x7c24b32d, "module_layout" },
	{ 0x8900b200, "kmalloc_caches" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfa9d85fd, "srcu_notifier_call_chain" },
	{ 0x36d70b72, "srcu_init_notifier_head" },
	{ 0x5792f848, "strlcpy" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xc579925f, "srcu_notifier_chain_unregister" },
	{ 0xb5dec381, "srcu_notifier_chain_register" },
};

MODULE_INFO(depends, "");

