#include "main.h"
/**
 *_print_rev_recursion-prints a string
 *@s:character to be printing
 *
 *fonction prints a string in reverse
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
