#include "lists.h"

/**
 * listint_len - This function returns the 
 * number of elements in a linked lists
 * @h: this represents the linked list of type listint_t to traverse
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t list_len = 0;

	while (h)
	{
		list_len++;
		h = h->next;
	}

	return (list_len);
}

