#include "main.h"

/**
 * _puts_recursion - Prints a string, followed by a new line.
 * @s: Pointer to the string to be printed.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0') /* Base case: end of string */
	{
		_putchar('\n');
		return;
	}
	_putchar(*s); /* Print current character */
	_puts_recursion(s + 1); /* Recursive call for the next character */
}
