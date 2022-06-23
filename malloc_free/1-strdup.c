#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 *_strdup - function that returns a pointer to a newly allocated space in mem
 *@str: function returns a pointer to a new string which is a duplicate ofstr
 *Return: pointer to the copied string (OK), NULL (KO)
 */
char *_strdup(char *str)
{
	char *j;
	unsigned int i, len;

	i = 0;
	len = 0;

	if (str == NULL)
		return (NULL);
	while (str[len])
		len = len + 1;
	j = malloc(sizeof(*j) * (len + 1));
	if (j == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		j[i] = str[i];
		i = i + 1;
	}
	j[i] = '\0';
	return (j);
}
