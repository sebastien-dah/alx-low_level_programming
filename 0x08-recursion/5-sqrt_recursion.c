#include "main.h"
/**
 *_sqrt_recursion - print naturel square root of number
 *@n: the number which to be calculated the square root
 *
 *Return: sqrt_recursion(n) or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	if (n < 0)
		return (-1);
	return (find_sqrt(n, (1)));
}
/**
 *find_sqrt - helper function to find the square root
 *@guess: number iterate to 1 form n
 *@n: number which to be calculated the square root
 *
 *Return: find_sqrt(n,guess)
 */
int find_sqrt(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	if (guess * guess > n)
		return (-1);
	return (find_sqrt(n, guess + 1));
}
