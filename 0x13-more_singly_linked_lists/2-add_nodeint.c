#include "lists.h"

/**
 * add_nodeint - This function adds a new node at
 * the beginning of a linked list
 * @head: This is a pointer to the first node in the list
 * @n: represents the data of the new node
 *
 * Return: The address of the new element, or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

