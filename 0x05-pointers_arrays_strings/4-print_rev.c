#include "main.h"
#include <stdio.h>
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: counter value
 */
void print_rev(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	s--;
	while (i >= 0)
	{
		_putchar(*s);
		s--;
		i--;
	}
	_putchar('\n');

}
