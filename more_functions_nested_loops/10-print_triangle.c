#include "main.h"

/**
 * print_triangle - Prints a triangle of size 'size'.
 * @size: The size of the triangle.
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= size; i++)  /* Loop for each row */
	{
		for (j = 1; j <= size; j++)  /* Loop for each column */
		{
			if (j <= size - i)  /* Print spaces before the # */
				_putchar(' ');
			else
				_putchar('#');  /* Print the # symbol */
		}
		_putchar('\n');  /* Move to the next line after each row */
	}
}

