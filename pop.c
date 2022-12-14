#include "monty.h"

/**
 * _pop - removes the top
 * @stack: stack
 * @line: line number
 */

void _pop(stack_t **stack, unsigned int line)
{
	stack_t *node = NULL;

	if (!stack || !(*stack))
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line);
		exit(1);
	}
	node = *stack;
	*stack = (*stack)->next;
	free(node);
}
