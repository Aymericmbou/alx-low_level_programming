#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap values of to interger
 * @a: the value
 * @b: the value
 * Return: None 
 */
void swap_int(int *a, int *b)
{
	int r;

	r = *a;
	*a = *b;
	*b = r;
}
