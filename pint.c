#include "monty.h"

/**
 * _pint - pint
 * @stack: stack
 * @line: line
 */

void _pint(stack_t **stack, unsigned int line)
{
	if (!stack || !(*stack))
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line);
		exit(1);
	}
	printf("%d\n", (*stack)->n);
}
