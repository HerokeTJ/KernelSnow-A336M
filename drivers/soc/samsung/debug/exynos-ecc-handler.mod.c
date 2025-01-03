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
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xac594e02, "__cpu_online_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x92ad1db9, "cpumask_next" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x4445ab21, "cpumask_next_and" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x57ad17e9, "__cpuhp_setup_state" },
	{ 0xf474c21c, "bitmap_print_to_pagebuf" },
	{ 0x826e3c5f, "dbg_snapshot_ecc_dump" },
	{ 0xf1e046cc, "panic" },
	{ 0xc5850110, "printk" },
	{ 0x45355328, "irq_to_desc" },
	{ 0x2072ee9b, "request_threaded_irq" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7c02aadb, "of_property_read_string_helper" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xf6c8dc62, "cpu_hotplug_enable" },
	{ 0x37a0cba, "kfree" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x2a7b4b03, "irq_set_affinity_hint" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xa8a4448c, "of_property_read_u32_index" },
	{ 0x8eff6041, "_dev_info" },
	{ 0xaf189c2c, "platform_get_irq" },
	{ 0x1c9248ef, "of_prop_next_string" },
	{ 0x6ca7c29e, "of_find_property" },
	{ 0x4d0015e2, "cpu_hotplug_disable" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x503a285e, "__platform_driver_register" },
};

MODULE_INFO(depends, "dss");

MODULE_ALIAS("of:N*T*Csamsung,exynos-ecc-handler");
MODULE_ALIAS("of:N*T*Csamsung,exynos-ecc-handlerC*");
