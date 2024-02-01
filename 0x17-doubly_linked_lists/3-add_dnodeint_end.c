#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: A pointer to the head of the dlistint_t list.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *news, *last;

	news = malloc(sizeof(dlistint_t));
	if (news == NULL)
		return (NULL);
	news->n = n;
	news->next = NULL;

	if (*head == NULL)
	{
		news->prev = NULL;
		*head = news;
		return (news);
	}

	last = *head;
	while (last->next != NULL)
		last = last->next;
	last->next = news;
	new->prev = last;

	return (news);
}
