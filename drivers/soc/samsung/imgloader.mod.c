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
	{ 0x6ca7c29e, "of_find_property" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0xfee6de1b, "exynos_s2mpu_release_fw_stage2_ap" },
	{ 0x7d7c7b18, "exynos_s2mpu_request_fw_stage2_ap" },
	{ 0xce2d5d37, "exynos_s2mpu_verify_subsystem_fw" },
	{ 0x37a0cba, "kfree" },
	{ 0xffb7c514, "ida_free" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0x92d08abd, "request_firmware" },
	{ 0x5ed4c6ae, "_dev_err" },
};

MODULE_INFO(depends, "exynos-s2mpu");

