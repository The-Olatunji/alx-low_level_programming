#include "main.h"
/*
 *factorial - yeah
 *@n: an int
 *Return: (0)
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));

	return (0);
}
