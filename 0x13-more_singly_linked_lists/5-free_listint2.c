#include "lists.h"
/**
 * free_listint2 - frees a listint_t list but sets head to null
 * @head: pointer to the head of the linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *cnode;

	while (*head != NULL)
	{
		cnode = *head;
		*head = (*head)->next;
		free(cnode);
	}
	*head = NULL;
}

