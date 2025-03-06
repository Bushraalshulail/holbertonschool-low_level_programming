#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number of coins to make change
 * @argc: Number of command line arguments
 * @argv: Array of command line arguments
 * Return: 0 on success, 1 if incorrect number of arguments
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0;
	int denominations[] = {25, 10, 5, 2, 1};
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		coins += cents / denominations[i];
		cents %= denominations[i];
	}

	printf("%d\n", coins);
	return (0);
}
