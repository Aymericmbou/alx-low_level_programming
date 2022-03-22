#include "math.h"


/**
 * _puts - Write a function that prints a string
 * @str: value
 * Return: None
 */

void _puts(char *str)
{
	int k;

	for (k = 0; str[k] != '\0'; k++)
	{
		_putchar(str[k]);
	}
	_putchar('\n');
}
