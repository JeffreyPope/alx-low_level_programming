#include "main.h"

/**
 * string_toupper - changes lowercase letters to uppercase of a string
 * @s: pointer to char parameters
 *
 * Return: *s
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
	}
	return (s);
}
