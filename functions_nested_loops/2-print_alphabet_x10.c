#include "main.h"
/**
 * print_alphabet_x10 - Prints 10 times the alphabet in lowercase
 *
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 10; i++)  /* Loop 10 times */
	{
		for (j = 'a'; j <= 'z'; j++)  /* Loop through the alphabet */
		{
			_putchar(j);  /* Print the letter */
		}
		_putchar('\n');  /* Print a new line after each alphabet */
	}
}

