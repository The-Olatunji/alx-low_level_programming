#include "main.h"
/**
  *_islower - check for lowercase character
  *@c: returns an integer
  *
  *Return: returns c
  */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
	return (c);
}
