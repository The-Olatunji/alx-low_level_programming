#include "main.h"
#include <stdlib.h>
/**
  *strdup - copy or duplicate a string to a newly allocated memory
  *@str: a pointer to string
  *Return: a char pointer to a new string which is a duplicate of *str
  */
char *_strdup(char *str)
{
	size_t i;
	size_t len;
	char *ns;
	size_t n;

	for (n = 0; str[n] != '\0'; n ++)
	{
		n++;
	}

	len = n + 1;
	ns = malloc((len + 1) * sizeof(char));
	i = 0;
	if (ns != NULL)
	{
		while (i < len)
		{
			ns[i] = str[i];
			i++;
		}
		ns[i] = '\0';
	}
	return (ns);
}
