#include "main.h"
/**
 * _puts - puts string
 * @str: value
 */
void _puts(char *str)
{
	char *str;

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
}
