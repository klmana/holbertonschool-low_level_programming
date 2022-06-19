#include "main.h"

/**
 *_strchr - function that locates a character in a string.
 *@c: pointer to the first occurrence of the character
 *@s: in the stringpointeR
 *Return: NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	while (1)
	{
		i = *s++;
		if (i == c)
		{
			return (s - 1);
				}
		if (i == 0)
		{
			return (NULL);
				}
	}
}
