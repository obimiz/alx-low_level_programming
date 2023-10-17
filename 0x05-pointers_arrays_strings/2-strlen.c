#include "main.h"

/**
 * _strlen - a function that returns the lenght of a string
 * @s: string to be checked
 * Return: return the length of a string
 */

int _strlen(char *s)
{
	int string_length = 0;

	while (s[string_length])
		string_length++;
	return (string_length);
}
