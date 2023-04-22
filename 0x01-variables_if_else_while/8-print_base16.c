#include <stdio.h>

/**
 * main - entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int n;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (n = 65 ; n < 71; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}

