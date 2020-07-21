	.data
	.align	2
	.globl	class_nameTab
	.globl	Main_protObj
	.globl	Int_protObj
	.globl	String_protObj
	.globl	bool_const0
	.globl	bool_const1
	.globl	_int_tag
	.globl	_bool_tag
	.globl	_string_tag
_int_tag:
	.word	3
_bool_tag:
	.word	4
_string_tag:
	.word	5
	.globl	_MemMgr_INITIALIZER
_MemMgr_INITIALIZER:
	.word	_NoGC_Init
	.globl	_MemMgr_COLLECTOR
_MemMgr_COLLECTOR:
	.word	_NoGC_Collect
	.globl	_MemMgr_TEST
_MemMgr_TEST:
	.word	0
	.word	-1
str_const25:
	.word	5
	.word	6
	.word	String_dispTab
	.word	int_const6
	.ascii	"String"
	.byte	0	
	.align	2
	.word	-1
str_const24:
	.word	5
	.word	6
	.word	String_dispTab
	.word	int_const7
	.ascii	"Bool"
	.byte	0	
	.align	2
	.word	-1
str_const23:
	.word	5
	.word	5
	.word	String_dispTab
	.word	int_const8
	.ascii	"Int"
	.byte	0	
	.align	2
	.word	-1
str_const22:
	.word	5
	.word	6
	.word	String_dispTab
	.word	int_const7
	.ascii	"Main"
	.byte	0	
	.align	2
	.word	-1
str_const21:
	.word	5
	.word	5
	.word	String_dispTab
	.word	int_const4
	.ascii	"IO"
	.byte	0	
	.align	2
	.word	-1
str_const20:
	.word	5
	.word	6
	.word	String_dispTab
	.word	int_const6
	.ascii	"Object"
	.byte	0	
	.align	2
	.word	-1
str_const19:
	.word	5
	.word	8
	.word	String_dispTab
	.word	int_const9
	.ascii	"<basic class>"
	.byte	0	
	.align	2
	.word	-1
str_const18:
	.word	5
	.word	8
	.word	String_dispTab
	.word	int_const10
	.ascii	"nontrivial_3.cl"
	.byte	0	
	.align	2
	.word	-1
str_const17:
	.word	5
	.word	5
	.word	String_dispTab
	.word	int_const5
	.ascii	"0"
	.byte	0	
	.align	2
	.word	-1
str_const16:
	.word	5
	.word	5
	.word	String_dispTab
	.word	int_const5
	.ascii	"1"
	.byte	0	
	.align	2
	.word	-1
str_const15:
	.word	5
	.word	5
	.word	String_dispTab
	.word	int_const1
	.byte	0	
	.align	2
	.word	-1
str_const14:
	.word	5
	.word	5
	.word	String_dispTab
	.word	int_const5
	.ascii	"\n"
	.byte	0	
	.align	2
	.word	-1
str_const13:
	.word	5
	.word	11
	.word	String_dispTab
	.word	int_const11
	.ascii	"\nThe maximum f(x,y,z) = "
	.byte	0	
	.align	2
	.word	-1
str_const12:
	.word	5
	.word	13
	.word	String_dispTab
	.word	int_const12
	.ascii	" such that f(x,y,z) is maximised = "
	.byte	0	
	.align	2
	.word	-1
str_const11:
	.word	5
	.word	6
	.word	String_dispTab
	.word	int_const13
	.ascii	"<=z<="
	.byte	0	
	.align	2
	.word	-1
str_const10:
	.word	5
	.word	12
	.word	String_dispTab
	.word	int_const14
	.ascii	"The minimum value of z where "
	.byte	0	
	.align	2
	.word	-1
str_const9:
	.word	5
	.word	16
	.word	String_dispTab
	.word	int_const15
	.ascii	"please enter L and R according to constraints\n"
	.byte	0	
	.align	2
	.word	-1
str_const8:
	.word	5
	.word	12
	.word	String_dispTab
	.word	int_const16
	.ascii	"please enter r greater than l\n"
	.byte	0	
	.align	2
	.word	-1
str_const7:
	.word	5
	.word	15
	.word	String_dispTab
	.word	int_const17
	.ascii	"please enter R according to constraints\n"
	.byte	0	
	.align	2
	.word	-1
str_const6:
	.word	5
	.word	15
	.word	String_dispTab
	.word	int_const17
	.ascii	"please enter L according to constraints\n"
	.byte	0	
	.align	2
	.word	-1
str_const5:
	.word	5
	.word	15
	.word	String_dispTab
	.word	int_const17
	.ascii	"please enter Y according to constraints\n"
	.byte	0	
	.align	2
	.word	-1
str_const4:
	.word	5
	.word	15
	.word	String_dispTab
	.word	int_const17
	.ascii	"please enter X according to constraints\n"
	.byte	0	
	.align	2
	.word	-1
str_const3:
	.word	5
	.word	10
	.word	String_dispTab
	.word	int_const18
	.ascii	"Enter the value of R : "
	.byte	0	
	.align	2
	.word	-1
str_const2:
	.word	5
	.word	10
	.word	String_dispTab
	.word	int_const18
	.ascii	"Enter the value of L : "
	.byte	0	
	.align	2
	.word	-1
str_const1:
	.word	5
	.word	10
	.word	String_dispTab
	.word	int_const18
	.ascii	"Enter the value of Y : "
	.byte	0	
	.align	2
	.word	-1
str_const0:
	.word	5
	.word	10
	.word	String_dispTab
	.word	int_const18
	.ascii	"Enter the value of X : "
	.byte	0	
	.align	2
	.word	-1
int_const18:
	.word	3
	.word	4
	.word	Int_dispTab
	.word	23
	.word	-1
int_const17:
	.word	3
	.word	4
	.word	Int_dispTab
	.word	40
	.word	-1
int_const16:
	.word	3
	.word	4
	.word	Int_dispTab
	.word	30
	.word	-1
int_const15:
	.word	3
	.word	4
	.word	Int_dispTab
	.word	46
	.word	-1
int_const14:
	.word	3
	.word	4
	.word	Int_dispTab
	.word	29
	.word	-1
int_const13:
	.word	3
	.word	4
	.word	Int_dispTab
	.word	5
	.word	-1
int_const12:
	.word	3
	.word	4
	.word	Int_dispTab
	.word	35
	.word	-1
int_const11:
	.word	3
	.word	4
	.word	Int_dispTab
	.word	24
	.word	-1
int_const10:
	.word	3
	.word	4
	.word	Int_dispTab
	.word	15
	.word	-1
int_const9:
	.word	3
	.word	4
	.word	Int_dispTab
	.word	13
	.word	-1
int_const8:
	.word	3
	.word	4
	.word	Int_dispTab
	.word	3
	.word	-1
int_const7:
	.word	3
	.word	4
	.word	Int_dispTab
	.word	4
	.word	-1
