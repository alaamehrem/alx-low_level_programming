#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: is the number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
			break;
		printf("%d", va_arg(list, int));
		if (i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
