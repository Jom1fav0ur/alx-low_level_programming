#include "variadic_functions.h"

/**
 * sum_them_all - to calculate the sum of its parameters
 * @n: this is the number of arguments passed into the function
 *
 * Return: the result of the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int x;
	int sum = 0;

	va_list list;

	va_start(list, n);

	for (x = 0; x < n; x++)
		sum += va_arg(list, int);
	va_end(list);
	return (sum);
}
