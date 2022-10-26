#include "main.h"
/**
  *swap_int - swap 2 different integer
  *@a: first integer
  *@b: second integer
  */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
