#include "main.h"

/**
 * swap_int - take in two variables and swap them
 * @a: swaps and store address of b
 * @b: swaps and store address of a
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int change;

	change = *b;
	*b = *a;
	*a = change;
}
