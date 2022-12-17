#include "monty.h"

/**
 * _swap - swaps
 * @stack: stack
 * @line: number
 */

void _swap(stack_t **stack, unsigned int line)
{
	stack_t *node = NULL;

	if (!stack || !(*stack) || !(*stack)->next)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line);
		exit(1);
	}
	node = (*stack)->next;
	(*stack)->prev = node;
	(*stack)->next = node->next;
	node->prev = NULL;
	if (node->next)
		node->next->prev = *stack;
	node->next = *stack;
	*stack = node;
}
