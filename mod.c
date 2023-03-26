#include "monty.h"
/**
 * f_mod - mod second node from top node
 * @stack: top of list
 * @line_number: line of command
 *
*/
void f_mod(stack_t **stack, unsigned int line_number)
{
	if (stack == NULL || *stack == NULL)
	{
		printf("L%u: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0 || (*stack)->next->n == 0)
	{
		printf("L%u: division by zero\n", line_number);
	}
	(*stack)->next->n %= (*stack)->n;
	(*stack) = (*stack)->next;
	free((*stack)->prev);
	(*stack)->prev = NULL;
}
