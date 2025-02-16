#include "main.h"

/**
 * print_alphabet_x10 - Prints the lowercase alphabet 10 times, each on a new line
 */
void print_alphabet_x10(void)
{
	int i;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 10; i++)
	{
		int j = 0;

		/* Print each character of alphabet */
		while (alphabet[j] != '\0')
		{
			_putchar(alphabet[j]);
			j++;
		}

		/* Print the newline character */
		_putchar('\n');
	}
}

