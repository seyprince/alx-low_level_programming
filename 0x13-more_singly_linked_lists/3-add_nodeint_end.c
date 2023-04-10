#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to a pointer to the head node of the list
 * @n: integer value to be stored in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nn, *endnode;

	if (head == NULL)
		return (NULL);
	nn = malloc(sizeof(listint_t));
	if (nn == NULL)
		return (NULL);

	nn->n = n;
	nn->next = NULL;

	if (*head == NULL)
	{
		*head = nn;
	}
	else
	{
		endnode = *head;
		while (endnode->next != NULL)
		{
			endnode = endnode->next;
		}
		endnode->next = nn;
	}
	return (nn);
}

