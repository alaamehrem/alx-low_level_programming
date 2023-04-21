#include <stdio.h>
/**
 * main - entry point
 * Return: 0 success
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z' && letter != 'q' && letter != 'e')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
