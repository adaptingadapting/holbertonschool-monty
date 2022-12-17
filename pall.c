#include "monty.h"

/**
 * _pall - prints a double linked list
 * @stack: the stack
 * @line_number: hola
 */

void _pall(stack_t **stack, unsigned int line_number)
{
	stack_t *node = *stack;
	
	(void) line_number;
	while (node)
	{
		printf("%d\n", node->n);
		node = node->next;
	}
}
