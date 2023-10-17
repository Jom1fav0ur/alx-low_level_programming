#include <stdio.h>

/**
 * print_array - functions that prints n elements of an array of integers
 * @a: Input array
 * @n: length of the array
 */

void print_array(int *a, int n)
{
	int no_of_arrays;

	for (no_of_arrays = 0; no_of_arrays < n; no_of_arrays++)
	{
		printf("%d", a[no_of_arrays]);
		if (no_of_arrays < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
