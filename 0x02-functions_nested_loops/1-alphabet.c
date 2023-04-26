#include "main.h"
/**
 * main - entry point
 * Return: 0 success
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
	return (0);
}
