#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse,
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	char n = '\n';

	for (c = 'z'; c <= 'a'; c--)
	{
		putchar(c + 1);
	}
	putchar(n);
	return (0);
}
