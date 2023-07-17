#include <stdio.h>
/**
 * main - prints all possible combinations of
 * single-digit numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	putchar('0');

	for (num = 1; num < 10; num++)
	{
		putchar(',');
		putchar(' ');
		putchar(num + '0');
	}
	return (0);
}
