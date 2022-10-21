#include "main.h"
/**
  *more_numbers - prints 0-14 10 times
  */

void more_numbers(void)
{
	int n;
	int r = 1;

	while (r <= 10)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
			{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			}
			else
			{
				_putchar((n % 10) + '0');
			}
		}
	r++;
	_putchar('\n');
	}
}
