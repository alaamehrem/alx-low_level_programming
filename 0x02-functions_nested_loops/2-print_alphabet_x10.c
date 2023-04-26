#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10 times
 */
void print_alphabet_x10(void);
{
	int i=0;
	int c=65;

	while (i < 10)
	{
		while (c < 123)
		{
			_putchar(c);
			c++;
		}
		_putchar("\n");
		i++
	}
	return (0);
}
