#include "lists.h"

/**
 * delete_dnodeint_at_index - fctn that deletes a node at index
 * @head: head of linked list
 * @index: index to delete new node
 * Return: 1 if OK, -1 if KO
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *toBeRemoved = NULL;

	/* case with empty list as per instructions */
	if (*head == NULL)
		return (-1);
	if (head == NULL)
		return (-1);

	toBeRemoved = *head;

	/* case when deleting the first node in the index */
	if (index == 0)
	{
		*head = (*head)->next;
		free(toBeRemoved);
		if ((*head) != NULL)
			(*head)->prev = NULL;
		return (1);
	}
	/* any other case than the previous ones */
	/* start the loop to reach the node before the one to delete (indx-1) */
	while ((index != 0) && (toBeRemoved->next != NULL))
	{
		index -= 1;
		toBeRemoved = toBeRemoved->next;
	}

/* case where the asked node to delete is not in the range */
	if (index == 0)
	{
		toBeRemoved->prev->next = toBeRemoved->next;
		if (toBeRemoved->next != NULL)
			toBeRemoved->next->prev = toBeRemoved->prev;
		free(toBeRemoved);
		return (1);
	}
	return (-1);
}
