#include "main.h"

/**
 * puts_half - function that prints second half of the string
 * @str: This is the input string
 * Return: 0
 */

void puts_half(char *str)
{
	int whole_string, half_string;

	whole_string = 0;
	while (str[whole_string] != '\0')
		whole_string++;

	half_string = whole_string / 2;

	if (whole_string % 2 == 1)
		half_string++;

	while (half_string < whole_string)
	{
		_putchar(str[half_string]);
		half_string++;
	}
	_putchar('\n');
}
