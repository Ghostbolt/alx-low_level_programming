#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: pointer
 * Return: deleted poppy thingy
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int iNum;

	if (!head || !*head)
	{
		return (0);
	}
	iNum = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (iNum);
}
