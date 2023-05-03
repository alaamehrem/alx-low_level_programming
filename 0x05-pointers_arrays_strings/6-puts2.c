#include "main.h"
/**
 * puts2 - puts string
 * @str: value
 */
void puts2(char *str)
{
	int i = 0;
	while (*str != '\0')
	{
		if (i % 2 == 0)
			_putchar(*str);
		str++;
		i++;
	}
	_putchar('\n');
}
