#include "main.h"
/**
  *print_alphabet_x10 - prints alphabet x10
  *
  */
void print_alphabet_x10(void)
{
	int n = 1;
	char c;


	while (n <= 10)
	{
	for (c = 'a'; c <= 'z'; c++)
		{
		_putchar (c);
		}
	n++;
	_putchar('\n');
	}
}
