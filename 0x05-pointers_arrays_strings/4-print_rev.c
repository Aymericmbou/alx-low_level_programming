#include "main.h"

int _strlen(char *s);

/**
 * print_rev -  prints a string, in reverse
 * @s: value
 *Return: None
 */
void print_rev(char *s)
{
	int j, t;

	j = _strlen(s);

	for (t = j; t >= 0; t--)
	{
		_putchar(s[t]);
	}
	_putchar('\n');
}
