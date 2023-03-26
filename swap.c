#include "monty.h"
/**
 * f_swap - swap locations of previous stack with the top stack
 * @stack: node to be swapped
 * @line_number: node number
 */
void f_swap(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = NULL;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		printf("L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	temp = (*stack)->next;
	if (temp->next != NULL)
	{
		(*stack)->next = temp->next;
		(*stack)->next->prev = *stack;

	}
	else
	{
		temp->prev->prev = temp;
		temp->prev->next = NULL;
	}
	temp->prev = NULL;
	temp->next = *stack;
	(*stack) = temp;
}
