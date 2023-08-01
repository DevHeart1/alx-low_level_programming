#include "lists.h"

/**
 * reverse_listint - This function reverses a linked list
 * @head: This represents a pointer to the first node in the list
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *initial = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = initial;
		initial = *head;
		*head = next;
	}

	*head = initial;

	return (*head);
}

