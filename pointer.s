	.file	"pointer.c"
	.text
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC0:
	.ascii "double\0"
LC1:
	.ascii "short\0"
LC2:
	.ascii "%23s %10s\12\0"
LC3:
	.ascii "pointers+%d: %10p %10p\12\0"
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
	subl	$80, %esp
	call	___main
	leal	60(%esp), %eax
	movl	%eax, 72(%esp)
	leal	24(%esp), %eax
	movl	%eax, 68(%esp)
	movl	$LC0, 8(%esp)
	movl	$LC1, 4(%esp)
	movl	$LC2, (%esp)
	call	_printf
	movw	$0, 78(%esp)
	jmp	L2
L3:
	movswl	78(%esp), %eax
	leal	0(,%eax,8), %edx
	movl	68(%esp), %eax
	leal	(%edx,%eax), %ecx
	movswl	78(%esp), %eax
	leal	(%eax,%eax), %edx
	movl	72(%esp), %eax
	addl	%eax, %edx
	movswl	78(%esp), %eax
	movl	%ecx, 12(%esp)
	movl	%edx, 8(%esp)
	movl	%eax, 4(%esp)
	movl	$LC3, (%esp)
	call	_printf
	movzwl	78(%esp), %eax
	addl	$1, %eax
	movw	%ax, 78(%esp)
L2:
	cmpw	$3, 78(%esp)
	jle	L3
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE13:
	.ident	"GCC: (MinGW.org GCC Build-2) 9.2.0"
	.def	_printf;	.scl	2;	.type	32;	.endef
