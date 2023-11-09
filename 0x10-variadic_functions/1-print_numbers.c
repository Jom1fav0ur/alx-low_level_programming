#include "variadic_functions.h"

/**
 * print_numbers - print given numbers as parameters
 * @separator: string to be printed between numbers
 * @n: represents number of arguments passed into the functions
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int m;
	va_list list;

	va_start(list, n);

	for (m = 0; m < n; m++)
	{
		if (!separator)
			printf("%d", va_arg(list, int));
		else if (separator && m == 0)
			printf("%d", va_arg(list, int));
		else
			printf("%s%d", separator, va_arg(list, int));
	}
	va_end(list);
	printf("\n");
}
