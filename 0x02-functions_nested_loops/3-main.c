#include "main.h"
/**
  *main - check code
  *
  *Return: 0
  */

int main(void)
{
	int r;

	r = _islower('I');
	_putchar(r + '0');
	r = _islower('a');
	_putchar(r + '0');
	r = _islower('A');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
