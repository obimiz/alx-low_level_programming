#include <stdio.h>
/**
 * main - print all possible different combinations of two digits
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n, m;

	for (n = 0; n < 9; n++)
	{
		for (m = n + 1;  m < 10; m++)
			{
				putchar(n + '0');
				putchar(m + '0');

				if (!= 8 || j != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
	}
	putchar('\n');
	return (0);
}
