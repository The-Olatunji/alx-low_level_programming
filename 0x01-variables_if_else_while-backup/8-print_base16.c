#include <stdio.h>
/**
  *main - print all hexadecimal
  *Return: 0
  */
int main(void)
{
	int i;
	char c;

	for (i = 0; i < 9; i++)
		putchar((i % 10) + '0');
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
