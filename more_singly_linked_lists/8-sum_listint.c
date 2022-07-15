#include "lists.h"

/**
 *sum_listint - function returns the sum the data of listint_t linked list
 *@head: pointer to the head of linked list
 *Return: the sum,NULL if note does not exist
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	/* scenario where the list doesnt exist has to return 0 */
	if (head == NULL)
		return (0);
	/* iteration until reaching the end of the list to run the loop */
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
