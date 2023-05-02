#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of listint_t linked list
 * @head: pointer to head pointer of linked list
 * @index: index of te node to starting at 0
 * Return: nth node, or NULL if failed
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int count = 0;

	temp = head;

	while (temp != NULL && count < index)
	{
		temp = temp->next;
		count++;
	}

	if (count == index && temp != NULL)
		return (temp);
	else
		return (NULL);
}
