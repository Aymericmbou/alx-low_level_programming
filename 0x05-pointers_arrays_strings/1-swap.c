#include "main.h"


/**
 * swap_int - swap values of to interger
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
