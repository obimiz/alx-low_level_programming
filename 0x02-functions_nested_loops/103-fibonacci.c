#include <stdio.h>

/**
 * main - Prints the sum of Even Fibonacci numbers
 * less than 4000000.
 *
 * Return: Nothing!
 */
int main(void)
{
	int i = 0;
	long l = 1, m = 2, sum = m;

	while (m + l < 4000000)
	{
		m += l;

		if (m % 2 == 0)
			sum += m;

		l = m - l;

		++i;
	}

	printf("%ld\n", sum);
	return (0);
}
