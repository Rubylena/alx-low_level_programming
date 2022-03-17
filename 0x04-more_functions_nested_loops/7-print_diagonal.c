#include "main.h"

/**
 * print_diagonal - Entry point
 * @n: number of times
 *
 * Return: 0
 */
void print_diagonal(int n)
{
	int i;
	int k;

	for (i = 0; i < n; i++)
	{
		for (k = 0; k < n; k++)
		{
			if (k == i)
			{
				_putchar('\\');
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
