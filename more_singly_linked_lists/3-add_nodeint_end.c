#include "lists.h"

/**
 *add_nodeint_end - function that adds a new node at the end of a listint_t
 *@head: head of the list
 *@n: data to insert in the list
 *Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *prevNode;

	/* to create new node and allocate size in the memory */
	newNode = malloc(sizeof(listint_t));
	/* if there is no more space then return NULL */
	if (newNode == NULL)
		return (NULL);
	/* set the values of the newNode to n */
	newNode->n = n;
	/**
	 *linking the newNode to next down the list
	 *to find the last item of the list which is empty
	 */
	newNode->next = NULL;
	/* scenario if the list is empty then define newNode as the head */
	if (*head == NULL)
		*head = newNode;
	/* otherwise define the previousnode as the new head */
	else
	{
		prevNode = *head;
		/* run while loop till end of the list which is the last node */
		while (prevNode->next != NULL)
		{
			prevNode = prevNode->next;
		}
		/* the last node which is prev is now linked to the newnode */
			prevNode->next = newNode;
	}
	return (newNode);
}
