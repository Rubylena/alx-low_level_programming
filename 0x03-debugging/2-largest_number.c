#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && b > c)
	{
		largest = a + '0';
	}
	else if (b > a && a > c)
	{
		largest = b + '0';
	}
	else
	{
		largest = c + '0';
	}
	return (largest);
}
