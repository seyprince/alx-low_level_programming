#include "lists.h"
/**
 * free_listint2 - frees a listint_t list but sets head to null
 * @head: pointer to the head of the linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *cnode, *tempo;

	if (head == NULL)
	{
		printf("Freed!\n");
		return;
	}
	cnode = *head;

	while (cnode != NULL)
	{
		tempo = cnode;
		cnode = cnode->next;
		free(tempo);
	}
	*head = NULL;
	printf("Freed!\n");
}

