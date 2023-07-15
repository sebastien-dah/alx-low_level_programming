#include <stdio.h>
/**
 * main - prints the alphabet in lowercase,
 * followed by a new line.
 * Print all the letters except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp[24] = "abcdfghijklmnoprstuvwxyz";
	int i;
	char n = '\n';

	for (i = 0; i < 24; i++)
	{
		putchar(alp[i]);
	}
	putchar(n);
	return (0);
}
