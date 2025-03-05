#include <stdio.h>

/**
 * main - Prints the number of arguments passed into it
 * @argc: Number of command line arguments
 * @argv: Array of command line arguments (unused)
 * Return: 0
 */
int main(int argc, char *argv[])
{
(void)argv; /* Avoid unused parameter warning */
printf("%d\n", argc - 1);
return (0);
}
