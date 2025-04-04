#include "main.h"

/**
 * _isalpha - checks if a character is alphabetic (lowercase or uppercase)
 *
 * @c: the character to be checked
 *
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);  /* Character is alphabetic */
	}
	else
	{
		return (0);  /* Character is not alphabetic */
	}
}

