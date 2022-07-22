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

/**
 * delete_dnodeint_at_index - fctn that deletes a node at index
 * @head: head of linked list
 * @index: index to delete new node
 * Return: 1 if OK, -1 if KO
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count;
	dlistint_t *interim;

	count = 0;

	/* case with empty list as per instructions */
	if ((*head) == NULL)
		return (-1);

	/* defining the head as the temporary node for the index */
	interim = *head;
	/* case when deleting the first node in the index */
	if (index == 0)
	{
		(*head) = (*head)->next;
		if ((*head) != NULL)
		{
			(*head)->prev = NULL;
		}
		free(interim);
		return (1);
	}
	/* any other case than the previous ones */
	/* start the loop to reach the node before the one to delete (indx-1) */
	while (count < (index - 1) && interim != NULL)
	{
		interim = interim->next;
		count++;
	}
	/* case where the asked node to delete is not in the range */
	if (count != (index - 1) || interim->next == NULL)
		return (-1);
	if (interim->next != NULL)
		interim->next->prev = interim->prev;
	free(interim);
	return (1);
}
