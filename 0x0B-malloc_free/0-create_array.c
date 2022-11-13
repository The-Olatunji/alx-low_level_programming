#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
  *create_array - returns a char pointer that creates an array of char
  *@size: unsigned int
  *@c: char
  *Return: returns a char pointer
  */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	a = (char *)malloc(size * sizeof(char));
	if (size  == 0)
	{
		return (NULL);
	}
	if (a != NULL)
	{
		i = 0;
		while (i < size)
			{
			a[i] = c;
			i++;
		}
	a[i] = '\0';
	}
	return (a);
}
