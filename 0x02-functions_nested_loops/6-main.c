#include <stdio.h>
#include "main.h"
/**
  *main - checks code
  *
  *Return: 0
  */

int main(void)
{
	int r;

	r = _abs(22);
	printf("%d\n", r);
	r = _abs(-3389);
	printf("%d\n", r);
	r = _abs(-223232);
	printf("%d\n", r);
	return (0);
}
