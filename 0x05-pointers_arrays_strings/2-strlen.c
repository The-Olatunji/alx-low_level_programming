#include "main.h"
/**
  *_strlen - function to return the string length
  *@s: char s
  *Return: sum
  */
int _strlen(char *s)
{
	int i = 1, sum = 0;
	char pl = s[0];

	while (pl != '\0')
	{
		sum++;
		pl = s[i++];
	}
	return (sum);
}
