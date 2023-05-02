#include "lists.h"

/**
 * print_listint_safe - function that prints a linked list with a loop safely.
 * @head: pointer to the 1st node of the list
 * Return: nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp = NULL;
	const listint_t *current = NULL;
	unsigned int size = 0;
	unsigned int nodes;

	tmp = head;

	while (tmp)
	{
		printf("[%p] %d\n", (void *)tmp, tmp->n);
		size++;
		tmp = tmp->next;
		current = head;
		for (nodes = 0; nodes < size; nodes++)
		{
			if (tmp == current)
			{
				printf("-> [%p] %d\n", (void *)tmp, tmp->n);
				return (size);
			}
			current = current->next;
		}
		if (!head)
		{
			exit(98);
		}
	}
	return (size);
}
