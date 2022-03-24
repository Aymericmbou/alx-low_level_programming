#include "main.h"

/**
 * _strcat - concatenate strings
 * @dest: value
 * @src: value
 * Return: pointer to the resulting string dest 
 */
char *_strcat(char *dest, char *src)
{
	char *strcat;

	*strcat = *dest + *src;

	return (*strcat);
}
