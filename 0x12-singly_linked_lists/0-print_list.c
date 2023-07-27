#include "lists.h"

/**
 * size_t print_list - This function prints all the elements 
 * @h: This represents the head
 * Return: The number of nodes
 */


size_t print_list(const list_t *h)
{
	const list_t *ptr = h;
	size_t count_node = 0;

	while (ptr != NULL)
	{
			if (ptr->str ==NULL)
					print("[0] (nul\n");
			else
					printf("[%d] %s\n", h->len, h->str);
			ptr = ptr->next;
			count_node++;

	}
	return (count_node);
}
