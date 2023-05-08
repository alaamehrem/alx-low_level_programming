#include "main.h"
/**
 *_memcpy - copies memory area
 *@dest: memory stored
 *@src: memory copied
 *@n: number of bytes
 *Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

