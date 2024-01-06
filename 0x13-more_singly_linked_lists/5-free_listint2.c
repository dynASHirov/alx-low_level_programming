#include "lists.h"

/**
 * free_listint2 - A function that frees a list and sets head to NULL
 * @head: A pointer to listint_t structure
 * Return: Nothing.
 */

void free_listint2(listint_t **head)
{
	listint_t *temps;

	if (head == NULL)
		return;

	temps = *head;
	while (*head)
	{
		temps = *head;
		(*head) = (*head)->next;
		free(temps);
	}
	*head = NULL;
}
