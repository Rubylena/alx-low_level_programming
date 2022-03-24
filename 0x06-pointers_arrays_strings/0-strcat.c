#include "main.h"

/**
 * _strcat - Concatenates a string pointed to by @src, including the
 *           terminating null byte, removes terminating null at dest .
 * @dest: A strng to concatenate the string to.
 * @src: The source string to copy.
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strcat(char *dest, char *src)
{
<<<<<<< HEAD
	int j = 0;

	while (dest[j] != '\0')
	{
		j++;
	}

	int i = 0;
=======
	
	int j;
	int i;
	j = 0;

	while (dest[j] != '\0')
		j++;

	i = 0;
>>>>>>> f9e8549969f7abe9ba753ef9d90f911a6ff3487b

	while (src[i] != '\0')
	{
		dest[j] = src[i];
		j++;
		i++;
	}
<<<<<<< HEAD
	dest[i] = '\0';
=======
	dest[j] = '\0';
>>>>>>> f9e8549969f7abe9ba753ef9d90f911a6ff3487b

	return (dest);
}
