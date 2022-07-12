#include "lists.h"
#include <stdio.h>
/**
 *print_list -  function that prints all the elements of a list_t list.
 *@h: The pointer to the list_t to be print
 *Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t s;

	s = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		s = s + 1;
	}
	return (s);
}
