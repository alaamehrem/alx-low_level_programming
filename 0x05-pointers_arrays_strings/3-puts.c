#include "main.h"
void _puts(char *str);
{
	char *str;

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
}
