#include "monty.h"

/**
 * _push - pushes new node
 * @stack: stack
 * @line_number: the line number
 */

void _push(stack_t **stack, unsigned int line_number)
{
	stack_t *node;
	char *ntopush;

	ntopush = strtok(NULL, delim);
	if (!ntopush)
	{
		printf("L%u: usage: push integer\n", line_number);
		exit(1);
	}
	node = malloc(sizeof(stack_t));
	if (!node)
	{
		printf("Error: malloc failed\n");
		exit(1);
	}
	node->n = atoi(ntopush);
	node->prev = NULL;
	node->next = *stack;
	if (*stack)
		(*stack)->prev = node;
	*stack = node;
}