int_const6:
	.word	3
	.word	4
	.word	Int_dispTab
	.word	6
	.word	-1
int_const5:
	.word	3
	.word	4
	.word	Int_dispTab
	.word	1
	.word	-1
int_const4:
	.word	3
	.word	4
	.word	Int_dispTab
	.word	2
	.word	-1
int_const3:
	.word	3
	.word	4
	.word	Int_dispTab
	.word	10
	.word	-1
int_const2:
	.word	3
	.word	4
	.word	Int_dispTab
	.word	130
	.word	-1
int_const1:
	.word	3
	.word	4
	.word	Int_dispTab
	.word	0
	.word	-1
int_const0:
	.word	3
	.word	4
	.word	Int_dispTab
	.word	1023
	.word	-1
bool_const0:
	.word	4
	.word	4
	.word	Bool_dispTab
	.word	0
	.word	-1
bool_const1:
	.word	4
	.word	4
	.word	Bool_dispTab
	.word	1
class_nameTab:
	.word	str_const20
	.word	str_const21
	.word	str_const22
	.word	str_const23
	.word	str_const24
	.word	str_const25
class_objTab:
	.word	Object_protObj
	.word	Object_init
	.word	IO_protObj
	.word	IO_init
	.word	Main_protObj
	.word	Main_init
	.word	Int_protObj
	.word	Int_init
	.word	Bool_protObj
	.word	Bool_init
	.word	String_protObj
	.word	String_init
Object_dispTab:
	.word	Object.abort
	.word	Object.type_name
	.word	Object.copy
String_dispTab:
	.word	Object.abort
	.word	Object.type_name
	.word	Object.copy
	.word	String.length
	.word	String.concat
	.word	String.substr
Bool_dispTab:
	.word	Object.abort
	.word	Object.type_name
	.word	Object.copy
Int_dispTab:
	.word	Object.abort
	.word	Object.type_name
	.word	Object.copy
IO_dispTab:
	.word	Object.abort
	.word	Object.type_name
	.word	Object.copy
	.word	IO.out_string
	.word	IO.out_int
	.word	IO.in_string
	.word	IO.in_int
Main_dispTab:
	.word	Object.abort
	.word	Object.type_name
	.word	Object.copy
	.word	IO.out_string
	.word	IO.out_int
	.word	IO.in_string
	.word	IO.in_int
	.word	Main.main
	.word	Main.mod
	.word	Main.convert_binary
	.word	Main.convert_int
	.word	Main.bin_and
	.word	Main.bin_or
	.word	Main.f
	.word	Main.solve
	.word	-1
Object_protObj:
	.word	0
	.word	3
	.word	Object_dispTab
	.word	-1
String_protObj:
	.word	5
	.word	5
	.word	String_dispTab
	.word	int_const1
	.word	0
	.word	-1
Bool_protObj:
	.word	4
	.word	4
	.word	Bool_dispTab
	.word	0
	.word	-1
Int_protObj:
	.word	3
	.word	4
	.word	Int_dispTab
	.word	0
	.word	-1
IO_protObj:
	.word	1
	.word	3
	.word	IO_dispTab
	.word	-1
Main_protObj:
	.word	2
	.word	11
	.word	Main_dispTab
	.word	int_const1
	.word	int_const1
	.word	int_const1
	.word	int_const1
	.word	str_const15
	.word	str_const15
	.word	int_const1
	.word	int_const1
	.globl	heap_start
heap_start:
	.word	0
	.text
	.globl	Main_init
	.globl	Int_init
	.globl	String_init
	.globl	Bool_init
	.globl	Main.main
Object_init:
	addiu	$sp $sp -12
	sw	$fp 12($sp)
	sw	$s0 8($sp)
	sw	$ra 4($sp)
	addiu	$fp $sp 4
	move	$s0 $a0
	move	$a0 $s0
	lw	$fp 12($sp)
	lw	$s0 8($sp)
	lw	$ra 4($sp)
	addiu	$sp $sp 12
	jr	$ra	
String_init:
	addiu	$sp $sp -12
	sw	$fp 12($sp)
	sw	$s0 8($sp)
	sw	$ra 4($sp)
	addiu	$fp $sp 4
	move	$s0 $a0
	jal	Object_init
	move	$a0 $s0
	lw	$fp 12($sp)
	lw	$s0 8($sp)
	lw	$ra 4($sp)
	addiu	$sp $sp 12
	jr	$ra	
Bool_init:
	addiu	$sp $sp -12
	sw	$fp 12($sp)
	sw	$s0 8($sp)
	sw	$ra 4($sp)
	addiu	$fp $sp 4
	move	$s0 $a0
	jal	Object_init
	move	$a0 $s0
	lw	$fp 12($sp)
	lw	$s0 8($sp)
	lw	$ra 4($sp)
	addiu	$sp $sp 12
	jr	$ra	
Int_init:
	addiu	$sp $sp -12
	sw	$fp 12($sp)
	sw	$s0 8($sp)
	sw	$ra 4($sp)
	addiu	$fp $sp 4
	move	$s0 $a0
	jal	Object_init
	move	$a0 $s0
	lw	$fp 12($sp)
	lw	$s0 8($sp)
	lw	$ra 4($sp)
	addiu	$sp $sp 12
	jr	$ra	
IO_init:
	addiu	$sp $sp -12
	sw	$fp 12($sp)
	sw	$s0 8($sp)
	sw	$ra 4($sp)
	addiu	$fp $sp 4
	move	$s0 $a0
	jal	Object_init
	move	$a0 $s0
	lw	$fp 12($sp)
	lw	$s0 8($sp)
	lw	$ra 4($sp)
	addiu	$sp $sp 12
	jr	$ra	
Main_init:
	addiu	$sp $sp -12
	sw	$fp 12($sp)
	sw	$s0 8($sp)
	sw	$ra 4($sp)
	addiu	$fp $sp 4
	move	$s0 $a0
	jal	IO_init
	move	$a0 $s0
	lw	$fp 12($sp)
	lw	$s0 8($sp)
	lw	$ra 4($sp)
	addiu	$sp $sp 12
	jr	$ra	
Main.main:
	addiu	$sp $sp -20
	sw	$fp 20($sp)
	sw	$s0 16($sp)
	sw	$ra 12($sp)
	addiu	$fp $sp 4
	move	$s0 $a0
	la	$a0 str_const0
	sw	$a0 0($sp)
	addiu	$sp $sp -4
	move	$a0 $s0
	bne	$a0 $zero label0
	la	$a0 str_const18
	li	$t1 1
	jal	_dispatch_abort
label0:
	lw	$t1 8($a0)
	lw	$t1 12($t1)
	jalr		$t1
	move	$a0 $s0
	bne	$a0 $zero label1
	la	$a0 str_const18
	li	$t1 1
	jal	_dispatch_abort
