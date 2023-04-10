#include "lists.h"
/**
 * free_listint - frees a listint_t list
 * @head: pointer to the head of the linked list
 *
 * This function takes a pointer to the head of a linked list and frees
 * each node of the list one by one, starting from the head.
 * It does not return anything.
 */
void free_listint(listint_t *head)
{
	listint_t *cnode;

	while (head != NULL)
	{
		cnode = head;
		head = head->next;
		free(cnode);
	}
}

