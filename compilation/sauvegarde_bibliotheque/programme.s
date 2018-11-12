	.file	"main.c"
	.text
	.section	.rodata
	.align 8
.LC0:
	.string	"auteur:%s\n  titre:%s\n  ann\303\251e:%d\n"
	.text
	.globl	affiche
	.type	affiche, @function
affiche:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movq	-24(%rbp), %rax
	movq	%rax, -8(%rbp)
	jmp	.L2
.L3:
	movq	-8(%rbp), %rax
	movzwl	400(%rax), %eax
	movswl	%ax, %edx
	movq	-8(%rbp), %rax
	leaq	200(%rax), %rsi
	movq	-8(%rbp), %rax
	movl	%edx, %ecx
	movq	%rsi, %rdx
	movq	%rax, %rsi
	leaq	.LC0(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movq	-8(%rbp), %rax
	movq	408(%rax), %rax
	movq	%rax, -8(%rbp)
.L2:
	cmpq	$0, -8(%rbp)
	jne	.L3
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	affiche, .-affiche
	.globl	ajoute
	.type	ajoute, @function
ajoute:
.LFB1:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movl	%edx, -36(%rbp)
	movq	%rcx, -48(%rbp)
	movl	$416, %edi
	call	malloc@PLT
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	-32(%rbp), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	strcpy@PLT
	movq	-8(%rbp), %rax
	leaq	200(%rax), %rdx
	movq	-24(%rbp), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	strcpy@PLT
	movl	-36(%rbp), %eax
	movl	%eax, %edx
	movq	-8(%rbp), %rax
	movw	%dx, 400(%rax)
	movq	-8(%rbp), %rax
	movq	$0, 408(%rax)
	movq	-48(%rbp), %rax
	movq	%rax, -16(%rbp)
	jmp	.L5
.L6:
	movq	-16(%rbp), %rax
	movq	408(%rax), %rax
	movq	%rax, -16(%rbp)
.L5:
	movq	-16(%rbp), %rax
	movq	408(%rax), %rax
	testq	%rax, %rax
	jne	.L6
	movq	-16(%rbp), %rax
	movq	-8(%rbp), %rdx
	movq	%rdx, 408(%rax)
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	ajoute, .-ajoute
	.section	.rodata
	.align 8
.LC1:
	.string	"TA DEUXIEME VIE COMMANCE QUAND TU COMPRENDS QUE TU T'EN AS QU'UNE"
.LC2:
	.string	"RAPHAELLE GIORDANE"
.LC3:
	.string	"OVERLAY 3D"
.LC4:
	.string	"GHANIA BARA"
.LC5:
	.string	"LA VRAI VIE"
.LC6:
	.string	"ADELINE DIEUDONNE"
.LC7:
	.string	"TEST"
.LC8:
	.string	"MOI MEME"
	.text
	.globl	main
	.type	main, @function
main:
.LFB2:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	$2, -12(%rbp)
	movl	$15, -12(%rbp)
	movl	$416, %edi
	call	malloc@PLT
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movl	$1413564225, (%rax)
	movw	$16712, 4(%rax)
	movb	$0, 6(%rax)
	movq	-8(%rbp), %rax
	addq	$200, %rax
	movabsq	$5932739482449235789, %rdx
	movabsq	$21472698127698976, %rcx
	movq	%rdx, (%rax)
	movq	%rcx, 8(%rax)
	movq	-8(%rbp), %rax
	movw	$1965, 400(%rax)
	movq	-8(%rbp), %rax
	movq	$0, 408(%rax)
	movq	-8(%rbp), %rax
	movq	%rax, %rcx
	movl	$2015, %edx
	leaq	.LC1(%rip), %rsi
	leaq	.LC2(%rip), %rdi
	call	ajoute
	movq	-8(%rbp), %rax
	movq	%rax, %rcx
	movl	$2015, %edx
	leaq	.LC3(%rip), %rsi
	leaq	.LC4(%rip), %rdi
	call	ajoute
	movq	-8(%rbp), %rax
	movq	%rax, %rcx
	movl	$2018, %edx
	leaq	.LC5(%rip), %rsi
	leaq	.LC6(%rip), %rdi
	call	ajoute
	movq	-8(%rbp), %rax
	movq	%rax, %rcx
	movl	$2017, %edx
	leaq	.LC7(%rip), %rsi
	leaq	.LC8(%rip), %rdi
	call	ajoute
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	affiche
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	savetexte
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	main, .-main
	.section	.rodata
.LC9:
	.string	"w+"
.LC10:
	.string	"bib.txt"
.LC11:
	.string	"error"
.LC12:
	.string	"%s\t  %s\t  %d\n"
	.text
	.globl	savetexte
	.type	savetexte, @function
savetexte:
.LFB3:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	leaq	.LC9(%rip), %rsi
	leaq	.LC10(%rip), %rdi
	call	fopen@PLT
	movq	%rax, -8(%rbp)
	cmpq	$0, -8(%rbp)
	jne	.L10
	leaq	.LC11(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	jmp	.L11
.L10:
	movq	-24(%rbp), %rax
	movq	%rax, -16(%rbp)
	jmp	.L12
.L13:
	movq	-16(%rbp), %rax
	movzwl	400(%rax), %eax
	movswl	%ax, %esi
	movq	-16(%rbp), %rax
	leaq	200(%rax), %rcx
	movq	-16(%rbp), %rdx
	movq	-8(%rbp), %rax
	movl	%esi, %r8d
	leaq	.LC12(%rip), %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	fprintf@PLT
	movq	-16(%rbp), %rax
	movq	408(%rax), %rax
	movq	%rax, -16(%rbp)
.L12:
	cmpq	$0, -16(%rbp)
	jne	.L13
.L11:
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	fclose@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3:
	.size	savetexte, .-savetexte
	.ident	"GCC: (Ubuntu 7.3.0-27ubuntu1~18.04) 7.3.0"
	.section	.note.GNU-stack,"",@progbits
