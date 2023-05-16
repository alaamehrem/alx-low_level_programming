#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *create_array - creates an array of chars
 * @size: size of array
 * @c: special character
 * Return: 0 success
 */
char *create_array(unsigned int size, char c)
{
	char *t;
	unsigned int i;

	t = malloc(sizeof(char) * size);
	if (size == 0 || t == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	t[i] = c;
	return (t);
}
