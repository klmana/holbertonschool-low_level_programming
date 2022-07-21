#include "lists.h"

/**
 *dlistint_len - function that returns number of elements in a linked dlistint
 *@h: the list
 *Return: number of elements/nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodesCount;

	nodesCount = 0;
	while (h != NULL)
	{
		nodesCount++;
		h = h->next;
	}
	return (nodesCount);
}
