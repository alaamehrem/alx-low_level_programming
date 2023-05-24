#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - function given as a parameter on element of an array.
 * @array: array
 * @size: ize of the array
 * @action: pointer to the function you need to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