label1:
	lw	$t1 8($a0)
	lw	$t1 24($t1)
	jalr		$t1
	sw	$a0 12($s0)
	la	$a0 str_const1
	sw	$a0 0($sp)
	addiu	$sp $sp -4
	move	$a0 $s0
	bne	$a0 $zero label2
	la	$a0 str_const18
	li	$t1 1
	jal	_dispatch_abort
label2:
	lw	$t1 8($a0)
	lw	$t1 12($t1)
	jalr		$t1
	move	$a0 $s0
	bne	$a0 $zero label3
	la	$a0 str_const18
	li	$t1 1
	jal	_dispatch_abort
label3:
	lw	$t1 8($a0)
	lw	$t1 24($t1)
	jalr		$t1
	sw	$a0 16($s0)
	la	$a0 str_const2
	sw	$a0 0($sp)
	addiu	$sp $sp -4
	move	$a0 $s0
	bne	$a0 $zero label4
	la	$a0 str_const18
	li	$t1 1
	jal	_dispatch_abort
label4:
	lw	$t1 8($a0)
	lw	$t1 12($t1)
	jalr		$t1
	move	$a0 $s0
	bne	$a0 $zero label5
	la	$a0 str_const18
	li	$t1 1
	jal	_dispatch_abort
label5:
	lw	$t1 8($a0)
	lw	$t1 24($t1)
	jalr		$t1
	sw	$a0 20($s0)
	la	$a0 str_const3
	sw	$a0 0($sp)
	addiu	$sp $sp -4
	move	$a0 $s0
	bne	$a0 $zero label6
	la	$a0 str_const18
	li	$t1 1
	jal	_dispatch_abort
label6:
	lw	$t1 8($a0)
	lw	$t1 12($t1)
	jalr		$t1
	move	$a0 $s0
	bne	$a0 $zero label7
	la	$a0 str_const18
	li	$t1 1
	jal	_dispatch_abort
label7:
	lw	$t1 8($a0)
	lw	$t1 24($t1)
	jalr		$t1
	sw	$a0 24($s0)
	la	$s1 int_const0
	lw	$a0 12($s0)
	lw	$t1 12($s1)
	lw	$t2 12($a0)
	la	$a0 bool_const1
	blt	$t1 $t2 label10
	la	$a0 bool_const0
label10:
	lw	$t1 12($a0)
	beqz	$t1 label8
	la	$a0 str_const4
	sw	$a0 0($sp)
	addiu	$sp $sp -4
	move	$a0 $s0
	bne	$a0 $zero label11
	la	$a0 str_const18
	li	$t1 1
	jal	_dispatch_abort
label11:
	lw	$t1 8($a0)
	lw	$t1 12($t1)
	jalr		$t1
	b	label9
label8:
	la	$s1 int_const0
	lw	$a0 16($s0)
	lw	$t1 12($s1)
	lw	$t2 12($a0)
	la	$a0 bool_const1
	blt	$t1 $t2 label14
	la	$a0 bool_const0
label14:
	lw	$t1 12($a0)
	beqz	$t1 label12
	la	$a0 str_const5
	sw	$a0 0($sp)
	addiu	$sp $sp -4
	move	$a0 $s0
	bne	$a0 $zero label15
	la	$a0 str_const18
	li	$t1 1
	jal	_dispatch_abort
label15:
	lw	$t1 8($a0)
	lw	$t1 12($t1)
	jalr		$t1
	b	label13
label12:
	la	$s1 int_const0
	lw	$a0 20($s0)
	lw	$t1 12($s1)
	lw	$t2 12($a0)
	la	$a0 bool_const1
	blt	$t1 $t2 label18
	la	$a0 bool_const0
label18:
	lw	$t1 12($a0)
	beqz	$t1 label16
	la	$a0 str_const6
	sw	$a0 0($sp)
	addiu	$sp $sp -4
	move	$a0 $s0
	bne	$a0 $zero label19
	la	$a0 str_const18
	li	$t1 1
	jal	_dispatch_abort
label19:
	lw	$t1 8($a0)
	lw	$t1 12($t1)
	jalr		$t1
	b	label17
label16:
	la	$s1 int_const0
	lw	$a0 24($s0)
	lw	$t1 12($s1)
	lw	$t2 12($a0)
	la	$a0 bool_const1
	blt	$t1 $t2 label22
	la	$a0 bool_const0
label22:
	lw	$t1 12($a0)
	beqz	$t1 label20
	la	$a0 str_const7
	sw	$a0 0($sp)
	addiu	$sp $sp -4
	move	$a0 $s0
	bne	$a0 $zero label23
	la	$a0 str_const18
	li	$t1 1
	jal	_dispatch_abort
label23:
	lw	$t1 8($a0)
	lw	$t1 12($t1)
	jalr		$t1
	b	label21
label20:
	lw	$s1 24($s0)
	lw	$a0 20($s0)
	jal	Object.copy
	lw	$t2 12($a0)
	lw	$t1 12($s1)
	sub	$t1 $t1 $t2
	sw	$t1 12($a0)
	move	$s1 $a0
	la	$a0 int_const1
	lw	$t1 12($s1)
	lw	$t2 12($a0)
	la	$a0 bool_const1
	blt	$t1 $t2 label26
	la	$a0 bool_const0
label26:
	lw	$t1 12($a0)
	beqz	$t1 label24
	la	$a0 str_const8
	sw	$a0 0($sp)
	addiu	$sp $sp -4
	move	$a0 $s0
	bne	$a0 $zero label27
	la	$a0 str_const18
	li	$t1 1
	jal	_dispatch_abort
label27:
	lw	$t1 8($a0)
	lw	$t1 12($t1)
	jalr		$t1
	b	label25
label24:
	la	$s1 int_const2
	lw	$s2 24($s0)
	lw	$a0 20($s0)
	jal	Object.copy
	lw	$t2 12($a0)
	lw	$t1 12($s2)
	sub	$t1 $t1 $t2
	sw	$t1 12($a0)
	lw	$t1 12($s1)
	lw	$t2 12($a0)
	la	$a0 bool_const1
	blt	$t1 $t2 label30
	la	$a0 bool_const0
label30:
	lw	$t1 12($a0)
	beqz	$t1 label28
	la	$a0 str_const9
	sw	$a0 0($sp)
	addiu	$sp $sp -4
	move	$a0 $s0
	bne	$a0 $zero label31
	la	$a0 str_const18
	li	$t1 1
	jal	_dispatch_abort
label31:
	lw	$t1 8($a0)
	lw	$t1 12($t1)
	jalr		$t1
	b	label29
label28:
	move	$a0 $s0
	bne	$a0 $zero label32
	la	$a0 str_const18
	li	$t1 1
	jal	_dispatch_abort
