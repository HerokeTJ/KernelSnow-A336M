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
	{ 0x62ad2053, "cpu_bit_bitmap" },
	{ 0x19ebf04e, "__tracepoint_rwmmio_post_read" },
	{ 0xa035d76e, "__tracepoint_rwmmio_read" },
	{ 0x95575c33, "__tracepoint_rwmmio_write" },
	{ 0xba497f13, "loops_per_jiffy" },
	{ 0x280f9f14, "__per_cpu_offset" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xde7ece30, "__cpu_possible_mask" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0xd653b126, "sched_clock" },
	{ 0xb30d744, "__clocksource_register_scale" },
	{ 0xf21e1f9b, "disable_percpu_irq" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x449dcecb, "clockevents_config_and_register" },
	{ 0x335c570f, "enable_percpu_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x2a7b4b03, "irq_set_affinity_hint" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x57ad17e9, "__cpuhp_setup_state" },
	{ 0x2072ee9b, "request_threaded_irq" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0x6980ea4b, "__log_post_read_mmio" },
	{ 0xcf1211a8, "__log_read_mmio" },
	{ 0x31dfd5cd, "__log_write_mmio" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0x6d9ee2a0, "__request_percpu_irq" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xbc6bec66, "free_percpu_irq" },
	{ 0x92ad1db9, "cpumask_next" },
	{ 0x56470118, "__warn_printk" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xf1e046cc, "panic" },
	{ 0xc7b5b50e, "of_clk_get_by_name" },
	{ 0xdc33c5a9, "of_iomap" },
	{ 0xc5850110, "printk" },
	{ 0x938664fb, "of_irq_parse_one" },
	{ 0xcc23d1e5, "irq_of_parse_and_map" },
	{ 0xd31ccb06, "of_machine_is_compatible" },
	{ 0x503a285e, "__platform_driver_register" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Csamsung,exynos4210-mct");
MODULE_ALIAS("of:N*T*Csamsung,exynos4210-mctC*");
MODULE_ALIAS("of:N*T*Csamsung,exynos4412-mct");
MODULE_ALIAS("of:N*T*Csamsung,exynos4412-mctC*");
