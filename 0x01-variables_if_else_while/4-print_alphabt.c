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
	char letter;
	int i;

	for (letter = 'a'; letter < 'z'; letter++)
	{
		if (letter != 'e' || letter != 'q')
			putchar(letter)
	}
	putchar('\n');
	return (0);
}
