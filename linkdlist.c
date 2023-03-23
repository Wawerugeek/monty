#include "monty.h"
/**
 * add_end_node - adds node to top of linked list
 * @stack: pointer to the head of alinked list
 * @n: node data
 * Return: On Success 0
 *	-1 on failure
 */
int add_end_node(stack_t **stack, int n)
{
	stack_t *new;

	if (!stack)
		return (-1);

	new = malloc(sizeof(struct stack_s));
	if (!new)
	{
		printf("Error: malloc failed");
		return (-1);
	}
	new->n = n;

	if (*stack == NULL)
	{
		*stack = new;
		new->next = NULL;
		new->prev = NULL;
	}
	else
	{
		new->next = *stack;
		(*stack)->prev = new;
		*stack = new;
	}
	return (0);
}
/**
 * delete_end_node - deletes node at the top of linked list
 * @stack: pointer to the head of a doubly linked list
 */
void delete_end_node(stack_t **stack)
{
	stack_t *del = NULL;

	del = *stack;
	if ((*stack)->next == NULL)
	{
		*stack = NULL;
		free(del);
	}
	else
	{
		*stack = (*stack)->next;
		(*stack)->prev = NULL;
		free(del);
	}
}
/**
 * free_dlist - frees a doubly linked list
 * @stack: pointer to the head of a doubly linked list
 */
void free_dlist(stack_t **stack)
{
	if (!stack)
		return;

	while (*stack && (*stack)->next)
	{
		*stack = (*stack)->next;
		free((*stack)->prev);
	}
	free(*stack);
}
