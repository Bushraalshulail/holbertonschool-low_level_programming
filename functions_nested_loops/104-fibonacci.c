#include <stdio.h>

/**
 * print_fibonacci_first_92 - Prints the first 92 Fibonacci numbers
 * @fib1: First Fibonacci number
 * @fib2: Second Fibonacci number
 */
void print_fibonacci_first_92(unsigned long fib1, unsigned long fib2)
{
	int count;
	unsigned long next;

	printf("%lu, %lu", fib1, fib2);

	for (count = 3; count <= 92; count++)
	{
		next = fib1 + fib2;
		printf(", %lu", next);
		fib1 = fib2;
		fib2 = next;
	}
}

/**
 * print_fibonacci_large - Prints Fibonacci numbers above 92th term
 * @fib1_half1: First half of fib1
 * @fib1_half2: Second half of fib1
 * @fib2_half1: First half of fib2
 * @fib2_half2: Second half of fib2
 */
void print_fibonacci_large(unsigned long fib1_half1, unsigned long fib1_half2,
						   unsigned long fib2_half1, unsigned long fib2_half2)
{
	int count;
	unsigned long half1, half2;

	for (count = 93; count <= 98; count++)
	{
		half1 = fib1_half1 + fib2_half1;
		half2 = fib1_half2 + fib2_half2;

		if (half2 >= 1000000000)
		{
			half1 += 1;
			half2 %= 1000000000;
		}

		printf(", %lu%09lu", half1, half2);

		fib1_half1 = fib2_half1;
		fib1_half2 = fib2_half2;
		fib2_half1 = half1;
		fib2_half2 = half2;
	}
}

/**
 * main - Prints the first 98 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long fib1 = 1, fib2 = 2;
	unsigned long fib1_half1, fib1_half2, fib2_half1, fib2_half2;

	print_fibonacci_first_92(fib1, fib2);

	fib1_half1 = fib1 / 1000000000;
	fib1_half2 = fib1 % 1000000000;
	fib2_half1 = fib2 / 1000000000;
	fib2_half2 = fib2 % 1000000000;

	print_fibonacci_large(fib1_half1, fib1_half2, fib2_half1, fib2_half2);

	printf("\n");
	return (0);
}

