#include "main.h"
/**
  *_isalpha - check character return 1 for alphabet and 0 for non-alpha
  *@c: c is an integer
  *
  *Return: returns c
  */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
	return (c);
}
