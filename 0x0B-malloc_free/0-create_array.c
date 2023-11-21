#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array
 * @size: size of the array to create
 * @c: char storage
 *
 * Return: pointer of an array of chars
 */
char *create_array(unsigned int size, char c)
{
	char *chr;
	unsigned int n;

	chr = malloc(sizeof(c) * size);

	if (!size || !chr)
		return (NULL);
	for (n = 0; n < size; n++)
		chr[n] = c;
	return (chr);
}
