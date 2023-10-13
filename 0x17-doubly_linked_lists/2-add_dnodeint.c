#include "lists.h"

/**
 * add_dnodeint - add new node at the beginning
 * @head: head of a list
 * @n: data
 *
 * Return: the address of the new element,
 * or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;
	temp->prev = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (*head);
	}

	temp->next = *head;
	(*head)->prev = temp;
	*head = temp;
	return (temp);
}
