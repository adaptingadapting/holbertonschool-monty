#include "monty.h"

int main(int argc, char *argv[])
{
  FILE *fp;
  char *line = NULL;
  size_t len = 0;
  ssize_t nread;
  char *token[80] = {0};
  int i = 0;
  int (*f)(int);
	if (argc > 2)
	{
		printf("too mnay args\n");
		exit(1);
	}
  	fp = fopen(argv[1], "r");
	if (!fp)
		exit(EXIT_FAILURE);
	while ((nread = getline(&line, &len, fp)) != -1)
	{
		token[0] = strtok(line, " \t\n");
		token[1] = strtok(NULL, " \t\n");
		if (token[1])
			printf("%s %s", token[0], token[1]);
		else
			printf("%s", token[0]);
		printf("\n");
		f = formatFunc(token[0]);
	}
	free(line);
	fclose(fp);
	exit(EXIT_SUCCESS);
}

