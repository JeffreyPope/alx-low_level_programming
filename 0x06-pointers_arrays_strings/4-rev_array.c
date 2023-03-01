#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a : pointer to int parameters
 * @n : pointer to int parameters
 * Return: None
 */

void reverse_array(int *a, int n)
{
	int i;
	int g;
	int tmp;

	i = 0;
	g = n - 1;

	while (i < j)
	{
		tmp = a[i];
		a[i] = a[g];
		a[g] = tmp;
		i++;
		g--;
	}
}
