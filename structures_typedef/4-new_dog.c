#include <stdlib.h>
#include "dog.h"
/**
 *_strlen - function that returns the length of a string.
 *@s:provides a similar function: strlen
 *Return: 0
 *we define *s as a pointer to the integer s
 *we define a variable a that is the length of the string s
 *s[a] is definining an array of the length of the string of characters defined
 *the for loop takes all the possible values of a from 0 until the end of
 *then the function returns the lenghts of s whcih is an
 */
int _strlen(char *s)
{
	int a;

	a = 0;
	while (s[a] != '\0')
	{
		a = a + 1;
	}
	return (a);
}

/**
 * new_dog - function that creates a new dog
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner
 * Return: Newdog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;
	int len1, len2;
	int i;

	if (name == NULL)
		name = "";
	if (owner == NULL)
		owner = "";
	len1 = _strlen(name);
	len2 = _strlen(owner);
	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);
	(*ndog).name = malloc(sizeof(char) * (len1 + 1));
	if ((*ndog).name == NULL)
	{
		free(ndog);
		return (NULL);
	}
	(*ndog).owner = malloc(sizeof(char) * (len2 + 1));
	if ((*ndog).owner == NULL)
	{
		free(ndog);
		free((*ndog).name);
		return (NULL);
	}
	i = 0;
	while (i <= len1)
	{
		(*ndog).name[i] = name[i];
	i++;
	}
	i = 0;
	while (i <= len2)
	{
		(*ndog).owner[i] = owner[i];
	i++;
	}
	(*ndog).age = age;
	return (ndog);
}
