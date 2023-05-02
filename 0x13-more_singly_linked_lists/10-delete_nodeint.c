#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node at a given position
 * @head: pointer to head pointer of list
 * @index: index to delete node
 * Return: 1 if succeed or -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev_node, *curt_node = *head;
	unsigned int idx;

	if (curt_node == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(curt_node);
		return (1);
	}

	for (idx = 0; idx < (index - 1); idx++)
	{
		if (curt_node->next == NULL)
		{
			return (-1);
		}

		curt_node = curt_node->next;
	}

	prev_node = curt_node->next;
	curt_node->next = prev_node->next;
	free(prev_node);
	return (1);
}
