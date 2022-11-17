#include "monty.h"

/**
* parse - function
* @c: char to check in string
* @stack: stack given to parse
* @line_number: line number for errors
*
* Description: function to tokenize string
* Return: 0 success
*/

void parse(char *c, stack_t **stack, unsigned int line_number)
{
	int i;
	char *delim = " ";
	char *tokens;

	instruction_t code[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{"sub", sub},
		{"div", _div},
		{"mul", mul},
		{"mod", mod},
		{"#", comments},
		{"NULL", NULL}
	};
	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] == '\n')
		c[i] = '\0';
	}

	tokens = strtok(c, delim);
	num = strtok(NULL, delim);
	for (i = 0; i < 13; i++)
	{
		if (strcmp(code[i].opcode, tokens) == 0)
		{
			code[i].f(stack, line_number);
			return;
		}
	}
	fprintf(stderr, "L%d: unknown instruction %s\n", line_number, tokens);
	if (*stack != NULL)
		freelist(stack);
	exit(EXIT_FAILURE);
}
