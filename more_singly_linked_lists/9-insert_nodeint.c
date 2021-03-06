#include "lists.h"

/**
 * insert_nodeint_at_index - function insert a new node at a given position
 * @head: head of linked list
 * @idx: index to insert new node
 * @n: content of the new node
 * Return: address of new node, or NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count;
	listint_t *newNode;
	listint_t *interim;

	count = 0;

	/* case with empty list */
	if (head == NULL)
		return (NULL);
	/* allocate memory for new node */
	newNode = malloc(sizeof(listint_t));
	/* case where the new node is empty */
	if (newNode == NULL)
		return (NULL);
	/* assign temporary value of newNode to n */
	newNode->n = n;
	/* case where index is 0 then has to insert newNode as head) */
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	/* any other case than the previous ones */
	/* define the interim/temporary as the head to start indexing */
	interim = *head;
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
