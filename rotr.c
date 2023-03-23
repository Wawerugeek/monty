#include "monty.h"
/**
 * f_rotr - rotates the bottom element of the stack to the top
 * @stack: pointer to the node to be rotated
 * @line_number: node number
 */
void f_rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	(void) line_number;

	if ((*stack)->next != NULL)
	{
		temp = *stack;
		while (temp->next != NULL)
			temp = temp->next;
		(*stack)->prev = temp;
		temp->next = *stack;
		temp->prev->next = NULL;
		temp->prev = NULL;
		(*stack) = (*stack)->prev;
	}
}
