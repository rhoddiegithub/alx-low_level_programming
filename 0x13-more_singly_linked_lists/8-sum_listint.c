#include "lists.h"

/**
 * sum_listint - return sum of all data in linked list.
 * @head: pointer to the head of the list.
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	listint_t *tmp_node;
	int sum = 0;

	tmp_node = head;

	while (tmp_node != NULL)
	{
		sum += tmp_node->n;
		tmp_node = tmp_node->next;
	}
	return (sum);
}
