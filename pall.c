#include "monty.h"
/**
 * f_pall - prints all nodes in a stack
 * @stack: pointer to the head of a linked list
 * @line_number: bytecode line number
 */
void f_pall(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = NULL;

	if (!stack || !*stack)
		return;

	(void) line_number;
	temp = *stack;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
