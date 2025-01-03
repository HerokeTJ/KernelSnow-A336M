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
	{ 0xdcb764ad, "memset" },
	{ 0x4829a47e, "memcpy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0xe4bbc1dd, "kimage_voffset" },
	{ 0xc56a41e6, "vabits_actual" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x329d9ae3, "platform_driver_unregister" },
	{ 0x503a285e, "__platform_driver_register" },
	{ 0x2276db98, "kstrtoint" },
	{ 0x96848186, "scnprintf" },
	{ 0x939fc2ef, "hrtimer_start_range_ns" },
	{ 0x22ea644d, "usb_dm_request" },
	{ 0x250f3ecf, "__netdev_alloc_skb" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0x890c62fc, "skb_put" },
	{ 0x2441982e, "dma_sync_single_for_cpu" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x25386806, "dma_sync_single_for_device" },
	{ 0x7c44da99, "cp_shmem_get_nc_region" },
	{ 0x563a3af, "cp_shmem_get_size" },
	{ 0x60c80af3, "cp_shmem_get_base" },
	{ 0x3e3bad0a, "__tasklet_hi_schedule" },
	{ 0xcc69bd8c, "hrtimer_cancel" },
	{ 0xecd991f, "hrtimer_active" },
	{ 0xfdbad3d, "cp_mbox_register_handler" },
	{ 0xbdc9a589, "dma_set_coherent_mask" },
	{ 0x77561cbf, "dma_set_mask" },
	{ 0xfec2174f, "of_property_read_variable_u32_array" },
	{ 0x8e2fd0c, "devm_kmalloc" },
	{ 0xf1e046cc, "panic" },
	{ 0xd604c3f, "devm_kfree" },
	{ 0xd026d214, "sysfs_create_groups" },
	{ 0x3ebd5214, "hrtimer_init" },
	{ 0x2364c85a, "tasklet_init" },
	{ 0x79aacb8b, "init_dm_direct_path" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x7b0a3e84, "cpif_memlog_log_obj" },
	{ 0xef8f1f82, "memlog_write_printf" },
	{ 0x8950aa66, "cpif_memlog_log_enabled" },
	{ 0xc5850110, "printk" },
};

MODULE_INFO(depends, "usb_f_dm,shm_ipc,mcu_ipc,cpif_memlogger,memlogger");

MODULE_ALIAS("of:N*T*Csamsung,cpif-direct-dm");
MODULE_ALIAS("of:N*T*Csamsung,cpif-direct-dmC*");
