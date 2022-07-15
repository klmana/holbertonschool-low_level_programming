#include "lists.h"

/**
 * delete_nodeint_at_index - function deletes a node at a position in index
 * @head: linked list
 * @index: index to delete node
 * Return: 1 if succeeded, or -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count;
	listint_t *active;
	listint_t *interim;

	count = 0;

	/* case with empty list as per instructions */
	if (*head == NULL)
		return (-1);
	/* defining the head as the temporary node for the index */
	interim = *head;
	/* case when deleting the first node in the index */
	if (index == 0)
	{
		*head = interim->next;
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
	/* define&link the place of the links before and afterthe one deleted*/
	active = interim->next;
	interim->next = active->next;
	return (1);
}
