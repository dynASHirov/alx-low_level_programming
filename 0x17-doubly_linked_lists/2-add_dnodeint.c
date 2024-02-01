#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *news;
	dlistint_t *h;

	news = malloc(sizeof(dlistint_t));
	if (news == NULL)
		return (NULL);

	news->n = n;
	news->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	news->next = h;

	if (h != NULL)
		h->prev = news;

	*head = news;

	return (news);
}
