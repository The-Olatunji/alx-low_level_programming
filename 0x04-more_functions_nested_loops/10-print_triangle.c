#include "main.h"
/**
  *print_triangle - prints a triangle with the # character
  *@size: size is an integer
  *
  */

void print_triangle(int size)
{
	int ro, sp, tr;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (ro = 1; ro <= size; ro++)
	{
		for (sp = 1; sp <= (size - ro); sp++)
		{
			_putchar(' ');

		}
			for (tr = 1; tr <= ro; tr++)
			{
				_putchar('#');
			}
			_putchar('\n');
	}
	}
}
