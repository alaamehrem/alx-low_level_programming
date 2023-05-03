#include "main.h"
/**
 * puts2 - puts string
 * @str: value
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		int i = 0;

		if (i % 2 == 0)
			_putchar(*str);
		else
			continue;
		str++;
		i++;
	}
	_putchar('\n');
}
