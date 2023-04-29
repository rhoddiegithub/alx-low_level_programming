#include "lists.h"

/**
 * print_listint - a function that prints all the elements
 *	of a list.
 * @h: linked list
 * Return: number of nodes in the linked list
 */

size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
