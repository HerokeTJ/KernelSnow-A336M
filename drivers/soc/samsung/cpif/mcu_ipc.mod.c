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
	{ 0x95575c33, "__tracepoint_rwmmio_write" },
	{ 0x19ebf04e, "__tracepoint_rwmmio_post_read" },
	{ 0xa035d76e, "__tracepoint_rwmmio_read" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0xfa8a5bb0, "devm_request_threaded_irq" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0xf1e046cc, "panic" },
	{ 0xaf189c2c, "platform_get_irq" },
	{ 0x9cf0dacc, "of_property_read_string" },
	{ 0x69601c70, "of_get_next_child" },
	{ 0xb0ee738d, "of_get_child_by_name" },
	{ 0xbbd62b47, "devm_platform_ioremap_resource" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0x31dfd5cd, "__log_write_mmio" },
	{ 0x6980ea4b, "__log_post_read_mmio" },
	{ 0xcf1211a8, "__log_read_mmio" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x2a7b4b03, "irq_set_affinity_hint" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x7b0a3e84, "cpif_memlog_log_obj" },
	{ 0xef8f1f82, "memlog_write_printf" },
	{ 0x8950aa66, "cpif_memlog_log_enabled" },
	{ 0xc5850110, "printk" },
	{ 0x1d24c881, "___ratelimit" },
};

MODULE_INFO(depends, "cpif_memlogger,memlogger");

MODULE_ALIAS("of:N*T*Csamsung,exynos-cp-mailbox");
MODULE_ALIAS("of:N*T*Csamsung,exynos-cp-mailboxC*");
