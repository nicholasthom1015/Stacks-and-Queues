#include "monty.h"

void push(int x)
{
	int N, s;
	char top;

	if (top == N-1)
	{
		printf("L<line_number>: usage: push integer\n");
			exit(1);
	}
	else
	{
		top++;
		s[top] = x;
	}
}
