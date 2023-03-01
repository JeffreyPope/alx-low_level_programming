#include "main.h"

/**
 * _strncpy - Concats two words
 * @dest : pointer to char parameters
 * @src : pointer to char parameters
 * @n : int parameters
 * Return: *dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[j] = src[j];
	}

	for ( ; j < n; j++)
	{
		dest[j] = '\0';
	}
	return (dest);
}
