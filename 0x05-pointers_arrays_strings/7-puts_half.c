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
	n = i;
	if (i % 2 == 1)
		i = i + 1;
	a = i / 2;
	for (i = i / 2 ; i < n;i++)
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
