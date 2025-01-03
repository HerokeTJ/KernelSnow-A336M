	.text
	.section	.note.gnu.property,"a",@note
	.p2align	3
	.word	4
	.word	16
	.word	5
	.asciz	"GNU"
	.word	3221225472
	.word	4
	.word	3
	.word	0
.Lsec_end0:
	.text
	.file	"bounds.c"
	.globl	main                            // -- Begin function main
	.p2align	2
	.type	main,@function
main:                                   // @main
// %bb.0:
	hint	#25
	//APP

	.ascii	"->NR_PAGEFLAGS 26 __NR_PAGEFLAGS"
	//NO_APP
	//APP

	.ascii	"->MAX_NR_ZONES 3 __MAX_NR_ZONES"
	//NO_APP
	//APP

	.ascii	"->NR_CPUS_BITS 5 ilog2(CONFIG_NR_CPUS)"
	//NO_APP
	//APP

	.ascii	"->SPINLOCK_SIZE 4 sizeof(spinlock_t)"
	//NO_APP
	mov	w0, wzr
	hint	#29
	ret
.Lfunc_end0:
	.size	main, .Lfunc_end0-main
                                        // -- End function
	.ident	"Android (7284624, based on r416183b) clang version 12.0.5 (https://android.googlesource.com/toolchain/llvm-project c935d99d7cf2016289302412d708641d52d2f7ee)"
	.section	".note.GNU-stack","",@progbits
	.addrsig
