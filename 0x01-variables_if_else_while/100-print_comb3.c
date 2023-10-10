#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m;
	for (n = 34; n <= 42; n++)
	{
		for (m =35; m <= 43; m++)
		{
			if (m > n)
			{
				putchar(n);
				putchar(m);
				if (n != 42 || m != 43)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
