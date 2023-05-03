#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line
 * @str: strings
 */
void puts_half(char *str)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	s--;
	while (i > (i/2))
	{
		_putchar(*s);
		s--;
		i--;
	}
	_putchar('\n');
