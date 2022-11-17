#include "monty.h"

/**
 * add - adds the top two values of stack_t linked list
 * @stack: pointer to top mode node of stack_t linked list
 * @line_number: current working line number of Monty bytecodes file
 *
 * Description: result is stored in second value node
 *		from the top and top value is removed
 */

void add(stack_t **stack, unsigned int line_number)
{
	if ((*stack)->next == NULL || (*stack)->next->next == NULL)
	{
		set_op_tok_error(short_stack_error(line_number, "add"));
		return;
	}

	(*stack)->next->next->n += (*stack)->next->n;
	pop(stack, line_number);
}

/**
 * nop - does absolutely nothing for Monty opcode
 * @stack: pointer to top mode node of stack_t linked list
 * @line_number: current working line number of Monty bycode file
 */

void nop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}