label32:
	lw	$t1 8($a0)
	lw	$t1 56($t1)
	jalr		$t1
	la	$a0 str_const10
	sw	$a0 0($sp)
	addiu	$sp $sp -4
	move	$a0 $s0
	bne	$a0 $zero label33
	la	$a0 str_const18
	li	$t1 1
	jal	_dispatch_abort
label33:
	lw	$t1 8($a0)
	lw	$t1 12($t1)
	jalr		$t1
	lw	$a0 20($s0)
	sw	$a0 0($sp)
	addiu	$sp $sp -4
	move	$a0 $s0
	bne	$a0 $zero label34
	la	$a0 str_const18
	li	$t1 1
	jal	_dispatch_abort
label34:
	lw	$t1 8($a0)
	lw	$t1 16($t1)
	jalr		$t1
	la	$a0 str_const11
	sw	$a0 0($sp)
	addiu	$sp $sp -4
	move	$a0 $s0
	bne	$a0 $zero label35
	la	$a0 str_const18
	li	$t1 1
	jal	_dispatch_abort
label35:
	lw	$t1 8($a0)
	lw	$t1 12($t1)
	jalr		$t1
	lw	$a0 24($s0)
	sw	$a0 0($sp)
	addiu	$sp $sp -4
	move	$a0 $s0
	bne	$a0 $zero label36
	la	$a0 str_const18
	li	$t1 1
	jal	_dispatch_abort
label36:
	lw	$t1 8($a0)
	lw	$t1 16($t1)
	jalr		$t1
	la	$a0 str_const12
	sw	$a0 0($sp)
	addiu	$sp $sp -4
	move	$a0 $s0
	bne	$a0 $zero label37
	la	$a0 str_const18
	li	$t1 1
	jal	_dispatch_abort
label37:
	lw	$t1 8($a0)
	lw	$t1 12($t1)
	jalr		$t1
	lw	$a0 36($s0)
	sw	$a0 0($sp)
	addiu	$sp $sp -4
	move	$a0 $s0
	bne	$a0 $zero label38
	la	$a0 str_const18
	li	$t1 1
	jal	_dispatch_abort
label38:
	lw	$t1 8($a0)
	lw	$t1 16($t1)
	jalr		$t1
	la	$a0 str_const13
	sw	$a0 0($sp)
	addiu	$sp $sp -4
	move	$a0 $s0
	bne	$a0 $zero label39
	la	$a0 str_const18
	li	$t1 1
	jal	_dispatch_abort
label39:
	lw	$t1 8($a0)
	lw	$t1 12($t1)
	jalr		$t1
	lw	$a0 40($s0)
	sw	$a0 0($sp)
	addiu	$sp $sp -4
	move	$a0 $s0
	bne	$a0 $zero label40
	la	$a0 str_const18
	li	$t1 1
	jal	_dispatch_abort
label40:
	lw	$t1 8($a0)
	lw	$t1 16($t1)
	jalr		$t1
	la	$a0 str_const14
	sw	$a0 0($sp)
	addiu	$sp $sp -4
	move	$a0 $s0
	bne	$a0 $zero label41
	la	$a0 str_const18
	li	$t1 1
	jal	_dispatch_abort
label41:
	lw	$t1 8($a0)
	lw	$t1 12($t1)
	jalr		$t1
label29:
label25:
label21:
label17:
label13:
label9:
	lw	$fp 20($sp)
	lw	$s0 16($sp)
	lw	$ra 12($sp)
	addiu	$sp $sp 20
	jr	$ra	
Main.mod:
	addiu	$sp $sp -24
	sw	$fp 24($sp)
	sw	$s0 20($sp)
	sw	$ra 16($sp)
	addiu	$fp $sp 4
	move	$s0 $a0
	lw	$s1 28($fp)
	lw	$s2 24($fp)
	lw	$s3 28($fp)
	lw	$a0 24($fp)
	jal	Object.copy
	lw	$t2 12($a0)
	lw	$t1 12($s3)
	div	$t1 $t1 $t2
	sw	$t1 12($a0)
	jal	Object.copy
	lw	$t2 12($a0)
	lw	$t1 12($s2)
	mul	$t1 $t1 $t2
	sw	$t1 12($a0)
	jal	Object.copy
	lw	$t2 12($a0)
	lw	$t1 12($s1)
	sub	$t1 $t1 $t2
	sw	$t1 12($a0)
	lw	$fp 24($sp)
	lw	$s0 20($sp)
	lw	$ra 16($sp)
	addiu	$sp $sp 32
	jr	$ra	
Main.convert_binary:
	addiu	$sp $sp -28
	sw	$fp 28($sp)
	sw	$s0 24($sp)
	sw	$ra 20($sp)
	addiu	$fp $sp 4
	move	$s0 $a0
	la	$s1 int_const1
	la	$s2 str_const15
	la	$s3 str_const15
label42:
	move	$s4 $s1
	la	$a0 int_const3
	lw	$t1 12($s4)
	lw	$t2 12($a0)
	la	$a0 bool_const1
	blt	$t1 $t2 label44
	la	$a0 bool_const0
label44:
	lw	$t1 12($a0)
	beq	$t1 $zero label43
	lw	$a0 28($fp)
	sw	$a0 0($sp)
	addiu	$sp $sp -4
	la	$a0 int_const4
	sw	$a0 0($sp)
	addiu	$sp $sp -4
	move	$a0 $s0
	sw	$s1 0($fp)
	sw	$s2 4($fp)
	sw	$s3 8($fp)
	bne	$a0 $zero label48
	la	$a0 str_const18
	li	$t1 1
	jal	_dispatch_abort
label48:
	lw	$t1 8($a0)
	lw	$t1 32($t1)
	jalr		$t1
	lw	$s1 0($fp)
	lw	$s2 4($fp)
	lw	$s3 8($fp)
	move	$s4 $a0
	la	$t2 int_const5
	move	$t1 $s4
	la	$a0 bool_const1
	beq	$t1 $t2 label47
	la	$a1 bool_const0
	jal	equality_test
label47:
	lw	$t1 12($a0)
	beqz	$t1 label45
	la	$a0 str_const16
	sw	$a0 0($sp)
	addiu	$sp $sp -4
	move	$a0 $s2
	sw	$s1 0($fp)
	sw	$s2 4($fp)
	sw	$s3 8($fp)
	bne	$a0 $zero label49
	la	$a0 str_const18
	li	$t1 1
	jal	_dispatch_abort
label49:
	lw	$t1 8($a0)
	lw	$t1 16($t1)
	jalr		$t1
	lw	$s1 0($fp)
	lw	$s2 4($fp)
	lw	$s3 8($fp)
	move	$s2 $a0
	b	label46
label45:
	la	$a0 str_const17
	sw	$a0 0($sp)
	addiu	$sp $sp -4
	move	$a0 $s2
	sw	$s1 0($fp)
	sw	$s2 4($fp)
	sw	$s3 8($fp)
	bne	$a0 $zero label50
	la	$a0 str_const18
	li	$t1 1
	jal	_dispatch_abort
