#include "main.h"

/**
 * print_rev -  prints a string, in reverse
 * @s: value
 *Return: None
 */
void print_rev(char *s)
{
	int j, t, lg;

	lg = 0;

	while (s[lg] != '\0')
	{
		lg++;
	}

	j = lg;

	for (t = j - 1; t >= 0; t--)
	{
		_putchar(s[t]);
	}
	_putchar('\n');
}
