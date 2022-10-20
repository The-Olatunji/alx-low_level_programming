#include "main.h"
/**
  *print_last_digit - last digit of an integer
  *@n: the integer
  *Return: n
  */
int print_last_digit(int n)
{	int pld = n % 10;

	if (pld < 0)
	pld = pld * -1;
	else
	_putchar(pld + '0');
	return (pld);
}
