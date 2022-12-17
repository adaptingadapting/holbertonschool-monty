#include "monty.h"

/**
 * checkifvalid - checks if valid
 * @stack: stack
 * @op: opcode
 * @line: line number
 */

void checkifvalid(stack_t **stack, unsigned int line, char *op)
{
	int i;
	instruction_t ops[] = {
	  {"push", _push},
	  {"pall", _pall},
	  {"pint", _pint},
	  {"pop", _pop},
	  {"swap", _swap},
	  {"add", _add},
	  {"nop", _nop},
	  {NULL, NULL}
	};
	for (i = 0; ops[i].opcode; i++)
		if (!strcmp(op, ops[i].opcode))
		{
			ops[i].f(stack, line);
			return;
		}
	if (op && op[0] != '#')
	{
		fprintf(stderr, "L%u: unknown instruction %s\n", line, op);
		exit(1);
	}
}
