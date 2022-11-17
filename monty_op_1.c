#include "monty.h"


void push(stack_t **stack, unsigned int line_number)
{
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
		printf("L%d: can't pop an empty stack\n", line_number);
	exit(EXIT_FAILURE);
}
