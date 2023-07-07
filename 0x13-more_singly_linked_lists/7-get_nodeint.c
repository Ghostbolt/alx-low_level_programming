#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index
 * @head: first node in the linked list
 * @index: index
 * Return: pointer to the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int iNum = 0;
	listint_t *temp = head;

	while (temp && iNum < index)
	{
		temp = temp->next;
		iNum++;
	}
	return (temp ? temp : NULL);
}
