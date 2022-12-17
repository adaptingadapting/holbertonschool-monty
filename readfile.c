#include "monty.h"

/**
 * read_file - read file bruh
 * @file: file to read
 * @stack: double pointer to head
 */

void read_file(char *file, stack_t **stack)
{
	size_t len;
	int num = 0;
	int readline;
	char *line = NULL;
	FILE *fp;
	char *opcode;

	fp = fopen(file, "r");
	if (!fp)
	{
		printf("Error: Can't open file %s\n", file);
		exit(1);
	}
	while ((readline = getline(&line, &len, fp)) != -1)
	{
		opcode = strtok(line, delim);
		num++;
		if (opcode)
		checkifvalid(stack, num, opcode);
	}
	if (line)
		free(line);
	fclose(fp);
}
