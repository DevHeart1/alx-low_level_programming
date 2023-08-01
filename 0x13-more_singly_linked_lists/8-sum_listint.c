#include "lists.h"

/**
 * sum_listint - This function calculates
 * the sum of all the data in a listint_t list
 * @head: This represents the first node in the linked list
 *
 * Return: the sum of all the data (n) of a listint_t linked list.
 */
int sum_listint(listint_t *head)
{
	int data = 0;
	listint_t *tempt = head;

	while (tempt)
	{
		data += tempt->n;
		tempt = tempt->next;
	}

	return (data);
}

