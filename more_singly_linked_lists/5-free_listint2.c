#include "lists.h"

/**
 *free_listint2 - function that frees a listint_t list, sets head to NULL
 *@head: data linked list
 *
 */

void free_listint2(listint_t **head)
{
	/* define interim as a temporary list */
	listint_t *interim;

	/* while loop until end of the list */
	while (*head != NULL)
	{
		/* define interim as the head to free it first */
		interim = *head;
		/* increment WHILE loop to roll over the list till the end */
		*head = interim->next;
		/* frees the temporary list */
		free(interim);
		/**
		 *full process is then :
		 * interim =  *head to make sure the list is freed from the head
		 * then the head being the interim increments till the end
		 * then is freed node by node via the interim node
		 */
	}
}
