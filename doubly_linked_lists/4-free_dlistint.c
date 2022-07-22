#include "lists.h"

/**
 *free_dlistint - function that frees a dlistint_t list.
 *@head: data linked list
 *
 */

void free_dlistint(dlistint_t *head)
{
	/* define interim as a temporary list */
	dlistint_t *interim;
	/* while loop until end of the list */
	while (head != NULL)
	{
		/* define interim as the head to free it first */
		interim = head;
		/* increment WHILE loop to roll over the list till the end */
		head = head->next;
		/* frees the temporary list */
		free(interim);
		/**
		 *full process is then :
		 * interim =  head to make sure the list is freed from the head
		 * then the ead being the interim increments till the end
		 * then is freed node by node via the interim node
		 */
	}
}
