#include "main.h"

/**
 * cap_string - reverse the content of an array
 * @c: array
 */
char *cap_string(char *)
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
		j--;
	}
}
