#include "lists.h"

/**
 * add_node_end - This adds a new node at the end
 * @head: This represents the head
 * @str: The string to duplicate
 *
 * Return: 0 on success
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *r = malloc(sizeof(list_t));

	if (r == NULL)
		return (NULL);

	r->str = strdup(str);
	r->len = strlen(str);
	r->next = NULL;

	if (*head == NULL)
	{
		*head = r;
		return (*head);
	}

	list_t *ptr = malloc(sizeof(list_t));

	ptr = head;
	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = r;
}
