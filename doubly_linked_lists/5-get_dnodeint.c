#include "lists.h"

/**
 *get_dnodeint_at_index - fcton returns the nth node of dlistint_t linked list
 *@head: pointer to the head of linked list
 *@index: nth node
 *Return: the node place in the list,NULL if note does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter;

	counter = 0;
	/* scenario where the head doesnt exist */
	if (head == NULL)
		return (NULL);
	/* iteration until reaching the end of the list to run the loop */
	while (counter < index && head != NULL)
	{
		head = head->next;
		counter++;
	}
	/* returns the value only if the counter is within the index value */
	if (counter == index)
		return (head);
	/* if the counter is not within the index then return NULL */
	return (NULL);
}
