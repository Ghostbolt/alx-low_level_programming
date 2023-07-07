#include "lists.h"

/**
 * add_nodeint - adds a new node
 * @head: pointer
 * @n: data to insert
 * Return: pointer to the newNode
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
