#include "monty.h"



void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	temp = *stack;

	*stack = temp->next;

	if (*stack)
	{
		(*stack)->prev = NULL;
		free(temp);

	}
	else
		printf("L<line_number>: can't pop an empty stack\n");
	exit(EXIT_FAILURE);
}
