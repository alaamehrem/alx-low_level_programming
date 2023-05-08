#include "main.h"
/**
 *_memset - fills the first n bytes of the memory with the constant b
 *@n: number of bytes in the memory area
 *@s: pointer to memory
 *@b: constant byte that fills memory
 *Return: pointer to memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
