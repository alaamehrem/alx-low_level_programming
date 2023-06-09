#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input
 * @a: counter
 * Return: result
 */
int act_sqrt(int n, int a);
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (act_sqrt(n, 0));
}

/**
 * act_sqrt - recurses to find the natural
 * square root of a number
 * @n: number
 * @a: counter
 * Return: the result
 */
int act_sqrt(int n, int a)
{
	if (a * a > n)
		return (-1);
	if (a * a == n)
		return (a);
	return (act_sqrt(n, a + 1));
}