label50:
	lw	$t1 8($a0)
	lw	$t1 16($t1)
	jalr		$t1
	lw	$s1 0($fp)
	lw	$s2 4($fp)
	lw	$s3 8($fp)
	move	$s2 $a0
label46:
	move	$s4 $s1
	la	$a0 int_const5
	jal	Object.copy
	lw	$t2 12($a0)
	lw	$t1 12($s4)
	add	$t1 $t1 $t2
	sw	$t1 12($a0)
	move	$s1 $a0
	lw	$s4 28($fp)
	la	$a0 int_const4
	jal	Object.copy
	lw	$t2 12($a0)
	lw	$t1 12($s4)
	div	$t1 $t1 $t2
	sw	$t1 12($a0)
	sw	$a0 28($fp)
	b	label42
label43:
	move	$a0 $zero
label51:
	la	$s4 int_const1
	lw	$t1 12($s4)
	lw	$t2 12($s1)
	la	$a0 bool_const1
	blt	$t1 $t2 label53
	la	$a0 bool_const0
label53:
	lw	$t1 12($a0)
	beq	$t1 $zero label52
	move	$s4 $s1
	la	$a0 int_const5
	jal	Object.copy
	lw	$t2 12($a0)
	lw	$t1 12($s4)
	sub	$t1 $t1 $t2
	sw	$t1 12($a0)
	sw	$a0 0($sp)
	addiu	$sp $sp -4
	la	$a0 int_const5
	sw	$a0 0($sp)
	addiu	$sp $sp -4
	move	$a0 $s2
	sw	$s1 0($fp)
	sw	$s2 4($fp)
	sw	$s3 8($fp)
	bne	$a0 $zero label54
	la	$a0 str_const18
	li	$t1 1
	jal	_dispatch_abort
label54:
	lw	$t1 8($a0)
	lw	$t1 20($t1)
	jalr		$t1
	lw	$s1 0($fp)
	lw	$s2 4($fp)
	lw	$s3 8($fp)
	sw	$a0 0($sp)
	addiu	$sp $sp -4
	move	$a0 $s3
	sw	$s1 0($fp)
	sw	$s2 4($fp)
	sw	$s3 8($fp)
	bne	$a0 $zero label55
	la	$a0 str_const18
	li	$t1 1
	jal	_dispatch_abort
label55:
	lw	$t1 8($a0)
	lw	$t1 16($t1)
	jalr		$t1
	lw	$s1 0($fp)
	lw	$s2 4($fp)
	lw	$s3 8($fp)
	move	$s3 $a0
	move	$s4 $s1
	la	$a0 int_const5
	jal	Object.copy
	lw	$t2 12($a0)
	lw	$t1 12($s4)
	sub	$t1 $t1 $t2
	sw	$t1 12($a0)
	move	$s1 $a0
	b	label51
label52:
	move	$a0 $zero
	move	$a0 $s3
	lw	$fp 28($sp)
	lw	$s0 24($sp)
	lw	$ra 20($sp)
	addiu	$sp $sp 32
	jr	$ra	
Main.convert_int:
	addiu	$sp $sp -24
	sw	$fp 24($sp)
	sw	$s0 20($sp)
	sw	$ra 16($sp)
	addiu	$fp $sp 4
	move	$s0 $a0
	la	$s1 int_const1
	la	$s2 int_const1
label56:
	move	$s3 $s1
	lw	$a0 24($fp)
	sw	$s1 0($fp)
	sw	$s2 4($fp)
	sw	$s3 8($fp)
	bne	$a0 $zero label59
	la	$a0 str_const18
	li	$t1 1
	jal	_dispatch_abort
label59:
	lw	$t1 8($a0)
	lw	$t1 12($t1)
	jalr		$t1
	lw	$s1 0($fp)
	lw	$s2 4($fp)
	lw	$s3 8($fp)
	lw	$t1 12($s3)
	lw	$t2 12($a0)
	la	$a0 bool_const1
	blt	$t1 $t2 label58
	la	$a0 bool_const0
label58:
	lw	$t1 12($a0)
	beq	$t1 $zero label57
	sw	$s1 0($sp)
	addiu	$sp $sp -4
	la	$a0 int_const5
	sw	$a0 0($sp)
	addiu	$sp $sp -4
	lw	$a0 24($fp)
	sw	$s1 0($fp)
	sw	$s2 4($fp)
	bne	$a0 $zero label63
	la	$a0 str_const18
	li	$t1 1
	jal	_dispatch_abort
label63:
	lw	$t1 8($a0)
	lw	$t1 20($t1)
	jalr		$t1
	lw	$s1 0($fp)
	lw	$s2 4($fp)
	move	$s3 $a0
	la	$t2 str_const16
	move	$t1 $s3
	la	$a0 bool_const1
	beq	$t1 $t2 label62
	la	$a1 bool_const0
	jal	equality_test
label62:
	lw	$t1 12($a0)
	beqz	$t1 label60
	move	$s3 $s2
	la	$a0 int_const4
	jal	Object.copy
	lw	$t2 12($a0)
	lw	$t1 12($s3)
	mul	$t1 $t1 $t2
	sw	$t1 12($a0)
	move	$s3 $a0
	la	$a0 int_const5
	jal	Object.copy
	lw	$t2 12($a0)
	lw	$t1 12($s3)
	add	$t1 $t1 $t2
	sw	$t1 12($a0)
	move	$s2 $a0
	b	label61
label60:
	move	$s3 $s2
	la	$a0 int_const4
	jal	Object.copy
	lw	$t2 12($a0)
	lw	$t1 12($s3)
	mul	$t1 $t1 $t2
	sw	$t1 12($a0)
	move	$s2 $a0
label61:
	move	$s3 $s1
	la	$a0 int_const5
	jal	Object.copy
	lw	$t2 12($a0)
	lw	$t1 12($s3)
	add	$t1 $t1 $t2
	sw	$t1 12($a0)
	move	$s1 $a0
	b	label56
label57:
	move	$a0 $zero
	move	$a0 $s2
	lw	$fp 24($sp)
	lw	$s0 20($sp)
	lw	$ra 16($sp)
	addiu	$sp $sp 28
	jr	$ra	
Main.bin_and:
	addiu	$sp $sp -24
	sw	$fp 24($sp)
	sw	$s0 20($sp)
	sw	$ra 16($sp)
	addiu	$fp $sp 4
	move	$s0 $a0
	la	$s1 int_const1
	la	$s2 str_const15
label64:
	move	$s3 $s1
	lw	$a0 28($fp)
	sw	$s1 0($fp)
	sw	$s2 4($fp)
	sw	$s3 8($fp)
	bne	$a0 $zero label67
	la	$a0 str_const18
	li	$t1 1
	jal	_dispatch_abort
