#include <unistd.h>
/**
*@write:fonction that prints a character
*@c:character to printing
*return 1 success, -1 error
*/
void _putchar(int c)
{
	return (write(1, &c, 1));
}
