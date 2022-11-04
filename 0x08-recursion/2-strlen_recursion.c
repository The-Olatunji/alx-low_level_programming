#include "main.h"
/**
  *_strlen_recursion - string length recursively
  *@s: pointer to string
  *
  *Return: num
  */

int _strlen_recursion(char *s)
{

	if (*s != '\0')
	return (1 + _strlen_recursion(s + 1));

	return (0);
}
