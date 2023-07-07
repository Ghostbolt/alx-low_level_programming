#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 * @h: listint_t linked list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t tNum = 0;

	while (h)
	{
		printf("%d\n", h->n);
		tNum++;
		h = h->next;
	}
	return (tNum);
}
