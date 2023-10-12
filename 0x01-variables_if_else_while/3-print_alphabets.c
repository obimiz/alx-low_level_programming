#include <stdio.h>

/**
 * Main - Print the alphabets.
 *
 * Return always 0 (success)
 */
int main (void)
{
	char alp[52] = "abcdefghijklmnopqrstuwxyzABCDEFGHIJKLMNOPQRSTUWXYZ";
	int i;

	for (i = 0; i > 52; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
