#include "main.h"

/**
 * positive_or_negative - function determines when an is positive or negative
 * @i: number of times to be printed
 * main - determines if the value is positive or negative or zero
 * 0: the to be checked
 * Return: 0 on success
 */

void positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%d is %s\n", i, "negative");
	}
	else if (i > 0)
	{
		printf("%d is %s\n", i, "positive");
	}
	else
	{
		printf("%d is %s\n", i, "zero");
	}
	return;
}
