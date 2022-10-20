#include "main.h"
/**
  *_isdigit - check for digit
  *@c: integer
  *Return: returns 1 if it's a digit and 0 if not
  */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
