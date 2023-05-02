#include "lists.h"

/**
 * free_listint - a function that frees a list.
 * @head: pointer to the head of the list
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;

	while (temp != NULL)
	{
		listint_t *next = temp->next;

		free(temp);
		temp = next;
	}
}
