#include "lists.h"

/**
 * listint_len - returns the number of elements
 * @h: linked list
 * Return: num of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t tNum = 0;

	while (h)
	{
		tNum++;
		h = h->next;
	}
	return (tNum);
}
