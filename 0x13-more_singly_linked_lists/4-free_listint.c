#include "lists.h"

/**
 * free_listint - Frees a our working list.
 * @head: A pointer to the head of the working list to be freed.
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
