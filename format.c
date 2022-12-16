#include "monty.h"

/**
 * formatFunc - Recieves a formats and turns out the function
 * @z: char used to get the func
 * Return: returns the function
 */

int (*formatFunc(char *string))(int n)
{
	int i;
	formatFunctions FuncArray[] = {
				       {"push", _push},
				       {"pop", _pop},
				       {'\0', NULL}
};
	for (i = 0; FuncArray[i].specifier; i++)
		if (!(strcmp(FuncArray[i].specifier, string)))
			return (FuncArray[i].f);
	return (NULL);
}
