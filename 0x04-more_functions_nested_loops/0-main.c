#include "main.h"
#include <stdio.h>
/**
  *main - check code of _isupper
  *
  *Return: 0
  */

int main(void)
{
	char c;
	int r;

	c = 'a';
	r = _isupper(c);
	printf("%c: %d\n", c, r);
	c = 'D';
	r = _isupper(c);
	printf("%c: %d\n", c, r);
	return (0);
}
