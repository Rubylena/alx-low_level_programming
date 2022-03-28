#include "main.h"

/**
 * _strstr - Searches a string for any of a set of bytes.
 * @haystack: The string to be searched.
 * @needle: The set of bytes to be searched for.
 *
 * Return: If a set is matched - a pointer to the matched byte.
 *         If no set is matched - NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; *haystack != '\0'; i++)
	{
		for (j = 0; j < needle[i]; j++)
		{
			if (*haystack == needle[i])
			{
				return (haystack);
			}
			haystack++;
		}
	}
	return (NULL);
}
