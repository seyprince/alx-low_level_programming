#include "lists.h"
/**
 * free_listint2 - Frees a listint_t list and sets the head to NULL.
 *
 * @head: A pointer to the head of the listint_t list.
 *
 * Description: This function frees all the nodes of a linked list
 * and sets the head of the list to NULL. The function uses a double
 * pointer to the head of the list, so that the head can be modified
 * if the list is empty or if all nodes are removed from the list.
 *
 * Return: void.
 */
void free_listint2(listint_t **head)
{
	listint_t *cnode, *tempo;

	if (head == NULL)
		return;
	cnode = *head;
	while (cnode != NULL)
	{
		tempo = cnode;
		cnode = cnode->next;
		free(tempo);
	}
	*head = NULL;
}

