#include "monty.h"
/**
 * f_pint - prints the top
 * @stack: pointer to the head of list
 * @line_number: bytecode line number
 * Return: no return
*/
void f_pint(stack_t **stack, unsigned int line_number)
{
	if (!stack || !*stack)
	{
		printf("L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);

}
