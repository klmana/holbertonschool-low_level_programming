#include "lists.h"

/**
 *listint_len - function that returns number of elements in a linked listint
 *@h: the list
 *Return: number of elements/nodes
 */
size_t listint_len(const listint_t *h)
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
