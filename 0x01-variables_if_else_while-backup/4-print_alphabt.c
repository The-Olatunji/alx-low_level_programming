#include <stdio.h>
#include <stdlib.h>
/**
  *main - function main
  *Return: returns 0
  */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	if (i != 'e' && i != 'q')
		{
	putchar(i);
		}
	putchar('\n');
	return (0);
}
