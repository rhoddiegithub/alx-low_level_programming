#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list safely
 * @h: A pointer to the address of the head
 * Return: The size of the list that was freed
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *curt, *tmp;
	size_t size = 0;

	if (h == NULL || *h == NULL)
	{
		return (0);
	}
	curt = *h;
	while (curt != NULL)
	{
		tmp = curt;
		curt = curt->next;
		size++;
		free(tmp);
		if (tmp <= curt)
		{
			break;
		}
	}
	*h = NULL;
	return (size);
}
