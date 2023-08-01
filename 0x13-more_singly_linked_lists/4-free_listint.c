#include "lists.h"

/**
 * free_listint - This function frees a linked list
 * @head: This represents listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *temporary;

	while (head)
	{
		temporary = head->next;
		free(head);
		head = temporary;
	}
}

