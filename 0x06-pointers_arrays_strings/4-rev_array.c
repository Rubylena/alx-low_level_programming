#include "main.h"

/**
 * reverse_array - reverse the content of an array
 * @a: array
 * @n: number of elements
 *
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int j;
	int i;

	i = 0;

	int temp;

	j = n - 1;

	while (i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j++;
	}
}
