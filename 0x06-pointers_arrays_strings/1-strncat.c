#include "main.h"

/**
 * _strncat - concats two words
 * @dest : pointer to char param
 * @src : pointer to char param
 * @n : int parameter
 * Return: *dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int m;
	int a;

	m = 0;

	for (a = 0; a < 1000; a++)
	{
		if (dest[a] == '\0')
		{
			break;
		}
		m++;
	}

	for (a = 0; src[a] != '\0' && a < n; a++)
	{
		dest[m + a] = src[a];
	}
	dest[m + a] = '\0';
	return (dest);
}
