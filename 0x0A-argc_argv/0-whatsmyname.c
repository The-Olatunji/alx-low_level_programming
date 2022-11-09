#include <stdio.h>
#include <stdlib.h>
/**
  *main - prints file name
  *@argc: argument count
  *@argv: argument vector
  *Return: 0
  */
int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	exit(EXIT_SUCCESS);
}
