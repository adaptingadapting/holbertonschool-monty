#include "monty.h"

/**
 * _push - pushes new node
 * @stack: stack
 * @line: the line number
 */

void _push(stack_t **stack, unsigned int line)
{
	stack_t *node;
	char *ntopush;
	int i = 0;
	int sum;

	ntopush = strtok(NULL, delim);
	if (!ntopush)
	{
		fprintf(stderr, "L%u: usage: push integer\n", line);
		exit(1);
	}

	node = malloc(sizeof(stack_t));
	if (!node)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(1);
	}
	if (ntopush[0] == '-')
		i = 1;
	for (; ntopush[i]; i++)
	{
		sum = ntopush[i] - '0';
		if ((sum > 9 || sum < 0))
		{
			fprintf(stderr, "L%u: usage: push integer\n", line);
			exit(1);
		}
	}
	node->n = atoi(ntopush);
	node->prev = NULL;
	node->next = *stack;
	if (*stack)
		(*stack)->prev = node;
	*stack = node;
}
