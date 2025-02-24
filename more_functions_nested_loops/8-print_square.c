#include "main.h"

/**
 * print_square - Prints a square of '#' characters.
 * @size: The size of the square.
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');  /* Print a newline if size is 0 or less */
	}
	else
	{
		int i, j;

		for (i = 0; i < size; i++)  /* Loop through each row */
		{
			for (j = 0; j < size; j++)  /* Loop through each column */
			{
				_putchar('#');  /* Print the '#' for the square */
			}
			_putchar('\n');  /* Print a newline after each row */
		}
	}
}

