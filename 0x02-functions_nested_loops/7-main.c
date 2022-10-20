#include "main.h"
/**
  *main - check code
  *
  *Return: 0 always
  */

int main(void)
{
	int r;

	r = print_last_digit(-393232);
	_putchar('0' + r);
	r = print_last_digit(39);
	r = print_last_digit(1111390);
	_putchar('\n');
	return (0);
}
