#include "monty.h"
/**
 * f_pchar - prints the char at the top of the stack,
 * followed by a new line
 * @stack: pointer to the head of list
 * @line_number: bytecode line number
 * Return: no return
*/
void f_pchar(stack_t **stack, unsigned int line_number)
{
	if (!stack || !*stack)
	{
		printf("L%u: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	if (((*stack)->n) >= 0 && ((*stack)->n) <= 127)
		printf("%c\n", (*stack)->n);
	else
	{
		printf("L%u: can't pchar, value out of range\n", line_number);
		exit(EXIT_FAILURE);
	}

}
