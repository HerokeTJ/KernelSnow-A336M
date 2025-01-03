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
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xbf5d553, "irq_set_chip_and_handler_name" },
	{ 0x45355328, "irq_to_desc" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x72a8f399, "irq_set_chip" },
	{ 0x20a789ac, "irq_set_chip_data" },
	{ 0xd67517d1, "irq_get_irq_data" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0xe8181df3, "irq_domain_set_info" },
	{ 0xeacc482, "irq_domain_get_irq_data" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xc7da062f, "iomem_resource" },
	{ 0x19ebf04e, "__tracepoint_rwmmio_post_read" },
	{ 0xa035d76e, "__tracepoint_rwmmio_read" },
	{ 0x95575c33, "__tracepoint_rwmmio_write" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0x53833461, "irq_domain_remove" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0x30897ed2, "irq_find_mapping" },
	{ 0x7ceaf0d5, "generic_handle_irq" },
	{ 0x49a38900, "__irq_set_handler" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x73d2ee76, "__irq_domain_add" },
	{ 0x1dc7fa5f, "devm_ioremap" },
	{ 0x27c4b21e, "__devm_request_region" },
	{ 0xc06cf568, "platform_get_resource_byname" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0x8eff6041, "_dev_info" },
	{ 0x3dcb88a0, "irq_set_handler_data" },
	{ 0xee0968d4, "handle_level_irq" },
	{ 0xaf189c2c, "platform_get_irq" },
	{ 0x5ed4c6ae, "_dev_err" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0x6980ea4b, "__log_post_read_mmio" },
	{ 0xcf1211a8, "__log_read_mmio" },
	{ 0x31dfd5cd, "__log_write_mmio" },
	{ 0xed997340, "irq_domain_xlate_onetwocell" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Csamsung,mailbox-asoc");
MODULE_ALIAS("of:N*T*Csamsung,mailbox-asocC*");
