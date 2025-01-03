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
	{ 0x7ceeac9, "panic_notifier_list" },
	{ 0xd8339549, "param_ops_int" },
	{ 0x7181db30, "atomic_notifier_chain_unregister" },
	{ 0xbe6aa176, "dbg_snapshot_scratch_clear" },
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
	{ 0xc5850110, "printk" },
};

MODULE_INFO(depends, "dss");

