#include <stdlib.h>
#include <stdio.h>
/**
  *main - prints result of two integers
  *@argc: arg count
  *@argv: arg string
  *Return: 0
  */
int main(int argc, char **argv)
{
	int i, sum = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	exit(EXIT_SUCCESS);
}
