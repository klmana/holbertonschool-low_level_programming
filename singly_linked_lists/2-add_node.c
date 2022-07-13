#include "lists.h"
/**
  *_strlen - function that returns the length of a string.
  *@s:provides a similar function: strlen
  *Return:(0)
  */
int _strlen(char *s)
{
	int a;

	for (a = 0; s[a]; a++)
		;
	return (a);
}

/**
 *add_node - Write a function that adds a new node at the beginning of a list_t
 *@head: list have to display
 *@str: needs to be duplicated
 *Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *s;
	list_t *prev;

	s = malloc(sizeof(list_t));
	if (s == NULL)
		return (NULL);
	prev = *head;
	s->str = strdup(str);
	if (s->str == NULL)
		free(s);
	s->len = _strlen(s->str);

	s->next = prev;
	*head = s;
	return (s);
}
