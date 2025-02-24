#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal.
 * @n: The number of times the character \ should be printed.
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');  /* Print only a newline if n is 0 or less */
	}
	else
	{
		int i, j;

		for (i = 0; i < n; i++)  /* Loop through the number of rows */
		{
			for (j = 0; j < i; j++)  /* Print spaces for diagonal effect */
			{
				_putchar(' ');
			}
			_putchar('\\');  /* Print the backslash for the diagonal */
			_putchar('\n');  /* Print a newline after each row */
		}
	}
}

