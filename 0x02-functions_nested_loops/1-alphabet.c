#include "main.h"

/**
 * main - Entry point
 * Description -  prints the alphabet, in lowercase
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');

	return (0);
}
