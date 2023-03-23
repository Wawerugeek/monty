#include "monty.h"
/**
 * is_number - iterates each character of string to check if isdigit
 * @n: integer
 * Return: 0 if is number or -1 if not
 */
int is_number(const char *n)
{
	int i = 0;

	if (*n == '-')
		i = 1;
	for (; *(n + i) != '\0'; i++)
	{
		if (isdigit(*(n + i)) == 0)
			return (-1);
	}
	return (0);
}
/**
 * f_push - adds nodes to the linked list
 * @stack: pointer to top node of the linked list
 * @line_number: bytecode line number
 * @n: integer
 */
void f_push(stack_t **stack, unsigned int line_number, const char *n)
{
	if (!stack)
		return;
	if (is_number(n) == -1)
	{
		printf("L%u: usage: push integer\n", line_number);
		free_dlist(stack);
		exit(EXIT_FAILURE);
	}
	else
	{
		if (add_end_node(stack, atoi(n)) == -1)
		{
			free_dlist(stack);
			exit(EXIT_FAILURE);
		}
	}
}
/**
 * f_pop - removes nodes at front of linked list
 * @stack: pointer to the head of the linked list
 * @line_number: bytecode line number
 */
void f_pop(stack_t **stack, unsigned int line_number)
{
	if (stack == NULL || *stack == NULL)
	{
		printf("L%u: can't pop an empty stack\n", line_number);
		free_dlist(stack);
		exit(EXIT_FAILURE);
	}
	else
		delete_end_node(stack);
}
