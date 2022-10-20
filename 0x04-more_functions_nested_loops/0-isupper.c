#include "main.h"
/**
  *_isupper - return uppercase character
  *@c: integer
  *
  *Return: c
  */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
