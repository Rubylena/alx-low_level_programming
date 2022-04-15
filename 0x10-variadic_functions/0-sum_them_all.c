#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - add all intergers
 * @n: first and known integer, number of arguments
 * @...: infinite number of variables
 * Return: if n == 0 - 0
 *	or - sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i, sum;

	sum = 0;
	
	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
