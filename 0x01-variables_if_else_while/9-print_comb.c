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

	for (num = '0'; num <= '9'; num++)
	{
		putchar(',');
		putchar(' ');
		putchar(num + '0');
	}
	putchar('\n');
	return (0);
}
