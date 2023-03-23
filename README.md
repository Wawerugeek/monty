Interpreter for Monty Bytecode Files

  Monty ByteCode contains built-in opcodes that operate on stack of integers. These include:	push	pall	pop	pint	pop	swap	add	sub	mul	div	mod	pchar	pstr	rot1	rotr	nop

Description of Files in the Repository

	monty.h - holds the function prototypes for the interpreter
	main.c - entry into the program

How to Compile

	$ gcc -Wall -Werror -Wextra -pedantic -std=c89 *.c -o monty
	$./monty bytecodes/000.m
