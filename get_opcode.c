#include "monty.h"
/**
 * get_op_func - selects correct operation function
 * @token1: first bytecode input
 * Return: correct operation function
 */
void (*get_op_func(char *token1))(stack_t **stack, unsigned int line_number)
{
	instruction_t instruction_s[] = {
		{"pop", f_pop},
		{"pall", f_pall},
		{"pint", f_pint},
		{"swap", f_swap},
		{"add", f_add},
		{"sub", f_sub},
		{"mul", f_mul},
		{"div", f_div},
		{"mod", f_mod},
		{"pchar", f_pchar},
		{"pstr", f_pstr},
		{"nop", f_nop},
		{"rotl", f_rotl},
		{"rotr", f_rotr},
		{"queue", f_queue},
		{"stack", f_stack},
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
