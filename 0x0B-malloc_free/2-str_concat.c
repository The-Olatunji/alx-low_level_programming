#include "main.h"
#include <stdlib.h>
/**
  *str_concat - concatenate two string
  *@s1: first string
  *@s2: second string
  *Return: pointer to string
  */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int n = 0;
	int x;
	int count = 0;
	char *ns = NULL;

	if (s1 != NULL)
	{
		for (; s1[i] != '\0'; i++)
		;
	}
	if (s1 == NULL)
	{
		 s1 = "";
	}
	if (s2 != NULL)
	{
		for (; s2[n] != '\0'; n++)
		;
	}
	if (s2 == NULL)
	{
		s2[0] = '\0';
	}


	ns = malloc((i + n + 1) * sizeof(char));

	if (ns == NULL)
	{
		return (NULL);
	}
	for (x = 0; s1[x] != '\0'; x++)
	{
		ns[x] = s1[x];
	}
	for (; s2[count] != '\0'; x++)
	{
		ns[x] = s2[count];
		count++;
	}
	return (ns);
}
