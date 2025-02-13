#include <stdio.h>#include <stdlib.h>#include <time.h>/**
 * main - Entry point *
 * Return: Always 0 (Success) */intmain(void)
{ int n;

 /* Initialize random number generator */ srand(time(0));
 /* Generate random number */
 n = rand() - RAND_MAX / 2;
 if (n > 0)
 {  printf("%d is positive\n", n);
 } elseif (n == 0)
 {  printf("%d is zero\n", n);
 } else
 {  printf("%d is negative\n", n);
 }
 return (0);}
