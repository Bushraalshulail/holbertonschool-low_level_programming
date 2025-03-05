#include <stdio.h>

/**
 * main - Prints the name of the program
 * @argc: Number of command line arguments
 * @argv: Array of command line arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
(void)argc; /* We do not use argc in this program */
printf("%s\n", argv[0]);
return (0);
}

