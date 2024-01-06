#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head of the list
 * @index: place to insert node
 * @n: value of the inserted node
 * Return: pointer to head of list
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *current, *news;

	current = *head;
	new = malloc(sizeof(listint_t));
	if (news == NULL)
		return (NULL);
	news->n = n;
	if (index == 0)
	{
		news->next = current;
		*head = news;
		return (*head);
	}
	while (index > 1)
	{
		current = current->next;
		index--;
		if (!current)
		{
			free(news);
			return (NULL);
		}
	}
	news->next = current->next;
	current->next = news;
	return (news);
}
