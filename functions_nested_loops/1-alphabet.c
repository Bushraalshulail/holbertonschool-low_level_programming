#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet followed by a new line
 */
void print_alphabet(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	/* Print each character using _putchar */
	for (i = 0; alphabet[i] != '\0'; i++)
	{
		_putchar(alphabet[i]);
	}
	_putchar('\n'); /* Print newline */
}

