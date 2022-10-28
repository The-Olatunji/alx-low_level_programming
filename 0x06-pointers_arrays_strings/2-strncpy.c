#include "main.h"

/**
   * _strncpy - a function that copies a string
    * @dest: copy to
     * @src: copy from
      * @n: input number of char
       * Return: Always 0 (Success)
       */
char *_strncpy(char *dest, char *src, int n)
{
	int index;

	for (index = 0; index < n && src[index] != '\0' ; index++)
	{
	dest[index] = src[index];
	}
	for (; index  < n; index++)
	{
	dest[index] = '\0';
	}
	return (dest);
}
