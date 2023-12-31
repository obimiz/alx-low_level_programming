#include "main.h"

/**
 * print_diagonal -  a function that draws a diagonal line on the terminal
 * @n: input number of times '\' should be printed
 * Return: a diagonal
 */
void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (y = 0; y < n; y++)
	{
		for (x = 0; x < y; x++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
