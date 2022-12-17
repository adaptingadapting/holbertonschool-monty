#include "monty.h"
  
/**
 * main - project
 * @argv: no
 * @argc: count
 * Return: yes
 */

int main(int argc, char *argv[])
{
	stack_t *head;

	if (argc!= 2)
	{
		printf("USAGE: monty file\n");
		exit(1);
	}
	head = NULL;

	read_file(argv[1], &head);
	exit(0);
}
