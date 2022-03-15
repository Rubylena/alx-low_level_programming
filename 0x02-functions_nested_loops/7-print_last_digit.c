#include "main.h"
/**
 * print_last_digit - check the code
 * @n: int type character
 * Return: 0
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		_putchar(((n % 10) * -1) + '0');
		return (-n);
	}
	else
	{
		_putchar((n % 10) + '0');
		return (n);
	}
}
