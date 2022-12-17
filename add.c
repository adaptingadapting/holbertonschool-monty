#include "monty.h"

/**
 * _add - adds a node
 * @stack: stack
 * @line: linedadsad
 */

void _add(stack_t **stack, unsigned int line)
{
	stack_t *node = NULL;
	int sum;

	if (!stack || !(*stack) || !(*stack)->next)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line);
		exit(1);
	}
	node = *stack;
	sum = node->n + node->next->n;
	node->next->n = sum;
	*stack = node->next;
	free(node);
}
