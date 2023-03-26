#include "monty.h"
/**
  *f_rotl- rotates the stack to the top
  *@stack: pointer to the node to be rotated
  *@line_number: node number
  *Return: no return
*/
void f_rotl(stack_t **stack, unsigned int line_number)
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
		(*stack)->next->prev = NULL;
		*stack = (*stack)->next;
		temp->next->next = NULL;
	}
}
