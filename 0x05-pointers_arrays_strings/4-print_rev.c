#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints reversed string
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
	while (i > 0)
	{
		_putchar(*s);
		s--;
		i--;
	}
	_putchar('\n');

}
