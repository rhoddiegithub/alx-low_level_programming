#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc 'ed string)
 * @next: points to the next node
 * Description: singly linked lists node structure
 */
typedef struct list_s
{
	char *str;
	int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
