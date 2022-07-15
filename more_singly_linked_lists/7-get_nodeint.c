#include "lists.h"

/**
 *get_nodeint_at_index - function returns the nth node of listint_t linked list
 *@head: pointer to the head of linked list
 *@index: nth node
 *Return: the node place in the list,NULL if note does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter;

	counter = 0;
	/* scenario where the head doesnt exist */
	if (head == NULL)
		return (NULL);
	/* iteration until reaching the end of the list to run the loop */
	while (counter < index)
	{
		head = head->next;
		counter++;
	}
	return(head);
}
