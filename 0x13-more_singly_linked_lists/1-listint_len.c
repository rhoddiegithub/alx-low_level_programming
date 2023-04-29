#include "lists.h"

/**
 * listint_len - functions that returns the number of elements in a
 *	linked listint_t list.
 * @h: points to node
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
