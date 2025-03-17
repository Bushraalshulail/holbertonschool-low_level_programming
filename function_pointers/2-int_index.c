#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: the array to search
 * @size: the number of elements in the array
 * @cmp: a pointer to the comparison function
 *
 * Return: the index of the first element where cmp does not return 0,
 *         or -1 if no element matches or if size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}

