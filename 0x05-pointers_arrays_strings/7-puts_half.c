#include "main.h"

/**
 * puts_half - print a string to stdout
 * @str: char array string type
 * Description: Can only use _putchar
 */

void puts_half(char *str)
{
	int i = 0;
	int n;
	
	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] % 2) == 0)
		{
			n = str[i] / 2;
		}
		else
		{
			n = (str[i] + 1) / 2;
		}
		for (i = n; i < str[i]; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
}