label67:
	lw	$t1 8($a0)
	lw	$t1 12($t1)
	jalr		$t1
	lw	$s1 0($fp)
	lw	$s2 4($fp)
	lw	$s3 8($fp)
	lw	$t1 12($s3)
	lw	$t2 12($a0)
	la	$a0 bool_const1
	blt	$t1 $t2 label66
	la	$a0 bool_const0
label66:
	lw	$t1 12($a0)
	beq	$t1 $zero label65
	sw	$s1 0($sp)
	addiu	$sp $sp -4
	la	$a0 int_const5
	sw	$a0 0($sp)
	addiu	$sp $sp -4
	lw	$a0 28($fp)
	sw	$s1 0($fp)
	sw	$s2 4($fp)
	bne	$a0 $zero label71
	la	$a0 str_const18
	li	$t1 1
	jal	_dispatch_abort
label71:
	lw	$t1 8($a0)
	lw	$t1 20($t1)
	jalr		$t1
	lw	$s1 0($fp)
	lw	$s2 4($fp)
	move	$s3 $a0
	la	$t2 str_const16
	move	$t1 $s3
	la	$a0 bool_const1
	beq	$t1 $t2 label70
	la	$a1 bool_const0
	jal	equality_test
label70:
	lw	$t1 12($a0)
	beqz	$t1 label68
	sw	$s1 0($sp)
	addiu	$sp $sp -4
	la	$a0 int_const5
	sw	$a0 0($sp)
	addiu	$sp $sp -4
	lw	$a0 24($fp)
	sw	$s1 0($fp)
	sw	$s2 4($fp)
	bne	$a0 $zero label75
	la	$a0 str_const18
	li	$t1 1
	jal	_dispatch_abort
label75:
	lw	$t1 8($a0)
	lw	$t1 20($t1)
	jalr		$t1
	lw	$s1 0($fp)
	lw	$s2 4($fp)
	move	$s3 $a0
	la	$t2 str_const16
	move	$t1 $s3
	la	$a0 bool_const1
	beq	$t1 $t2 label74
	la	$a1 bool_const0
	jal	equality_test
label74:
	lw	$t1 12($a0)
	beqz	$t1 label72
	la	$a0 str_const16
	sw	$a0 0($sp)
	addiu	$sp $sp -4
	move	$a0 $s2
	sw	$s1 0($fp)
	sw	$s2 4($fp)
	bne	$a0 $zero label76
	la	$a0 str_const18
	li	$t1 1
	jal	_dispatch_abort
label76:
	lw	$t1 8($a0)
	lw	$t1 16($t1)
	jalr		$t1
	lw	$s1 0($fp)
	lw	$s2 4($fp)
	move	$s2 $a0
	b	label73
label72:
	la	$a0 str_const17
	sw	$a0 0($sp)
	addiu	$sp $sp -4
	move	$a0 $s2
	sw	$s1 0($fp)
	sw	$s2 4($fp)
	bne	$a0 $zero label77
	la	$a0 str_const18
	li	$t1 1
	jal	_dispatch_abort
label77:
	lw	$t1 8($a0)
	lw	$t1 16($t1)
	jalr		$t1
	lw	$s1 0($fp)
	lw	$s2 4($fp)
	move	$s2 $a0
label73:
	b	label69
label68:
	la	$a0 str_const17
	sw	$a0 0($sp)
	addiu	$sp $sp -4
	move	$a0 $s2
	sw	$s1 0($fp)
	sw	$s2 4($fp)
	bne	$a0 $zero label78
	la	$a0 str_const18
	li	$t1 1
	jal	_dispatch_abort
label78:
	lw	$t1 8($a0)
	lw	$t1 16($t1)
	jalr		$t1
	lw	$s1 0($fp)
	lw	$s2 4($fp)
	move	$s2 $a0
label69:
	move	$s3 $s1
	la	$a0 int_const5
	jal	Object.copy
	lw	$t2 12($a0)
	lw	$t1 12($s3)
	add	$t1 $t1 $t2
	sw	$t1 12($a0)
	move	$s1 $a0
	b	label64
label65:
	move	$a0 $zero
	move	$a0 $s2
	lw	$fp 24($sp)
	lw	$s0 20($sp)
	lw	$ra 16($sp)
	addiu	$sp $sp 32
	jr	$ra	
Main.bin_or:
	addiu	$sp $sp -24
	sw	$fp 24($sp)
	sw	$s0 20($sp)
	sw	$ra 16($sp)
	addiu	$fp $sp 4
	move	$s0 $a0
	la	$s1 int_const1
	la	$s2 str_const15
label79:
	move	$s3 $s1
	lw	$a0 28($fp)
	sw	$s1 0($fp)
	sw	$s2 4($fp)
	sw	$s3 8($fp)
	bne	$a0 $zero label82
	la	$a0 str_const18
	li	$t1 1
	jal	_dispatch_abort
label82:
	lw	$t1 8($a0)
	lw	$t1 12($t1)
	jalr		$t1
	lw	$s1 0($fp)
	lw	$s2 4($fp)
	lw	$s3 8($fp)
	lw	$t1 12($s3)
	lw	$t2 12($a0)
	la	$a0 bool_const1
	blt	$t1 $t2 label81
	la	$a0 bool_const0
label81:
	lw	$t1 12($a0)
	beq	$t1 $zero label80
	sw	$s1 0($sp)
	addiu	$sp $sp -4
	la	$a0 int_const5
	sw	$a0 0($sp)
	addiu	$sp $sp -4
	lw	$a0 28($fp)
	sw	$s1 0($fp)
	sw	$s2 4($fp)
	bne	$a0 $zero label86
	la	$a0 str_const18
	li	$t1 1
	jal	_dispatch_abort
label86:
	lw	$t1 8($a0)
	lw	$t1 20($t1)
	jalr		$t1
	lw	$s1 0($fp)
	lw	$s2 4($fp)
	move	$s3 $a0
	la	$t2 str_const17
	move	$t1 $s3
	la	$a0 bool_const1
	beq	$t1 $t2 label85
	la	$a1 bool_const0
	jal	equality_test
label85:
	lw	$t1 12($a0)
	beqz	$t1 label83
	sw	$s1 0($sp)
	addiu	$sp $sp -4
	la	$a0 int_const5
	sw	$a0 0($sp)
	addiu	$sp $sp -4
	lw	$a0 24($fp)
	sw	$s1 0($fp)
	sw	$s2 4($fp)
	bne	$a0 $zero label90
	la	$a0 str_const18
	li	$t1 1
	jal	_dispatch_abort
label90:
	lw	$t1 8($a0)
	lw	$t1 20($t1)
	jalr		$t1
	lw	$s1 0($fp)
	lw	$s2 4($fp)
	move	$s3 $a0
	la	$t2 str_const17
	move	$t1 $s3
	la	$a0 bool_const1
	beq	$t1 $t2 label89
	la	$a1 bool_const0
	jal	equality_test
