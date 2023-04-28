#include "lists.h"

/**
 * get_string_len - find string length
 * @str: string
 * Return: length
 */
int get_string_len(const char *str)
{
	int i, length = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		length++
	}
	return (i);
}

/**
 * add_node - add a node at the beginning
 * @head: pointer to first node
 * @str: string
 * Return: pointer to list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	unsigned int length;

	if (new == NULL)
	{
		return (NULL);
	}
	length = get_string_len(str);
	new->str = strdup(str);
	new->len = length;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
