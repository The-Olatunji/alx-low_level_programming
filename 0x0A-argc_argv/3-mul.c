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
	int n;

	if (argc != 3)
	{
		printf("%s\n", "Error");
	return (1);
	}
	else
	{
		n = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", n);
	}
	return (0);
}
