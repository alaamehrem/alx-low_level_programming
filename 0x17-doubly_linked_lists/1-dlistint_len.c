#include "lists.h"
#include <stdio.h>
/**
 * dlistint_len - return the length of a list
 * @h: head node
 * Return: the length of a list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
