#include <stdio.h>
/**
 * main - prints all single digit numbers of
 * base 10 starting from 0
 * followed by a new line.
 * You can only use the putchar
 * You can only use putchar twice in your code
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
