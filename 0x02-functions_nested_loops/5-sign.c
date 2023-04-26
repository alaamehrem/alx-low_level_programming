#include "main.h"
/**
 *print_sign - prints sign of n
 *@n: the number to be checked
 *Return: 1 if positive , 0 otherwise , -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
