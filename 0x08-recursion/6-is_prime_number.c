#include "main.h"
/**
 *is_prime_number - prints 1 if the input integer is
 *a prime number, otherwise return 0
 *@n: the input integer
 *
 *Return: 1 success or 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2 || n == 1)
		return (0);
	return (is_prime2(n, 2));
}
/**
 *is_prime2 - check if n is prime
 *@n: the input integer
 *@divisor: the current divisor to check
 *
 * Return: 1 success or 0 otherwise
 */
int is_prime2(int n, int divisor)
{
	if (n < 2)
		return (0);
	if (n % divisor == 0)
		return (0);
	if (divisor * divisor > n)
		return (1);
	return (is_prime2(n, divisor + 1));
}
