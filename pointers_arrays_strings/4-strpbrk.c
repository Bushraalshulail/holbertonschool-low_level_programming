#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The input string to search in.
 * @accept: The set of bytes to search for.
 *
 * Return: A pointer to the first occurrence in s of any byte from accept,
 *         or '\0' if no match is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}

	/* Return '\0' instead of NULL since we cannot use stdlib */
	return ('\0');
}

