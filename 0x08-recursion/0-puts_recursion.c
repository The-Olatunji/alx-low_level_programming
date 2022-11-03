#include "main.h"

/**
  *_puts_recursion - return a function that prints a string
  *@s: a character pointer
  */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	_putchar('\n');

	_putchar(*s);
	_puts_recursion(s + 1);
}
