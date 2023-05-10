#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: input
 */
int i = 0;
int _strlen_recursion(char *s)
{
	if(*s != '\0')
	{
		i++;
		_strlen_recursion(s + 1);
	}
	return (i);
}
