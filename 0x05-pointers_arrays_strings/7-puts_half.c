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
	char len = str[i];

	for (i = 0; len != '\0'; i++)
	{
		if ((len % 2) == 0)
		{
			n = len / 2;
		}
		else
		{
			n = (len + 1) / 2;
		}
		for (i = n; i < len; i++)
		{
			_putchar(len);
		}
		_putchar('\n');
	}
}
