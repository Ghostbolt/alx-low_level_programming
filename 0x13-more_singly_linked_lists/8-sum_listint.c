#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data
 * @head: first node
 * Return: resul sum
 */
int sum_listint(listint_t *head)
{
	int iSum = 0;
	listint_t *temp = head;

	while (temp)
	{
		iSum += temp->n;
		temp = temp->next;
	}
	return (iSum);
}
