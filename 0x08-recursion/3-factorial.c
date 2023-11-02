#include "main.h"
/**
 *factorial - returns the factorial of a number
 *@n: number to return the factorial from
 *
 *Return:the value of factorial(n)
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));
}
