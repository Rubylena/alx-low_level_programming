#include "main.h"
/**
 * _islower - check the code
 * @c: char type character
 * Return: 0
 */
int _islower(int c)
{
	if ( c >= 97 && c <= 122)
	{
		_putchar(49);
	} else
	{
		_putchar(48);	
	}
	return (0);
}
