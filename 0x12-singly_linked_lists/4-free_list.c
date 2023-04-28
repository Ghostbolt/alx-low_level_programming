#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list
 * @head: list_t freed
 */
void free_list(list_t *head)
{
	list_t *tempNod;

	while (head)
	{
		tempNod = head->next;
		free(head->str);
		free(head);
		head = tempNod;
	}
}
