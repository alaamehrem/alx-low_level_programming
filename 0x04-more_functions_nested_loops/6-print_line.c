#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of times the character _ should be printed
 */
void print_line(int n)
{
	int i;

	while (i <= n && !(i<=0))
	{
		_putchar('_');
		i++
	}
	_putchar('\n');
}
