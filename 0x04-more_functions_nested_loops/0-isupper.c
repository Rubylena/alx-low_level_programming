#include "main.h"

/**
 * print_alphabet - Print alphabet in lowercase
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
