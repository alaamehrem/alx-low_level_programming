#include "main.h"
/**
 * print_last_digit - prints last digit
 * @n: number to be checked
 * Return: always 0
 */
int print_last_digit(int n)
{
	int a;
	a = n % 10;
	_putchar(a);
	return (a);
}
