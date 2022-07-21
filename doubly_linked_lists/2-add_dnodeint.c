#include "lists.h"

/**
 *add_dnodeint - function that adds a new node at the beginning of a dlistint_t
 *@head: head of the list
 *@n: data to insert in the list
 *Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	/* to create new node and allocate size in the memory */
	newNode = malloc(sizeof(dlistint_t));
/* if there is no more space then return NULL*/
	if (newNode == NULL)
		return (NULL);
	/*set the values of the newNode to n*/
	newNode->n = n;
	/*link the newNode to point to the head of the list*/
	newNode->next = *head;
	/*define newNode as being the new head of the list*/
	*head = newNode;
	return (newNode);
}
