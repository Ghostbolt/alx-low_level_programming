#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements
 * @h: pointer to list_t
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t iN = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (iN);
}
