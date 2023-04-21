#include <stdio.h>
/**
 * main - entry point
 * Return: 0 success
 */
int main(void)
{
	char letter = 'a';
	char capital = 'A';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	while (capital <= 'Z')
	{
		putchar(capital);
		capital++;
	}
	putchar('\n');
	return (0);
}
