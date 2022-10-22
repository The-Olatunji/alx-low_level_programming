#include "main.h"
/**
  *print_line - print a long line in the terminal
  *@n: amount of times to be print
  *
  */

void print_line(int n)
{

	if (n > 0)
	{
		int i;

		for (i = 0; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
	}
	else
		_putchar('\n');
}
