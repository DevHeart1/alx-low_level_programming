#include "lists.h"

/**
 * free_list - This function frees a list_t
 * @head: This represents the head
 *
 * Return: 0
 */

void free_list(list_t *head)
{
	list_t *ptr = malloc(sizeof(list_t));

	ptr = head;
	while (ptr != NULL)
	{
		free(ptr->str);
		free(ptr);
		ptr = ptr->next;
	}
}
