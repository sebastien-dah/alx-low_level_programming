#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/*betty style doc for function main goes there */
/**
 *main - Entry Point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_max / 2;
	/* your code goes there */
	if (n > 0)
		print("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}
