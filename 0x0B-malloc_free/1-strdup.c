#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	int i = 0;
	int j = 0;
	int k = 0;
	char *ptr;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	ptr = malloc(sizeof(char) * (i + 1));
	if (ptr == NULL)
		return (NULL);
	while (str[j] != '\0')
	{
		ptr[k] = str[j];
		k++;
		j++;
	}
	return (ptr);
}
