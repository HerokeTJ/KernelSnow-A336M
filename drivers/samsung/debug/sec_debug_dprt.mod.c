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
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x98a9d10c, "__stack_chk_fail" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0x8b9f70c7, "cpu_hwcaps" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x6b2941b2, "__arch_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x5a921311, "strncmp" },
	{ 0x999e8297, "vfree" },
	{ 0x9166fada, "strncpy" },
	{ 0x35bd5cb7, "generic_file_read_iter" },
	{ 0x90b83c6f, "iov_iter_kvec" },
	{ 0xc8561116, "file_ra_state_init" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x1aa5f837, "blkdev_get_by_dev" },
	{ 0xc10fddb8, "name_to_dev_t" },
	{ 0xedd07e1a, "blkdev_get_by_path" },
	{ 0xbe2adf78, "proc_set_size" },
	{ 0x20fd21c6, "proc_create" },
	{ 0xc5850110, "printk" },
	{ 0x9cf0dacc, "of_property_read_string" },
};

MODULE_INFO(depends, "");

