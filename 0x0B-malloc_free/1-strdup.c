#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
  *_strdup - copy or duplicate a string to a newly allocated memory
  *@str: a pointer to string
  *Return: a char pointer to a new string which is a duplicate of *str
  */
char *_strdup(char *str)
{
	size_t i;
	size_t len;
	char *ns = NULL;

	len = strlen(str) + 1;
	ns = (char *)malloc((len) * sizeof(char));
	i = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	if (ns != NULL)
	{
		while (str[i] != '\0')
		{
			ns[i] = str[i];
			i++;
		}
		ns[i] = '\0';
	}
	if (ns == NULL)
	{
		return (NULL);
	}
	return (ns);
}
