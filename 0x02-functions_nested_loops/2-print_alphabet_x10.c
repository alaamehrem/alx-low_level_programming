#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10 times
 */
void print_alphabet_x10(void)
{
	int i=0;
	char c='a';

	while (i < 10)
	{
		while (c <='z')
		{
			_putchar(c);
			c++;
		}
		_putchar("\n");
		i++;
	}
}
