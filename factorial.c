#include <stdio.h>
/**
  *main - entry point
  *
  *Return: returns 0
  */
int main(void)
{
	int val = factorial(5);

	printf("%d! = %d\n", 5, val);
	printf("%d! = %d\n", 4, factorial(4));
	return (0);
}


/**
  *factorial - entry point
  *
  *Return: retval
  */
int factorial(int n)
{
	int retval = 1;

	if (n != 1)
	retval = n * factorial(n - 1);
	return (retval);
}
