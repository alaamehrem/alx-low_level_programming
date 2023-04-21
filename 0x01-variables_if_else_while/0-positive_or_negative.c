#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * Return: 0 otherwise
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("The number is positive\n");
	}
	else if (n < 0)
	{
		printf("The number is negative\n");
	}
	else
	{
		printf("The number is zero\n");
	}
	return (0);
}
