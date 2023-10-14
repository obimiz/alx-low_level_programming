#include <stdio.h>
/**
 * main - print all possible different combinations of two digits
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n, m;

	for (n = 0; n < 10; n++)
	{
		for (m = 0;  m < 10; m++)
		{
			if (n < j)
			{
				putchar(n + '0');
				putchar(m + '0');
				if (n != 8 || m != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
