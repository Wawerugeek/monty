#include "monty.h"
/**
 * get_op_func - selects correct operation function
 * @token1: first bytecode input
 * Return: correct operation function
 */
void (*get_op_func(char *token1))(stack_t **stack, unsigned int line_number)
{
	instruction_t instruction_s[] = {
		{"push", push},
		{"pop", pop},
		{"pall", pall},
		{"pint", pint},
		{"swap", swap},
		{"add", add},
		{"sub", sub},
		{"mul", mul},
		{"div", div},
		{"mod", mod},
		{"pchar", pchar},
		{"pstr", pstr},
		{"nop", nop},
		{"rot1", rot1},
		{"rotr", rotr},
		{NULL, NULL}
	};
	int i = 0;

	while (instruction_s[i].f != NULL)
	{
		if (strcmp(token1, instruction_s[i].opcode) == 0)
			return (instruction_s[i].f);
		i++;
	}
	return (NULL);
}
