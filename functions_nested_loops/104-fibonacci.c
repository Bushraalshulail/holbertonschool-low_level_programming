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
 * print_fibonacci_large - Prints Fibonacci numbers beyond the 92nd term
 * @f1_h1: First half of fib1
 * @f1_h2: Second half of fib1
 * @f2_h1: First half of fib2
 * @f2_h2: Second half of fib2
 */
void print_fibonacci_large(unsigned long f1_h1, unsigned long f1_h2,
			   unsigned long f2_h1, unsigned long f2_h2)
{
	int count;
	unsigned long h1, h2;

	for (count = 93; count <= 98; count++)
	{
		h1 = f1_h1 + f2_h1;
		h2 = f1_h2 + f2_h2;

		/* Handle overflow by carrying to the higher half */
		if (h2 >= 1000000000)
		{
			h1 += 1;
			h2 %= 1000000000;
		}

		/* Avoid leading zeros in large Fibonacci numbers */
		if (h1 == 0)
			printf(", %lu", h2);
		else
			printf(", %lu%09lu", h1, h2);

		f1_h1 = f2_h1;
		f1_h2 = f2_h2;
		f2_h1 = h1;
		f2_h2 = h2;
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
	unsigned long f1_h1, f1_h2, f2_h1, f2_h2;

	print_fibonacci_first_92(fib1, fib2);

	/* Split numbers into two halves to handle overflow */
	f1_h1 = fib1 / 1000000000;
	f1_h2 = fib1 % 1000000000;
	f2_h1 = fib2 / 1000000000;
	f2_h2 = fib2 % 1000000000;

	print_fibonacci_large(f1_h1, f1_h2, f2_h1, f2_h2);

	printf("\n");
	return (0);
}

