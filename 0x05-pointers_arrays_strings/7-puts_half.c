#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line
 * @str: strings
 */
void puts_half(char *str)
{
	int i = 0;
	int a = 0;
	int n;

	while (str[a] != '\0')
	{
		i++;
		a++;
	}
	a = 0;
	if (i % 2 == 1)
		i = i + 1;
	n = i / 2;
	for (i=0; i < n;i++)
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
