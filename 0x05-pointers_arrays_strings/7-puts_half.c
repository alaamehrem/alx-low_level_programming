#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line
 * @str: strings
 */
void puts_half(char *str)
{
	int i = 0;
	int a = 0;

	while (str[a] != '\0')
	{
		i++;
		a++;
	}
	int a = 0;
	if (i % 2 == 1)
		i = i + 1;
	i = i / 2;
	while (i > 0)
	{
		_putchar(str[a]);
		a++;
		i--;
	}
	_putchar('\n');
}
