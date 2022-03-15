#include "main.h"
/**
 * print_last_digit - check the code
 * @n: int type character
 * Return: 0
 */
int print_last_digit(int n)
{
	int num = n % 10;
	if (n < 0)
	{
		_putchar((num % 10) + '0');
	}
	else
	{
		_putchar(num + '0');
	}
	return (0);
}
