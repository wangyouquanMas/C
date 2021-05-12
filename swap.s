	.file	"swap.c"
	.text
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
	.align 4
LC0:
	.ascii "In main(),pooh = %d and &pooh = %p\12\0"
	.align 4
LC1:
	.ascii "In main(),bah = %d and &bah = %p\12\0"
	.align 4
LC2:
	.ascii "In main(),pooh = %d and bah = %d\12\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB13:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$32, %esp
	call	___main
	movl	$2, 28(%esp)
	movl	$5, 24(%esp)
	movl	28(%esp), %eax
	leal	28(%esp), %edx
	movl	%edx, 8(%esp)
	movl	%eax, 4(%esp)
	movl	$LC0, (%esp)
	call	_printf
	movl	24(%esp), %eax
	leal	24(%esp), %edx
	movl	%edx, 8(%esp)
	movl	%eax, 4(%esp)
	movl	$LC1, (%esp)
	call	_printf
	leal	24(%esp), %eax
	movl	%eax, 4(%esp)
	leal	28(%esp), %eax
	movl	%eax, (%esp)
	call	_mikado
	movl	24(%esp), %edx
	movl	28(%esp), %eax
	movl	%edx, 8(%esp)
	movl	%eax, 4(%esp)
	movl	$LC2, (%esp)
	call	_printf
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE13:
	.globl	_mikado
	.def	_mikado;	.scl	2;	.type	32;	.endef
_mikado:
LFB14:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$16, %esp
	movl	8(%ebp), %eax  ; eax = &pooh
	movl	(%eax), %eax    ;  eax = 2
	movl	%eax, -4(%ebp) ; (ebp-4) = 2
	movl	12(%ebp), %eax ; eax = &bah
	movl	(%eax), %edx     ; edx = 5
	movl	8(%ebp), %eax   ;  eax = &pooh 
	movl	%edx, (%eax)    ;   pooh = 5
	movl	12(%ebp), %eax ;  eax = &bah
	movl	-4(%ebp), %edx ;  edx = 2
	movl	%edx, (%eax)     ; bah = 2
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE14:
	.ident	"GCC: (MinGW.org GCC Build-2) 9.2.0"
	.def	_printf;	.scl	2;	.type	32;	.endef
