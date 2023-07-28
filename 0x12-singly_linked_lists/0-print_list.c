#include "lists.h"

/**
 * size_t print_list - This function prints all the elements
 * @h: This represents the head
 * Return: The number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count_node = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count_node++;
	}

	return (count_node);
}
