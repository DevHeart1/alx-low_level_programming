#include "lists.h"

/**
 * list_len - This returns the  number of element
 * @h: This represents the head
 *
 * Return: number of node
 */

size_t list_len(const list_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}

	return (len);
}
