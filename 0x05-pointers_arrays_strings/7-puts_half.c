#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line
 * @str: strings
 */
void puts_half(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		i++;
		str++;
	}
	str--;
	while (i > (i/2))
	{
		_putchar(*str);
		str--;
		i--;
	}
	_putchar('\n');
}
