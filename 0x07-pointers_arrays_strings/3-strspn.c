#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: input
 * @accept: input
 * Return: 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	int n = 0;
	int i = 0;

	while (s[i] != ' ')
	{
		int j;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				n++;
			else
				continue;
		}
		i++;
	}
	return (n);
}
