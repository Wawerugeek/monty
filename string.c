#include "monty.h"
/**
 * f_pstr - prints the string of ascii characters
 * @stack: pointer to the head of the linked list
 *
 */
void f_pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (!stack || !*stack)
	{
		printf("L%u: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	temp = *stack;
	while ((temp != NULL) && (temp->n != 0) &&
		(temp->n >= 0) && (temp->n <= 127))
	{
		printf("%c", (temp)->n);
		temp = temp->next;
	}
	printf("\n");
}

