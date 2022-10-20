#include "main.h"
/**
  *main - check code of function prototype 4-isalpha.c
  *
  *Return: return 0
  */
int main(void)
{
	int r;

	r = _isalpha('A');
	_putchar (r + '0');
	r = _isalpha(3);
	_putchar(r + '0');
	r = _isalpha('a');
	_putchar(r + '0');
	_putchar('\n');

	return (0);
}
