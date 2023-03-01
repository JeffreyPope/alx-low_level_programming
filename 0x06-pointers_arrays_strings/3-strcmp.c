#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1 : pointer to char parameters
 * @s2 : pointer to char parameters
 * Return: *dest
 */

int _strcmp(char *s1, char *s2)
{
	int j;
	int R;

	i = 0;

	while (s1[j] == s2[j] && (s1[j] != '\0' || s2[j] != '\0'))
	{
		j++;
	}
	R = s1[j] - s2[j];
	return (R);
}
