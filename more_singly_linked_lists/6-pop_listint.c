#include "lists.h"

/**
 *pop_listint - function that deletes the head node of a listint_t linked list
 *@head: data linked list
 *Return: the head node’s data (n);0 if list empty
 */
int pop_listint(listint_t **head)
{
	/* define interim as a temporary list */
	listint_t *interim;
	/* declare headNodeData as head node data */
	int headNodeData;

	/* scenario where there is no linked list */
	if (*head == NULL)
		return (0);

	/* define interim as the head to free it first */
	interim = *head;
	/* storing headNodeData to be returned */
	headNodeData = interim->n;
	/* link the head node to the next node */
	*head = interim->next;
	/* frees the space allocated to interim */
	free(interim);
	return (headNodeData);
}
