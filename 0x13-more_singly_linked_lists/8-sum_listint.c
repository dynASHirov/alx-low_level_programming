#include "lists.h"

/**
 * sum_listint - A function that sums values from listint_t
 * @head: A pointer listint_t structure
 * Return: The sum of all the data n from list
 */

int sum_listint(listint_t *head)
{
	int sums = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sums += head->n;
		head = head->next;
	}
	return (sums);
}
