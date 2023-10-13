#include "lists.h"

/**
 * print_dlistint - print all element in the list
 * @h: head
 *
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t num_node = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num_node += 1;
	}

	return (num_node);
}
