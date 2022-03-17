#include "main.h"

/**
 * print_line - Entry point
 * @n: number of times
 *
 * Return: 0
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
		else
		{
			_putchar('\n');
		}
	}
	if (n > 0)
	{
		_putchar('\n');
	}
}
