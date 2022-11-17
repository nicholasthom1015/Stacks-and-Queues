#include "monty.h"


void push(stack_t **stack, unsigned int line_number)
{
	stack_t *nn;

	nn = malloc(sizeof(stack_t));

	if (!nn)
	{
		printf("L%d: usage: push integer\n");
		exit(EXIT_FAILURE);
	}
	(void)line_number;

	if (*stack)
		(*stack)->prev = nn;

	nn->prev = NULL;
	nn->next = stack;
	nn->n = 0;
	*stack = nn;
}
	
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
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;


	(void)line_number;
	temp = *stack;
	while (temp)
	{
		printf("d\n", temp->n);
		temp = temp->next;
	}
}


