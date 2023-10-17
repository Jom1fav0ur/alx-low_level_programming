#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: pointer pointing to the string
 *
 * Return:0
 */

void rev_string(char *s)
{
	int length, x, half;
	char tempo;

	for (length = 0; s[length] != '\0'; length++)
		;
		x = 0;
		half = length / 2;

	while (half--)
	{
		tempo = s[length - x - 1];
		s[length - x - 1] = s[x];
		s[x] = tempo;
		x++;
	}
}
