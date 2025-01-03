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
	{ 0xe4bbc1dd, "kimage_voffset" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0xc56a41e6, "vabits_actual" },
	{ 0x8900b200, "kmalloc_caches" },
	{ 0xde7ece30, "__cpu_possible_mask" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x42f1936, "set_cpus_allowed_ptr" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3cf1ad62, "dbg_snapshot_add_bl_item_info" },
	{ 0xe3aa3619, "device_create_file" },
	{ 0x8eff6041, "_dev_info" },
	{ 0xd67517d1, "irq_get_irq_data" },
	{ 0xfa8a5bb0, "devm_request_threaded_irq" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0xcc23d1e5, "irq_of_parse_and_map" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xa4033df7, "dbg_snapshot_expire_watchdog" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x50f85302, "__arm_smccc_hvc" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0xc5850110, "printk" },
};

MODULE_INFO(depends, "dss");

