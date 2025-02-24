#include <stdio.h>

/**
 * main - Prints the numbers from 1 to 100, but with a twist.
 * For multiples of 3, it prints Fizz.
 * For multiples of 5, it prints Buzz.
 * For multiples of both 3 and 5, it prints FizzBuzz.
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}

		/* Print a space between numbers, but avoid extra space at the end */
		if (i != 100)
			printf(" ");
	}

	printf("\n");
	return (0);
}

