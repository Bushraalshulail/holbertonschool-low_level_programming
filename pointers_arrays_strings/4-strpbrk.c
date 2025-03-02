#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: The string to search
 * @accept: The set of bytes to search for
 *
 * Return: A pointer to the first occurrence in s of any byte in accept,
 *         or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	/* Loop through the string s */
	while (*s)
	{
		/* Loop through the string accept */
		char *a = accept;

		while (*a)
		{
			/* If a character in s matches a character in accept */
			if (*s == *a)
			{
				return (s); /* Return pointer to the matched character */
			}
			a++;
		}
		s++;
	}
	return (NULL); /* Return NULL if no match is found */
}

