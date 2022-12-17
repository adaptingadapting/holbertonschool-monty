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
	stack_t *temp = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(1);
	}
	head = NULL;

	read_file(argv[1], &head);
	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	exit(0);
}
