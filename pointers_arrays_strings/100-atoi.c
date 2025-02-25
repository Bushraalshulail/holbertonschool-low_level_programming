#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to be converted
 *
 * Return: the integer value of the string
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, result = 0;

	/* Skip leading whitespace characters */
	while (s[i] != '\0' && (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'))
		i++;

	/* Handle signs ('+' or '-') */
	while (s[i] != '\0' && (s[i] == '+' || s[i] == '-'))
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}

	/* Convert the string to an integer */
	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}

	return (result * sign);
}

