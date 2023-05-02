#include "lists.h"

/**
 * pop_listint -  function that deletes the head node of a
 *	linked list, and returns the head node’s data (n).
 * @head: double pointer to the head
 * Return: value of the node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp_node;
	int num;

	if (*head == NULL)
		return (0);

	tmp_node = *head;
	*head = (*head)->next;
	num = tmp_node->n;
	free(tmp_node);

	return (num);
}
