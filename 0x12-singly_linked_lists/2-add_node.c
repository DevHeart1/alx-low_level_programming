#include "lists.h"

/**
 * add_node - This adds a new node at the beginning
 * @head: This represents the head
 * @str: This represents string to duplicate
 *
 * Return: new address
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *r = malloc(sizeof(list_t));

	if (r == NULL)
		return (NULL);

	r->str = strdup(str);
	r->len = strlen(str);
	r->next = NULL;

	r->next = *head;
	*head = r;

	return (r);
}
