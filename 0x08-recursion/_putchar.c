#include <unistd.h>
/**
 *@write:print a string
 *@c:caracter to printing
 *retur 1 success ,-1 eror
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}
