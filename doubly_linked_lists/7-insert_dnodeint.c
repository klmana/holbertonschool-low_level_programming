#include "lists.h"

/**
 * insert_dnodeint_at_index - fctn that insert a new node at a given position
 * @h: head of linked list
 * @idx: index to insert new node
 * @n: content of the new node
 * Return: address of new node, or NULL if failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count;
	dlistint_t *newNode;
	dlistint_t *interim;

	count = 0;

	/* case with empty list */
	if (h == NULL)
		return (NULL);
	/* allocate memory for new node */
	newNode = malloc(sizeof(dlistint_t));
	/* case where the new node is empty */
	if (newNode == NULL)
		return (NULL);
	/* assign temporary value of newNode to n */
	newNode->n = n;
	     /* define the interim/temporary as the head to start indexing */
	     interim = *h;
	/* case where index is 0 then has to insert newNode as head) */
	if (idx == 0)
	{
		newNode->next = interim;
		newNode->prev = NULL;
		if (interim != NULL)
			interim->prev = newNode;
		*h = newNode;
		return (newNode);
	}
	/* any other case than the previous ones */

	/* start the loop to reach the node before the one to add (indx -1) */
	while (count < (idx - 1))
	{
		interim = interim->next;
		count++;
		/* case where the asked node to insert is not in the range */
		if (interim == NULL)
		return (NULL);
	}
	/* define&link the newNode its place within the list using interim*/
	newNode->next = interim->next;
	interim->next = newNode;
	return (newNode);
}
