#include "lists.h"

/**
 *print_dlistint - function that prints all the elements of a listint_t list.
 *@h: pointer to the list
 *Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodesCount;

	nodesCount = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		nodesCount++;
		h = h->next;
	}
	return (nodesCount);
}