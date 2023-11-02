#include "main.h"
/**
 *_strlen_recursion(char *s)-prints a string
 *@s:the character to be printing
 *
 * fonction print lengh of a string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
