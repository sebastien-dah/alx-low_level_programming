#include <stdio.h>
/**
 * main -  prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
