#include <stdlib.h>
#include <stdio.h>
/**
  *main - prints the number of arguments passed to it
  *@argc: prints number of arguments
  *@argv: prints each argument string
  *Return: 0
  */
int main(int argc, __attribute__((unused)) char **argv)
{
	if (argc > 0)
		printf("%d\n", argc - 1);

	return (0);
}
