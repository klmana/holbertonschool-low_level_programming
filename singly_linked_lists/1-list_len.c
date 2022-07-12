#include "lists.h"
#include <stdio.h>

/**
 *list_len - function that returns the number of elements in linked list_t list
 *@h: pointer to be print
 *Return: node number
 */

size_t list_len(const list_t *h)
{
	size_t s;
		s = 0;
	while (h != NULL)
	{
		h = h->next;
		s = s + 1;
	}
	return (s);
}