label89:
	lw	$t1 12($a0)
	beqz	$t1 label87
	la	$a0 str_const17
	sw	$a0 0($sp)
	addiu	$sp $sp -4
	move	$a0 $s2
	sw	$s1 0($fp)
	sw	$s2 4($fp)
	bne	$a0 $zero label91
	la	$a0 str_const18
	li	$t1 1
	jal	_dispatch_abort
label91:
	lw	$t1 8($a0)
	lw	$t1 16($t1)
	jalr		$t1
	lw	$s1 0($fp)
	lw	$s2 4($fp)
	move	$s2 $a0
	b	label88
label87:
	la	$a0 str_const16
	sw	$a0 0($sp)
	addiu	$sp $sp -4
	move	$a0 $s2
	sw	$s1 0($fp)
	sw	$s2 4($fp)
	bne	$a0 $zero label92
	la	$a0 str_const18
	li	$t1 1
	jal	_dispatch_abort
label92:
	lw	$t1 8($a0)
	lw	$t1 16($t1)
	jalr		$t1
	lw	$s1 0($fp)
	lw	$s2 4($fp)
	move	$s2 $a0
label88:
	b	label84
label83:
	la	$a0 str_const16
	sw	$a0 0($sp)
	addiu	$sp $sp -4
	move	$a0 $s2
	sw	$s1 0($fp)
	sw	$s2 4($fp)
	bne	$a0 $zero label93
	la	$a0 str_const18
	li	$t1 1
	jal	_dispatch_abort
label93:
	lw	$t1 8($a0)
	lw	$t1 16($t1)
	jalr		$t1
	lw	$s1 0($fp)
	lw	$s2 4($fp)
	move	$s2 $a0
label84:
	move	$s3 $s1
	la	$a0 int_const5
	jal	Object.copy
	lw	$t2 12($a0)
	lw	$t1 12($s3)
	add	$t1 $t1 $t2
	sw	$t1 12($a0)
	move	$s1 $a0
	b	label79
label80:
	move	$a0 $zero
	move	$a0 $s2
	lw	$fp 24($sp)
	lw	$s0 20($sp)
	lw	$ra 16($sp)
	addiu	$sp $sp 32
	jr	$ra	
Main.f:
	addiu	$sp $sp -28
	sw	$fp 28($sp)
	sw	$s0 24($sp)
	sw	$ra 20($sp)
	addiu	$fp $sp 4
	move	$s0 $a0
	lw	$a0 28($fp)
	sw	$a0 0($sp)
	addiu	$sp $sp -4
	move	$a0 $s0
	bne	$a0 $zero label94
	la	$a0 str_const18
	li	$t1 1
	jal	_dispatch_abort
label94:
	lw	$t1 8($a0)
	lw	$t1 36($t1)
	jalr		$t1
	move	$s1 $a0
	la	$s2 int_const1
	la	$s3 int_const1
	lw	$a0 28($s0)
	sw	$a0 0($sp)
	addiu	$sp $sp -4
	sw	$s1 0($sp)
	addiu	$sp $sp -4
	move	$a0 $s0
	sw	$s1 0($fp)
	sw	$s2 4($fp)
	sw	$s3 8($fp)
	bne	$a0 $zero label95
	la	$a0 str_const18
	li	$t1 1
	jal	_dispatch_abort
label95:
	lw	$t1 8($a0)
	lw	$t1 44($t1)
	jalr		$t1
	lw	$s1 0($fp)
	lw	$s2 4($fp)
	lw	$s3 8($fp)
	sw	$a0 0($sp)
	addiu	$sp $sp -4
	move	$a0 $s0
	sw	$s1 0($fp)
	sw	$s2 4($fp)
	sw	$s3 8($fp)
	bne	$a0 $zero label96
	la	$a0 str_const18
	li	$t1 1
	jal	_dispatch_abort
label96:
	lw	$t1 8($a0)
	lw	$t1 40($t1)
	jalr		$t1
	lw	$s1 0($fp)
	lw	$s2 4($fp)
	lw	$s3 8($fp)
	move	$s2 $a0
	lw	$a0 32($s0)
	sw	$a0 0($sp)
	addiu	$sp $sp -4
	sw	$s1 0($sp)
	addiu	$sp $sp -4
	move	$a0 $s0
	sw	$s1 0($fp)
	sw	$s2 4($fp)
	sw	$s3 8($fp)
	bne	$a0 $zero label97
	la	$a0 str_const18
	li	$t1 1
	jal	_dispatch_abort
label97:
	lw	$t1 8($a0)
	lw	$t1 44($t1)
	jalr		$t1
	lw	$s1 0($fp)
	lw	$s2 4($fp)
	lw	$s3 8($fp)
	sw	$a0 0($sp)
	addiu	$sp $sp -4
	move	$a0 $s0
	sw	$s1 0($fp)
	sw	$s2 4($fp)
	sw	$s3 8($fp)
	bne	$a0 $zero label98
	la	$a0 str_const18
	li	$t1 1
	jal	_dispatch_abort
label98:
	lw	$t1 8($a0)
	lw	$t1 40($t1)
	jalr		$t1
	lw	$s1 0($fp)
	lw	$s2 4($fp)
	lw	$s3 8($fp)
	move	$s3 $a0
	move	$s4 $s2
	move	$a0 $s3
	jal	Object.copy
	lw	$t2 12($a0)
	lw	$t1 12($s4)
	mul	$t1 $t1 $t2
	sw	$t1 12($a0)
	lw	$fp 28($sp)
	lw	$s0 24($sp)
	lw	$ra 20($sp)
	addiu	$sp $sp 40
	jr	$ra	
Main.solve:
	addiu	$sp $sp -28
	sw	$fp 28($sp)
	sw	$s0 24($sp)
	sw	$ra 20($sp)
	addiu	$fp $sp 4
	move	$s0 $a0
	lw	$a0 12($s0)
	sw	$a0 0($sp)
	addiu	$sp $sp -4
	move	$a0 $s0
	bne	$a0 $zero label99
	la	$a0 str_const18
	li	$t1 1
	jal	_dispatch_abort
label99:
	lw	$t1 8($a0)
	lw	$t1 36($t1)
	jalr		$t1
	sw	$a0 28($s0)
	lw	$a0 16($s0)
	sw	$a0 0($sp)
	addiu	$sp $sp -4
	move	$a0 $s0
	bne	$a0 $zero label100
	la	$a0 str_const18
	li	$t1 1
	jal	_dispatch_abort
label100:
	lw	$t1 8($a0)
	lw	$t1 36($t1)
	jalr		$t1
	sw	$a0 32($s0)
	lw	$a0 12($s0)
	sw	$a0 0($sp)
	addiu	$sp $sp -4
	lw	$a0 16($s0)
	sw	$a0 0($sp)
	addiu	$sp $sp -4
	lw	$a0 20($s0)
	sw	$a0 0($sp)
	addiu	$sp $sp -4
	move	$a0 $s0
	bne	$a0 $zero label101
	la	$a0 str_const18
	li	$t1 1
	jal	_dispatch_abort
