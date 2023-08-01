#include "lists.h"

/**
 * free_listint2 - This function frees a linked list
 * @head: This represents pointer to the listint_t list to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *tempoorary;

	if (head == NULL)
		return;

	while (*head)
	{
		temporary = (*head)->next;
		free(*head);
		*head = temporary;
	}

	*head = NULL;

}
