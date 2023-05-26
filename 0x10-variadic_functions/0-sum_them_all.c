#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all -  returns the sum of all its parameters
 * @n: number of arguments
 * Return: result
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int sum = 0;

	va_list list;
	va_start(list , n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, unsigned int);
	}
	va_end(list);
	return (sum);
}
