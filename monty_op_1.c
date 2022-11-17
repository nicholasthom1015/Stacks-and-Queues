#include "monty.h"
/**
 * push - push op
 * @stack: pointer to pointer
 * @line_number: line number
 * Return: none
 */

void push(stack_t **stack, unsigned int line_number)
{
	stack_t *pre;

	if (*stack)
	{
		pre = (*stack);
		*stack = (*stack)->next;
		free(pre);
	}
	else
	{
		fprintf(stdder, "L%d: usage: integer\n", line_number);
		exit(EXIT_FAILURE);
	}
}
/**
 * pop - pop op
 * @stack: pointer to pointer
 * @line_number: line number
 * Return: none
 */

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
/**
 * pall - pop op
 * @stack: pointer to pointer
 * @line_number: line number
 * Return: none
 */
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


