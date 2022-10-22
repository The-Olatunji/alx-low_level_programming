#include "main.h"
/**
  *print_diagonal - print diagonal
  *@n: integer
  *Return: n
  */
void print_diagonal(int n)
{

	int i, sp;

	if (n <= 0)
	{
	_putchar('\n');
	}

	else
	{
		for (i = 1; i <= n; i++)
		{
			for (sp = 1; sp <= i; sp++)
		{
			_putchar(' ');
		}

		_putchar('\\');
		_putchar('\n');
		}

	}
}
