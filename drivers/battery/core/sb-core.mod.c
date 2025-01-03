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
	{ 0xbf27df8c, "simple_attr_open" },
	{ 0xeb895e94, "simple_attr_release" },
	{ 0xd9bf06e9, "simple_attr_write" },
	{ 0x4a788936, "simple_attr_read" },
	{ 0xe2aa8e76, "generic_file_llseek" },
	{ 0xd740362b, "seq_printf" },
	{ 0xa2aa781e, "seq_puts" },
	{ 0x4f731e2b, "single_open" },
	{ 0xef42eddb, "single_release" },
	{ 0xb9997d36, "seq_read" },
	{ 0xad9f2705, "seq_lseek" },
	{ 0x4bef7eba, "debugfs_create_u32" },
	{ 0x63ef7ca7, "debugfs_create_file" },
	{ 0x82b308e8, "debugfs_create_dir" },
	{ 0x5243bc7e, "debugfs_remove" },
	{ 0xe3aa3619, "device_create_file" },
	{ 0x164eb7f6, "device_remove_file" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xf5a94b83, "__init_rwsem" },
	{ 0x30bbe06f, "sec_device_create" },
	{ 0x963aa2a9, "blocking_notifier_chain_unregister" },
	{ 0xbb0c86a5, "blocking_notifier_chain_register" },
	{ 0xc5850110, "printk" },
	{ 0x8317ad7c, "blocking_notifier_call_chain" },
	{ 0x8900b200, "kmalloc_caches" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x574add77, "__mutex_init" },
};

MODULE_INFO(depends, "sec_class");

