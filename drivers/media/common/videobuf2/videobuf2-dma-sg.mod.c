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
	{ 0x45fd5dda, "vb2_common_vm_ops" },
	{ 0xec2fc692, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x8900b200, "kmalloc_caches" },
	{ 0xd8339549, "param_ops_int" },
	{ 0x2cd90edd, "__cfi_slowpath" },
	{ 0xc143e7be, "vm_map_pages" },
	{ 0x92e8f035, "vm_map_ram" },
	{ 0xb6a444cd, "dma_buf_vmap" },
	{ 0xe1506dd, "dma_buf_unmap_attachment" },
	{ 0x90a8a2dc, "dma_buf_vunmap" },
	{ 0x20d2f8c3, "dma_buf_map_attachment" },
	{ 0x78ec79c1, "dma_buf_detach" },
	{ 0x23ce83ac, "dma_buf_attach" },
	{ 0x37435e08, "set_page_dirty_lock" },
	{ 0xc5e5573a, "frame_vector_to_pages" },
	{ 0xccd197c7, "vb2_destroy_framevec" },
	{ 0xa21fa765, "vb2_create_framevec" },
	{ 0xb175f0a, "dma_sync_sg_for_device" },
	{ 0xa5aafd87, "dma_sync_sg_for_cpu" },
	{ 0xe8b268ae, "mutex_unlock" },
	{ 0xeb9065d9, "mutex_lock" },
	{ 0x87b8798d, "sg_next" },
	{ 0x3a2f6702, "sg_alloc_table" },
	{ 0xfb1bfabb, "dma_buf_export" },
	{ 0x335a4cc9, "dma_unmap_sg_attrs" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x3fd2571, "vm_unmap_ram" },
	{ 0x90b51f72, "dma_map_sg_attrs" },
	{ 0xcfd14bde, "__alloc_pages_nodemask" },
	{ 0x282a7b02, "split_page" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xb38391e9, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x5a095c99, "__free_pages" },
	{ 0x7f5b4fe4, "sg_free_table" },
	{ 0xbc44cef7, "put_device" },
	{ 0x54f79951, "get_device" },
	{ 0x753d5353, "sg_alloc_table_from_pages" },
	{ 0xc5850110, "printk" },
};

MODULE_INFO(depends, "");

