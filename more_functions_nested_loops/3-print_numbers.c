#include "main.h"

/**
 * print_numbers - Prints the numbers from 0 to 9, followed by a new line.
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++) /* Loop from 0 to 9 */
	{
		_putchar(i + '0'); /* Print the current number */
	}
	_putchar('\n'); /* Print a new line */
}

