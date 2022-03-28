#include "main.h"

/**
 * _memcpy - Fills the first n bytes of the memory area
 *          pointed to by @s with the constant byte @c.
 * @dest: A pointer to the memory area to be filled.
 * @src: The pointer to be copied into the memory area.
 * @n: The number of bytes to be filled.
 *
 * Return: A pointer to the filled memory area @dest.
 */
char *_memcpy(char *s, char b,  unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
