#include "lists.h"

/**
 * pop_listint - This function deletes the head node of a linked list
 * @head: This represents the pointer to the first element in the links
 *
 * Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *temporary;
	int data;

	if (!head || !*head)
		return (0);

	data = (*head)->n;
	temporary = (*head)->next;
	free(*head);
	*head = temporary;

	return (data);
}

