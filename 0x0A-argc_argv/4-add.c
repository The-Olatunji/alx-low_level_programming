#include <stdio.h>
#include <stdlib.h>
/**
  *main - adds positive integers only
  *@argc: int
  *@argv: pointer to array of string
  *Return: 0
  */
int main(int argc, char **argv)
{
	int i, sum = 0;

	if (argc < 2)
	{
		printf("%d\n", 0);
	}
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) < 0)
		{
			printf("%s\n", "Error");
			return (1);
		}
		else
		{
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
