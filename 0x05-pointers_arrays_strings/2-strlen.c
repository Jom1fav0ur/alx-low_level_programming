#include "main.h"

/**
 * _strlen - function that returns the length of the string
 * @s:- string to be checked
 * Return: Always 0 (Success)
 */

int _strlen(char *s)
{
	int string_length = 0;

	while (s[string_length])
		string_length++;
	return (string_length);
}
