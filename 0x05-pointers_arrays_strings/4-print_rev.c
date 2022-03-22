#include "main.h"


/**
 * print_rev -  prints a string, in reverse
 * @s: value
 *Return: None
 */
void print_rev(char *s)
{
	int t;

	for (t = _strlen(s); t >= 0; t--)
	{
		_putchar(s[t]);
	}
	_putchar('\n');
}
