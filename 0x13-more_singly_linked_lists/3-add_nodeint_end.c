#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node
 *	at the end of a list.
 * @head: pointer to pointer to linked list
 * @n: int
 * Return: address of linked list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	temp = *head;

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
	return (*head);
}
