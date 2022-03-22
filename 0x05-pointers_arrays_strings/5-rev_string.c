#include "main.h"


/**
 * rev_string - function that reverses a string.
 * @s: Value
 * Return: None
 */
void rev_string(char *s)
{
	int j, h, i, lg, k;
	char *t;

	lg = 0;

	while (s[lg] != '\0')
	{
		lg++;
	}

	for (i = lg-1, k=0; i >= 0, k < lg; i--, k++)
	{
		t[k] = s[i];
	}

	for (j = 0, h = 0; j < lg, h < lg; h++, j++)
	{
		s[j] = t[h];
	}
}
