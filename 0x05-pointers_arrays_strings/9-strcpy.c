#include "main.h"

/**
 * *_strcpy - copies the string pointer to src
 * @desk: char type to string
 * @src: char type string
 * Description: copy the string pointed to by pointer `src` to
 * the buffer pointed to desk
 * Return: pointer to desk
 */
char *_strcpy(char *dest, char *src)
{
	int z = -1;

	do {
		z++;
			dest[z] = src[z];
	}
	while (src[z] != '\0');

	return (dest);
}
