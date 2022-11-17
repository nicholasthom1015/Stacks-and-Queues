#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>

/** struct stack_s - doubly linked list representation of a stack
 * @n: integer
 * @prev: points to previous element of stack
 * @next; points to next element of stack
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */

typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * stuct instructions_s -opcode and its function
 * @opcode: opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */

typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unisgned int line_number);
} instruction_t;

void push(int x);

#endif
