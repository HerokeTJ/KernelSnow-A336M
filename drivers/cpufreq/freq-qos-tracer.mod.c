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
	{ 0x2d3385d3, "system_wq" },
	{ 0xde7ece30, "__cpu_possible_mask" },
	{ 0x8900b200, "kmalloc_caches" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0x6214aef2, "cpufreq_unregister_notifier" },
	{ 0x732ac580, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0xef1d7977, "kobject_init_and_add" },
	{ 0xc5850110, "printk" },
	{ 0x65d9e877, "cpufreq_register_notifier" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0x894967be, "freq_qos_remove_request" },
	{ 0x37a0cba, "kfree" },
	{ 0x28498a88, "freq_qos_add_request" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Csamsung,freq-qos-tracer");
MODULE_ALIAS("of:N*T*Csamsung,freq-qos-tracerC*");
