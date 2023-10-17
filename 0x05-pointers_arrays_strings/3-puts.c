#include "main.h"

/**
 * -put - function that prints a string
 *  @str:- pointer to the string
 *  Return: always return 0
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
		_putchar(str[i]);
	i++;
	_putchar('\n');
}
