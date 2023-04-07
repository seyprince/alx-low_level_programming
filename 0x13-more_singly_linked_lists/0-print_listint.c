#include "lists.h"
/**
 * print_listint - prints a linked lists
 * @h: pointer to first node
 *
 * Return: size of list
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		printf("-> 0 elements\n");
		return (count);
	}
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	if  (count == 0)
	{
		printf("-> 0 elements\n");
	}
	return (count);
}

