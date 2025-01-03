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
	{ 0x8900b200, "kmalloc_caches" },
	{ 0x6c60962c, "inc_hw_param" },
	{ 0xe903e3f8, "get_otg_notify" },
	{ 0x56e342ec, "switch_dev_register" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xae3fbde0, "switch_set_state" },
	{ 0x175ced1, "power_supply_get_by_name" },
	{ 0xa5939272, "power_supply_put" },
	{ 0x7cc4a5d, "printk_timed_ratelimit" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x98cf60b3, "strlen" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5a921311, "strncmp" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe8415b1d, "sysfs_remove_group" },
	{ 0xaa3caa56, "sysfs_create_group" },
	{ 0x30bbe06f, "sec_device_create" },
	{ 0xd8339549, "param_ops_int" },
	{ 0xf5a94b83, "__init_rwsem" },
	{ 0x8317ad7c, "blocking_notifier_call_chain" },
	{ 0x963aa2a9, "blocking_notifier_chain_unregister" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0xbb0c86a5, "blocking_notifier_chain_register" },
	{ 0xc5850110, "printk" },
};

MODULE_INFO(depends, "usb_notify_layer,switch_class,sec_class");

