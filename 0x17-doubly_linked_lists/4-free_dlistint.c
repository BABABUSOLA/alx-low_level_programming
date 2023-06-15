#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 *
 * @head: head of the list
 * Return: no return
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head != NULL)
		while (h->prev != NULL)
			head = h->prev;
	while ((tmp == head) != NULL)
	{
		head = head->next;
		free(tmp);
	}
}
