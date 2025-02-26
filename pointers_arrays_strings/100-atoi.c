#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: The input string
 *
 * Return: The converted integer, or 0 if no valid number is found
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, has_started = 0;
	unsigned int result = 0;

	/* Traverse the string */
	while (s[i] != '\0')
	{
		/* Handle signs before the number starts */
		if (s[i] == '-' && !has_started)
			sign *= -1;
		else if (s[i] == '+' && !has_started)
			sign *= 1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			/* Convert string to integer */
			result = result * 10 + (s[i] - '0');
			has_started = 1;
		}
		else if (has_started)
			break; /* Stop if a non-digit appears after a number */
		i++;
	}

	return (sign * result);
}

