#include "main.h"
/**
 * print_most_numbers - prints number other than 2 and 4
 */
void print_most_numbers(void)
{
	char i;

	for (i = '0' ; i < '9' ; i++)
	{
		if (i == '2' || i == '4')
			continue;
		else
			_putchar(i);
	}
	_putchar('\n');
}
