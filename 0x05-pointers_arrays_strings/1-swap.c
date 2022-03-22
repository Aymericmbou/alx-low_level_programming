#include "main.h"

/**
 * 1-swap - swap values of to interger
 * @a: the value
 * @b: the value
 * Return: none 
 */

void swap_int(int *a, int *b)
{
	int r;
	r = *a;
	*a = *b;
	*b = r;
}
