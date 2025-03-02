#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: The string to check
 * @accept: The set of characters to look for
 *
 * Return: The number of characters in the initial segment of s
 *         which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *p;

	while (*s)  /* Loop through the string s */
	{
		p = accept;
		while (*p)  /* Loop through the string accept */
		{
			if (*s == *p)  /* If a character in s matches one in accept */
			{
				count++;
				break;  /* No need to check further in accept */
			}
			p++;
		}
		if (!*p)  /* If no match was found in accept, stop */
		{
			break;
		}
		s++;
	}
	return (count);  /* Return the number of valid characters */
}