label101:
	lw	$t1 8($a0)
	lw	$t1 52($t1)
	jalr		$t1
	sw	$a0 40($s0)
	lw	$a0 20($s0)
	sw	$a0 36($s0)
	lw	$s1 20($s0)
	la	$a0 int_const5
	jal	Object.copy
	lw	$t2 12($a0)
	lw	$t1 12($s1)
	add	$t1 $t1 $t2
	sw	$t1 12($a0)
	move	$s1 $a0
	la	$s2 int_const1
	la	$s3 int_const1
	lw	$a0 28($s0)
	sw	$a0 0($sp)
	addiu	$sp $sp -4
	lw	$a0 32($s0)
	sw	$a0 0($sp)
	addiu	$sp $sp -4
	move	$a0 $s0
	sw	$s1 0($fp)
	sw	$s2 4($fp)
	sw	$s3 8($fp)
	bne	$a0 $zero label102
	la	$a0 str_const18
	li	$t1 1
	jal	_dispatch_abort
label102:
	lw	$t1 8($a0)
	lw	$t1 48($t1)
	jalr		$t1
	lw	$s1 0($fp)
	lw	$s2 4($fp)
	lw	$s3 8($fp)
	sw	$a0 0($sp)
	addiu	$sp $sp -4
	move	$a0 $s0
	sw	$s1 0($fp)
	sw	$s2 4($fp)
	sw	$s3 8($fp)
	bne	$a0 $zero label103
	la	$a0 str_const18
	li	$t1 1
	jal	_dispatch_abort
label103:
	lw	$t1 8($a0)
	lw	$t1 40($t1)
	jalr		$t1
	lw	$s1 0($fp)
	lw	$s2 4($fp)
	lw	$s3 8($fp)
	move	$s3 $a0
	lw	$s4 20($s0)
	lw	$t1 12($s4)
	lw	$t2 12($s3)
	la	$a0 bool_const1
	ble	$t1 $t2 label106
	la	$a0 bool_const0
label106:
	lw	$t1 12($a0)
	beqz	$t1 label104
	move	$s4 $s3
	lw	$a0 24($s0)
	lw	$t1 12($s4)
	lw	$t2 12($a0)
	la	$a0 bool_const1
	ble	$t1 $t2 label109
	la	$a0 bool_const0
label109:
	lw	$t1 12($a0)
	beqz	$t1 label107
	lw	$s4 12($s0)
	lw	$a0 16($s0)
	jal	Object.copy
	lw	$t2 12($a0)
	lw	$t1 12($s4)
	mul	$t1 $t1 $t2
	sw	$t1 12($a0)
	sw	$a0 40($s0)
	sw	$s3 36($s0)
	move	$a0 $s3
	b	label108
label107:
label110:
	move	$s4 $s1
	lw	$a0 24($s0)
	lw	$t1 12($s4)
	lw	$t2 12($a0)
	la	$a0 bool_const1
	ble	$t1 $t2 label112
	la	$a0 bool_const0
label112:
	lw	$t1 12($a0)
	beq	$t1 $zero label111
	lw	$a0 12($s0)
	sw	$a0 0($sp)
	addiu	$sp $sp -4
	lw	$a0 16($s0)
	sw	$a0 0($sp)
	addiu	$sp $sp -4
	sw	$s1 0($sp)
	addiu	$sp $sp -4
	move	$a0 $s0
	sw	$s1 0($fp)
	sw	$s2 4($fp)
	sw	$s3 8($fp)
	bne	$a0 $zero label113
	la	$a0 str_const18
	li	$t1 1
	jal	_dispatch_abort
label113:
	lw	$t1 8($a0)
	lw	$t1 52($t1)
	jalr		$t1
	lw	$s1 0($fp)
	lw	$s2 4($fp)
	lw	$s3 8($fp)
	move	$s2 $a0
	lw	$s4 40($s0)
	lw	$t1 12($s4)
	lw	$t2 12($s2)
	la	$a0 bool_const1
	blt	$t1 $t2 label116
	la	$a0 bool_const0
label116:
	lw	$t1 12($a0)
	beqz	$t1 label114
	sw	$s1 36($s0)
	sw	$s2 40($s0)
	move	$a0 $s2
	b	label115
label114:
	la	$a0 int_const5
label115:
	move	$s4 $s1
	la	$a0 int_const5
	jal	Object.copy
	lw	$t2 12($a0)
	lw	$t1 12($s4)
	add	$t1 $t1 $t2
	sw	$t1 12($a0)
	move	$s1 $a0
	b	label110
label111:
	move	$a0 $zero
label108:
	b	label105
label104:
label117:
	move	$s4 $s1
	lw	$a0 24($s0)
	lw	$t1 12($s4)
	lw	$t2 12($a0)
	la	$a0 bool_const1
	ble	$t1 $t2 label119
	la	$a0 bool_const0
label119:
	lw	$t1 12($a0)
	beq	$t1 $zero label118
	lw	$a0 12($s0)
	sw	$a0 0($sp)
	addiu	$sp $sp -4
	lw	$a0 16($s0)
	sw	$a0 0($sp)
	addiu	$sp $sp -4
	sw	$s1 0($sp)
	addiu	$sp $sp -4
	move	$a0 $s0
	sw	$s1 0($fp)
	sw	$s2 4($fp)
	sw	$s3 8($fp)
	bne	$a0 $zero label120
	la	$a0 str_const18
	li	$t1 1
	jal	_dispatch_abort
label120:
	lw	$t1 8($a0)
	lw	$t1 52($t1)
	jalr		$t1
	lw	$s1 0($fp)
	lw	$s2 4($fp)
	lw	$s3 8($fp)
	move	$s2 $a0
	lw	$s4 40($s0)
	lw	$t1 12($s4)
	lw	$t2 12($s2)
	la	$a0 bool_const1
	blt	$t1 $t2 label123
	la	$a0 bool_const0
label123:
	lw	$t1 12($a0)
	beqz	$t1 label121
	sw	$s1 36($s0)
	sw	$s2 40($s0)
	move	$a0 $s2
	b	label122
label121:
	la	$a0 int_const5
label122:
	move	$s4 $s1
	la	$a0 int_const5
	jal	Object.copy
	lw	$t2 12($a0)
	lw	$t1 12($s4)
	add	$t1 $t1 $t2
	sw	$t1 12($a0)
	move	$s1 $a0
	b	label117
label118:
	move	$a0 $zero
label105:
	lw	$fp 28($sp)
	lw	$s0 24($sp)
	lw	$ra 20($sp)
	addiu	$sp $sp 28
	jr	$ra	
